#pragma once

#include "Obj.h"
#include "Types.h"

class BoolObj : public Obj 
{
	bool value;

public:
	BoolObj() : Obj(BoolType), value(false) { }
	BoolObj(bool b) : Obj(BoolType), value(b) { }

	bool get_value()
	{
		return value;
	}

	void set_value(bool value)
	{
		this->value = value;
	}

	Obj * copy() 
	{
		return new BoolObj(value);
	}
};