#pragma once

#include "Obj.h"
#include "Types.h"

class IntObj : public Obj {
	int value;

public:
	IntObj() : Obj(IntType), value(9) { }
	IntObj(int i) : Obj(IntType), value(i) {}

	int get_value(){
		return value;
	}

	void set_value(int value){
		this->value = value;
	}

	Obj * copy(){
		return new IntObj(value);
	}
};