
#pragma once

#include "Obj.h"
#include "Environment.h"


class Scope
{
	Environment * environment;

public:
	Scope() 
	{
		environment = new Environment();
	}

	~Scope()
	{
		delete environment;
	}

	Environment * current_environment()
	{
		return environment;
	}

	void create_new_environment()
	{
		Environment * new_environment = new Environment(this->environment);
		this->environment = new_environment;
	}	

	void remove_top_environment() 
	{ 
		if(environment->get_parent() != NULL) {
			Environment * tmp = this->environment;
			this->environment = environment->get_parent();
			delete tmp;
		}
	}
};