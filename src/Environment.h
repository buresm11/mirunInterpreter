
#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <map>

#include "Obj.h"
#include "ArrayObj.h"

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

	Environment * getParent() {
		return parent;
	}

	bool createVariable(std::string name, Obj * obj) {
		return this->variables.insert(std::pair<std::string, Obj *>(name, obj)).second;
	}

	bool reAssignVariable(std::string name, Obj * obj) {

		std::map<std::string, Obj *>::iterator it;

		it = variables.find(name);

		if ( it == variables.end() ) {

		  if(parent == NULL) return false;
		  else return parent->reAssignVariable(name, obj);

		} else {

			// the assigment has wrong type
			if (it->second->getType() != obj->getType()){
				return false;
			}
			else {
				delete it->second;
				it->second = obj;

			    return true;
			}			
		}
	}

	bool reAssignArrayVariable(std::string name, Obj * obj, int arrayDescriptor){

		std::map<std::string, Obj *>::iterator it;

		it = variables.find(name);

		if ( it == variables.end() ) {
			if(parent == NULL) return NULL;
			else return parent->reAssignArrayVariable(name, obj, arrayDescriptor);
		} 
		else {
			if(it->second->getType() == ArrayType){ // is actually array
				ArrayObj * arrayObj = (ArrayObj*)it->second;
				Obj ** array = arrayObj->getValue();

				int arraySize = arrayObj->getArraySize();

				if(arrayDescriptor >= 0 && arrayDescriptor < arraySize){ //descriptor makes sense

					if(array[arrayDescriptor]->getType() == obj->getType()){ //types match

						delete array[arrayDescriptor];
						array[arrayDescriptor] = obj;
						return true;
					}
					else return false;
				}
				else return false;
			}
			else return false;
		}
	}

	Obj* lookUpVariable(std::string name) {

		std::map<std::string, Obj *>::iterator it;

		it = variables.find(name);

		if ( it == variables.end() ) {

		  if(parent == NULL) return NULL;
		  else return parent->lookUpVariable(name);

		} else {
		  return it->second;
		}
	}

	Obj* lookUpArrayVariable(std::string name, int arrayDescriptor) {

		std::map<std::string, Obj *>::iterator it;

		it = variables.find(name);

		if ( it == variables.end() ) {
			if(parent == NULL) return NULL;
			else return parent->lookUpArrayVariable(name, arrayDescriptor);
		} 
		else {
			if(it->second->getType() == ArrayType){ // is actually array
				ArrayObj * arrayObj = (ArrayObj*)it->second;
				Obj ** array = arrayObj->getValue();

				int arraySize = arrayObj->getArraySize();

				if(arrayDescriptor >= 0 && arrayDescriptor < arraySize){ //descriptor makes sense

					return array[arrayDescriptor];
				}
				else return NULL;
			}
			else return NULL;
		}
	}
};
