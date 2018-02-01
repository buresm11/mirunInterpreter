#include "Visitor.h"
#include "Runtime.h"
#include "Types.h"

ContextValue * Runtime::invoke_function (std::string name, Obj ** args, int args_size)
{
	std::cout << "invoke: " + name << std::endl;

	std::map<std::string, Function *>::iterator it;
	it = functions.find(name);

	if(it == functions.end())
	{
	  	return new ContextValue(NULL, new Error(16, "Function " + name + " not found"));
	}
	else 
	{
		Function * found_function = it->second;
		FuncArg ** func_args =  found_function->get_arg_types();
		int func_args_size = found_function->get_arg_types_size();

		std::cout << func_args_size << "::" << args_size;
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
		//visitor.get_scope add new variables
		visitor.visit(found_function->get_block());
		

		//make the call
	}
}