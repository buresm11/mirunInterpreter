#pragma once

#include "Types.h"

class Obj 
{
	Type type;
	
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
};