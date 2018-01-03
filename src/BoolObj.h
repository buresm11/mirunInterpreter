
#pragma once

#include "Obj.h"
#include "Types.h"

class BoolObj : public Obj {
	bool value;

public:
	BoolObj() : Obj(BoolType), value(false) { }
	BoolObj(bool b) : Obj(BoolType), value(b) { }

	bool getValue(){
		return value;
	}

	void setValue(bool value){
		this->value = value;
	}

	 Obj * copy() {
		return new BoolObj(value);
		
	}
};