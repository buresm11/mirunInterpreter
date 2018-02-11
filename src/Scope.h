
#pragma once

#include "Obj.h"
#include "Environment.h"

class Scope
{
	Environment * environment;
	Scope * parent;

public:
	Scope(Scope * parent) : parent(parent) 
	{
		environment = new Environment();
	}

	~Scope()
	{
		Environment * env = environment;

		while(env != NULL)
		{
			Environment * env_parent = env->get_parent();
			delete env;
			env = env_parent;
		}
	}

	Scope * get_parent()
	{
		return parent;
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
		if(environment->get_parent() != NULL) 
		{
			Environment * tmp = this->environment;
			this->environment = environment->get_parent();
			delete tmp;
		}
	}

	void mark()
	{
		environment->mark();
		if(parent != NULL) parent->mark();
	}
};