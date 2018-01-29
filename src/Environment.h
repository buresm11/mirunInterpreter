
#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

#include "Obj.h"
#include "ArrayObj.h"
#include "ContextValue.h"

class Environment {
	std::map<std::string, Obj *> variables;
	Environment * parent;

public:

	Environment() {
		this->parent = NULL;
	}

	Environment(Environment * environment) {
		this->parent = environment;
	}

	Environment* get_parent() {
		return parent;
	}

	ContextValue* create_variable(std::string name, Obj * obj) {

		if (this->variables.insert(std::pair<std::string, Obj *>(name, obj)).second == false)
		{
			return new ContextValue(NULL, new Error(2, "Variable " + name + " is already defined in current scope" ));
		}
		else
		{
			return new ContextValue(obj, NULL);
		}

	}

	ContextValue* set_variable(std::string name, Obj * obj) {

		std::map<std::string, Obj *>::iterator it;
		it = variables.find(name);

		if(it == variables.end()) 
		{
			if(parent == NULL) 
			{
				return new ContextValue(NULL, new Error(7, "Variable " + name + " not found"));
			} 
			else return parent->set_variable(name, obj);
		} 
		else 
		{
			if (it->second->get_type() != obj->get_type())
			{
				return new ContextValue(NULL, new Error(8, "cannon assign to" + name + " bad type"));
			}
			else 
			{
				delete it->second;
				it->second = obj;

			    return new ContextValue(obj, NULL);
			}			
		}
	}

	ContextValue* set_array_variable(std::string name, Obj * obj, int index)
	{
		std::map<std::string, Obj *>::iterator it;
		it = variables.find(name);

		if(it == variables.end()) 
		{
			if(parent == NULL)
			{
				return new ContextValue(NULL, new Error(7, "Variable " + name + " not found"));
			}
			else return parent->set_array_variable(name, obj, index);
		} 
		else 
		{
			if(it->second->get_type() == ArrayType)
			{
				ArrayObj * array_obj = (ArrayObj*)it->second;
				Obj ** array = array_obj->get_value();
				int array_size = array_obj->get_array_size();

				if(index >= 0 && index < array_size)
				{ 
					if(array[index]->get_type() == obj->get_type())
					{
						delete array[index];
						array[index] = obj;
						return new ContextValue(obj, NULL);
					}
					else
					{
						return new ContextValue(NULL, new Error(8, "cannon assign to" + name + " bad type"));
					}
				}
				else
				{
					return new ContextValue(NULL, new Error(10, "out of bounds"));
				}
			}
			else
			{
				return new ContextValue(NULL, new Error(9, "cannot do [] on non array"));
			}
		}
	}

	
	ContextValue* look_up_variable(std::string name) {

		std::map<std::string, Obj *>::iterator it;
		it = variables.find(name);

		if(it == variables.end())
		{
			if(parent == NULL) 
		  	{
		  		return new ContextValue(NULL, new Error(7, "Variable " + name + " not found"));
		  	}
			else return parent->look_up_variable(name);
		}
		else 
		{
			return new ContextValue(it->second->copy(), NULL);
		}
	}

	
	ContextValue* look_up_array_variable(std::string name, int index) {

		std::map<std::string, Obj *>::iterator it;
		it = variables.find(name);

		if ( it == variables.end() ) 
		{
			if(parent == NULL) 
			{
				return new ContextValue(NULL, new Error(7, "Variable " + name + " not found"));
			}
			else return parent->look_up_array_variable(name, index);
		} 
		else 
		{
			if(it->second->get_type() == ArrayType)
			{
				ArrayObj * array_obj = (ArrayObj*)it->second;
				Obj ** array = array_obj->get_value();
				int array_size = array_obj->get_array_size();

				if(index >= 0 && index < array_size)
				{
					return new ContextValue(array[index], NULL);
				}
				else 
				{
					return new ContextValue(NULL, new Error(10, "out of bounds"));
				}
			}
			else 
			{
				return new ContextValue(NULL, new Error(9, "cannot do [] on non array"));
			}
		}
	} 
};
