#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

#include "Obj.h"
#include "Types.h"

class ArrayObj : public Obj {

	Obj ** value;
	int array_size;
	Type content_type;

public:
	ArrayObj(int array_size, Obj ** value, Type content_type) : Obj(ArrayType), value(value), array_size(array_size), content_type(content_type) { }

	Obj ** get_value()
	{
		return value;
	}

	void set_value(Obj ** value)
	{
		this->value = value;
	}

	int get_array_size() 
	{
		return array_size;
	}

	Type get_content_type()
	{
		return content_type;
	}
};