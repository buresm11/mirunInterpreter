
#pragma once

#include <map>
#include <string>

#include "Obj.h"
#include "Environment.h"

class Runtime {

	Environment * environment;

public:

	Runtime() {
		this->environment = new Environment();
	}

	~Runtime(){
		delete environment;
	}

	Environment * getCurrentEnvironment(){
		return environment;
	}

	void createNewEnvironment(){
		Environment * newEnvironment = new Environment(this->environment);
		this->environment = newEnvironment;
	}
};