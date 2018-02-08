
#pragma once

#include "Error.h"
#include "Obj.h"

class ContextValue 
{
	Obj * obj;
	Error * error;
	bool is_error;
	bool is_done;

public:
	ContextValue()
	{
		error = NULL;
		obj = NULL;
		is_error = false;
		is_done = false;
	}

	ContextValue(Obj * obj, Error * error) : obj(obj), error(error), is_error(true), is_done(false)
	{
		if(error == NULL)
			is_error = false;
	}

	ContextValue(Obj * obj, Error * error, bool done) : obj(obj), error(error), is_error(true), is_done(done) 
	{
		if(error == NULL)
			is_error = false;
	}

	~ContextValue()
	{
		if(is_error) delete error;
	}

	void set_done(bool done)
	{
		is_done = done;
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

	bool has_done()
	{
		return is_done;
	}
};
