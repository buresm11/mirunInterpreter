
#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <string>

#include "Obj.h"
#include "Environment.h"

#define HEAP_SIZE 500

class Runtime {
	Environment * environment;
	Obj *** heap;

	int allocatedRecords;

public:

	Runtime() {
		this->environment = new Environment();
		this->heap = new Obj**[HEAP_SIZE];  // TODO: not harcoded
		this->allocatedRecords = 0;
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

	void removeTopEnvironment() { // TODO delete the old environment
		if(environment->getParent() != NULL) {
			this->environment = environment->getParent();
		}
	}

	void allocateOnHeap(Obj ** obj) {
		int slot = findEmptySlot();

		heap[slot] = obj;
	}

	int findEmptySlot(){
		for(int i=0;i<HEAP_SIZE;i++){
			if(heap[i] == NULL){
				return i;
			}
		}
	}
};