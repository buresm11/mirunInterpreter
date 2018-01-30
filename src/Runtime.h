
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

	int allocated_records;

public:

	Runtime() {
		this->environment = new Environment();
		this->heap = new Obj**[HEAP_SIZE];
		this->allocated_records = 0;
	}

	~Runtime(){
		delete environment;
	}

	Environment * current_environment(){
		return environment;
	}

	void create_new_environment(){
		Environment * new_environment = new Environment(this->environment);
		this->environment = new_environment;
	}	

	void remove_top_environment() { 
		if(environment->get_parent() != NULL) {
			Environment * tmp = this->environment;
			this->environment = environment->get_parent();
			delete tmp;
		}
	}

	void allocate_on_heap(Obj ** obj) {
		int slot = find_empty_slot();

		heap[slot] = obj;
	}

	int find_empty_slot(){
		for(int i=0;i<HEAP_SIZE;i++){
			if(heap[i] == NULL){
				return i;
			}
		}
	}
};