#include "Visitor.h"
#include "Runtime.h"
#include "Types.h"

ContextValue * Runtime::invoke_function (std::string name, Obj ** args, int args_size)
{
	std::map<std::string, Function *>::iterator it;
	it = functions.find(name);

	Function * found_function;

	if(it == functions.end())
	{
		delete_args(args, args_size);
	  	return new ContextValue(NULL, new Error(19, "Function " + name + " not found"));
	}
	else 
	{
		found_function = it->second;
		FuncArg ** func_args =  found_function->get_arg_types();
		int func_args_size = found_function->get_arg_types_size();

		if(func_args_size != args_size)
		{
			delete_args(args, args_size);
			return new ContextValue(NULL, new Error(20, "Function call" + name + " incorrect number of arguments"));
		}

		for(int i=0;i<args_size;i++)
		{
			if(func_args[i]->is_array())
			{
				if(args[i]->get_type() == ArrayType)
				{
					if(func_args[i]->get_type() != ((ArrayObj*)args[i])->get_content_type())
					{
						delete_args(args, args_size);
						return new ContextValue(NULL, new Error(21, "Function call " + name + " array arg type does not match"));
					}
				}
				else
				{
					delete_args(args, args_size);
					return new ContextValue(NULL, new Error(22, "Function call " + name + " arg array / nonarray mismatch"));
				}
			}
			else
			{
				if(func_args[i]->get_type() != args[i]->get_type())
				{
					delete_args(args, args_size);
					return new ContextValue(NULL, new Error(23, "Function call " + name + " arg type does not match"));
				}
			}
		}

		Visitor visitor(this);
		Scope * scope = visitor.get_scope();

		for(int i=0;i<args_size;i++)
		{
			ContextValue * context_value_arg = scope->current_environment()->create_variable(func_args[i]->get_name(), args[i]);

			if(context_value_arg->has_error())
			{
				for(int j=i; j < args_size; j++)
				{
					delete args[i];
				}
				delete [] args;
				remove_top_scope();

				return context_value_arg;
			}
			delete context_value_arg;
		}

		delete [] args;

		ContextValue * return_value = visitor.visit(found_function->get_block());
		remove_top_scope();


		if(return_value->has_error())
		{
			return return_value;
		}
		if(return_value->has_done() == false)
		{
			return new ContextValue(NULL, new Error(24, "Function call " + name + " missing return"));
		}

		return_value->set_done(false);

		FuncArg * func_return_type = found_function->get_return_type();

        if(func_return_type->get_type() != return_value->get_obj()->get_type())
        {
        	delete return_value->get_obj();
        	delete return_value;
            return new ContextValue(NULL, new Error(26, "Function call " + name + " return value does not match definition"));
        }

		return return_value;
	}
}