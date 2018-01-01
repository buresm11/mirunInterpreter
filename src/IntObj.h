
#pragma once

#include "Obj.h"
#include "Types.h"

class IntObj : public Obj {
	int value;

public:
	IntObj(int v) : Obj(IntType),  value(v)  { }

	int getValue(){
		return value;
	}
};