#pragma once

#include <string>

#include "Types.h"


class FuncArg
{
	std::string name;
	bool array;
	Type type;

public:

	FuncArg(std::string name, bool array, Type type) : name(name), array(array), type(type) { }

	std::string get_name()
	{
		return name;
	}

	Type get_type()
	{
		return type;
	}

	bool is_array()
	{
		return array;
	}
};