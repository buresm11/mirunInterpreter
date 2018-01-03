#pragma once

#include "Obj.h"
#include "Types.h"

class ArrayObj : public Obj {

	Obj ** value;
	int arraySize;

public:
	ArrayObj(int arraySize, Obj ** value) : Obj(ArrayType), value(value), arraySize(arraySize) { }

	Obj ** getValue(){
		return value;
	}

	void setValue(Obj ** value){
		this->value = value;
	}

	int getArraySize() {
		return arraySize;
	}
};