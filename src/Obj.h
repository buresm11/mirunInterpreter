#pragma once

#include "Types.h"

class Obj 
{
	Type type;
	bool marked;

public:
	Obj(Type t) : type(t) { }

	Type get_type()
	{
		return type;
	}

	virtual Obj * copy() 
	{
		return new Obj(type);
	}

	void mark()
	{
		marked = true;
	}

	void unmark()
	{
		marked = false;
	}

	bool is_marked()
	{
		return marked;
	}
};