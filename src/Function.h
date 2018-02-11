
#pragma once

#include "Types.h"
#include "FuncArg.h"
#include "tlParser.h"


class Function
{
	FuncArg * return_type;
	FuncArg ** arg_types;
	int arg_types_size;
	tlParser::BlockContext* block;

public:
	Function(tlParser::BlockContext* block, FuncArg * return_type, FuncArg ** arg_types, int arg_types_size) : block(block), 
		return_type(return_type), arg_types(arg_types), arg_types_size(arg_types_size) { }

	Function(tlParser::BlockContext* block, FuncArg * return_type) : block(block), return_type(return_type)
	{
		arg_types_size = 0;
	}

	~Function()
	{
		delete return_type;
		for(int i=0;i<arg_types_size;i++)
		{
			delete arg_types[i];
		}
		delete [] arg_types;
	}

	FuncArg * get_return_type()
	{
		return return_type;
	}

	FuncArg ** get_arg_types()
	{
		return arg_types;
	}

	int get_arg_types_size()
	{
		return arg_types_size;
	}

	tlParser::BlockContext* get_block()
	{
		return block;
	}
};