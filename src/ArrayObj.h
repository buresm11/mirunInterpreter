#pragma once

#include "Obj.h"
#include "Types.h"

class ArrayObj : public Obj {

	Obj ** value;
	int array_size;

public:
	ArrayObj(int array_size, Obj ** value) : Obj(ArrayType), value(value), array_size(array_size) { }

	Obj ** get_value(){
		return value;
	}

	void set_value(Obj ** value){
		this->value = value;
	}

	int get_array_size() {
		return array_size;
	}
};