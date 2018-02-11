#pragma once

#include <string>

#include "Obj.h"
#include "Types.h"
#include "Array.h"

class ArrayObj : public Obj 
{
	Array * array;
	Type content_type;

public:
	ArrayObj( Array * array, Type content_type) : Obj(ArrayType), array(array), content_type(content_type) { }

	~ArrayObj()
	{
		delete array;
	}

	Obj ** get_value()
	{
		return array->get_array();
	}

	void set_value(Array * array)
	{
		this->array = array;
	}

	int get_array_size() 
	{
		return array->get_array_size();
	}

	Type get_content_type()
	{
		return content_type;
	}

	Obj * copy()
	{
		return new ArrayObj(array, content_type);
	}

	void mark()
	{
		array->mark();
	}

	void unmark()
	{
		array->unmark();
	}

	bool is_marked()
	{
		return array->is_marked();
	}
};