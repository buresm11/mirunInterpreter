
#pragma once

#include "FuncArg.h"
#include "Error.h"

class FuncDeclContext
{
	FuncArg * func_arg;
	Error * error;
	bool is_error;
	bool is_value;

public:

	FuncDeclContext()
	{
		error = NULL;
		func_arg = NULL;
		is_error = false;
		is_value = false;
	}

	FuncDeclContext(FuncArg * func_arg, Error * error) : func_arg(func_arg), error(error), is_error(true)  
	{
		if(error == NULL)
			is_error = false;

		if(func_arg == NULL)
			is_value = false;
	}

	FuncArg * get_func_arg()
	{
		return func_arg;
	}

	Error * get_error()
	{
		return error;
	}

	bool has_error()
	{
		return is_error;
	}

	bool has_value()
	{
		return is_value;
	}
};