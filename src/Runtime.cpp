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
	  	return new ContextValue(NULL, new Error(16, "Function " + name + " not found"));
	}
	else 
	{
		found_function = it->second;
		FuncArg ** func_args =  found_function->get_arg_types();
		int func_args_size = found_function->get_arg_types_size();

		if(func_args_size != args_size)
		{
			return new ContextValue(NULL, new Error(17, "Incorrect number of arguments"));
		}

		for(int i=0;i<args_size;i++)
		{
			if(func_args[i]->is_array())
			{
				if(args[i]->get_type() == ArrayType)
				{
					if(func_args[i]->get_type() != ((ArrayObj*)args[i])->get_content_type())
					{
						return new ContextValue(NULL, new Error(18, "aArguments do not match"));
					}
				}
				else
				{
					return new ContextValue(NULL, new Error(18, "vArguments do not match"));
				}
			}
			else
			{
				if(func_args[i]->get_type() != args[i]->get_type())
				{
					return new ContextValue(NULL, new Error(18, "aArguments do not match"));
				}
			}
		}

		Visitor visitor(this);
		Scope * scope = visitor.get_scope();

		for(int i=0;i<func_args_size;i++)
		{
			scope->current_environment()->create_variable(func_args[i]->get_name(), args[i]);
		}

		ContextValue * return_value = visitor.visit(found_function->get_block());

		if(return_value->has_error())
		{
			return return_value;
		}
		if(return_value->has_done() == false)
		{
			return new ContextValue(NULL, new Error(18, "454564"));
		}

		return_value->set_done(false);

		FuncArg * func_return_type = found_function->get_return_type();

		if(func_return_type->is_array())
        {
            if(return_value->get_obj()->get_type() == ArrayType)
            {
                if(func_return_type->get_type() != ((ArrayObj*)return_value->get_obj())->get_content_type())
                {
                    return new ContextValue(NULL, new Error(18, "aArguments do not match"));
                }
            }
            else
            {
                return new ContextValue(NULL, new Error(18, "v99Arguments do not match"));
            }
        }
        else
        {
            if(func_return_type->get_type() != return_value->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(18, "aArguments do not match"));
            }
        }

		return return_value;
	}
}