
#pragma once

#include "FuncArg.h"

class FuncDeclContext
{
	FuncArg * funcArg;
	Error * error;
	bool is_error;
	bool is_value;

public:

	ContextValue()
	{
		error = NULL;
		obj = NULL;
		is_error = false;
		is_value = false;
	}

	ContextValue(Obj * obj, Error * error) : obj(obj), error(error), is_error(true)  
	{
		if(error == NULL)
			is_error = false;

		if(obj == NULL)
			is_value = false;
	}

	Obj * get_obj()
	{
		return obj;
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