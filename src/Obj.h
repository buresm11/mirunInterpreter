
#pragma once

#include "Types.h"

class Obj {
private:
	Type type;

public:
	Obj(Type t) : type(t) { }

	Type getType(){
		return type;
	}
};