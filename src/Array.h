#pragma once

#include "Obj.h"

class Array
{
	Obj ** array_obj;
	bool marked;
	int array_size;

public:
	Array(Obj ** array_obj, int array_size) : array_obj(array_obj), marked(false), array_size(array_size) { }

	Obj ** get_array()
	{
		return array_obj;
	}

	int get_array_size()
	{
		return array_size;
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
