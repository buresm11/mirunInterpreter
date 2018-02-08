#pragma once

#include <string>

#include "Obj.h"
#include "Types.h"

class StringObj : public Obj 
{
	std::string value;

public:
	StringObj() : Obj(StringType), value("") { }
	StringObj(std::string s) : Obj(StringType), value(s) { }

	std::string get_value()
	{
		return value;
	}

	void set_value(std::string value)
	{
		this->value = value;
	}

	Obj * copy()
	{
		return new StringObj(value);
	}
};