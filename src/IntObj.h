#pragma once

#include "Obj.h"
#include "Types.h"

class IntObj : public Obj {
	int value;

public:
	IntObj() : Obj(IntType), value(0) { }
	IntObj(int i) : Obj(IntType), value(i) {}

	int getValue(){
		return value;
	}

	void setValue(int value){
		this->value = value;
	}

	Obj * copy(){
		return new IntObj(value);
	}
};