
#pragma once

#include "FuncArg.h"
#include "Error.h"

class FuncArgDeclContext
{
	FuncArg * func_arg;
	Error * error;
	bool is_error;

public:

	FuncArgDeclContext()
	{
		error = NULL;
		func_arg = NULL;
		is_error = false;
	}

	FuncArgDeclContext(FuncArg * func_arg, Error * error) : func_arg(func_arg), error(error), is_error(true)  
	{
		if(error == NULL)
			is_error = false;
	}

	~FuncArgDeclContext()
	{
		if(is_error) delete error;
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
};