
#pragma once

#include <map>
#include <iostream>
#include <fstream>
#include <string>

#include "Obj.h"
#include "IntObj.h"
#include "StringObj.h"
#include "BoolObj.h"
#include "Environment.h"
#include "Scope.h"
#include "Function.h"
#include "Array.h"

#define HEAP_SIZE 500
#define HEAP_THRESHOLD 400

class Visitor;

class Runtime {

	Array ** heap;
	int allocated_records;
	std::map<std::string, Function *> functions;

	Scope * scope;

public:

	Runtime() 
	{
		this->heap = new Array*[HEAP_SIZE];
		for(int i=0;i<HEAP_SIZE;i++)
		{
			this->heap[i] = NULL;
		}
		this->allocated_records = 0;
		this->scope = NULL;
	}

	~Runtime()
	{
		sweep();

		std::map<std::string, Function *>::iterator it;
       	for (it = functions.begin(); it != functions.end(); it++)
       	{
            delete it->second;
       	}
		delete [] heap;

		delete scope;
	}

	ContextValue * allocate_on_heap(Array * array)
	{
		int slot = find_empty_slot();

		if(slot < 0)
		{
			return new ContextValue(NULL, new Error(25, "Heap full" ));
		}

		allocated_records++;
		heap[slot] = array;

		return new ContextValue();
	}

	int find_empty_slot()
	{
		if(allocated_records > HEAP_THRESHOLD)
		{
			clean();
		}

		for(int i=0;i<HEAP_SIZE;i++)
		{
			if(heap[i] == NULL) return i;
		}

		return -1;
	}

	void clean()
	{
		mark();
		sweep();
	}

	void mark()
	{
		scope->mark();
	}

	void sweep()
	{
		for(int i=0;i<HEAP_SIZE;i++)
		{
			if(heap[i] != NULL)
			{
				if(!heap[i]->is_marked())
				{
					for(int j=0;j<heap[i]->get_array_size();j++)
					{
						delete heap[i]->get_array()[j];
					}
					delete [] heap[i]->get_array();
					delete heap[i];
					heap[i] = NULL;
				}
			}
		}
	}

	Scope * create_new_scope()
	{
		Scope * new_scope = new Scope(scope);
		this->scope = new_scope;

		return this->scope;
	}

	Scope * get_current_scope()
	{
		return scope;
	}

	void remove_top_scope()
	{
		if(scope->get_parent() != NULL)
		{
			Scope * tmp = this->scope;
			this->scope = scope->get_parent();
			delete tmp;
		}
	}

	ContextValue * create_new_function(std::string name, Function * function)
	{
		if (this->functions.insert(std::pair<std::string, Function *>(name, function)).second == false)
		{
			return new ContextValue(NULL, new Error(15, "Function " + name + " is already defined in current scope" ));
		}
		else
		{
			return new ContextValue();
		}
	}

	ContextValue * invoke_function (std::string name, Obj ** params, int params_count);

	void * print(Obj * obj, bool newline)
	{
		if(obj->get_type() == IntType) print((IntObj*)obj, newline);
        else if(obj->get_type() == StringType) print((StringObj*)obj, newline);
        else if(obj->get_type() == BoolType) print((BoolObj*)obj, newline);
        else if(obj->get_type() == ArrayType) print((ArrayObj*)obj, newline);
	}

	void print(IntObj* int_obj, bool newline)
	{
		std::cout << int_obj->get_value();
		if(newline)std::cout << std::endl;
	}

	void print(StringObj* string_obj, bool newline)
	{
		std::cout << string_obj->get_value();
		if(newline)std::cout << std::endl;
	}

	void print(BoolObj* bool_obj, bool newline)
	{
		if(bool_obj->get_value())
		{
			std::cout << "True";
		}
		else
		{
			std::cout << "False";
		}
		if(newline)std::cout << std::endl;
	}

	void * print(ArrayObj* array_obj, bool newline)
	{
		Obj ** array = array_obj->get_value();
		int array_size = array_obj->get_array_size();

		std::cout << "[";
		for(int i=0; i<array_size; i++)
		{
			print(array[i], false);
			if(i < array_size-1) std::cout << ",";
		}
		std::cout << "]";
		if(newline)std::cout << std::endl;
	}

	ContextValue * scan(std::string name, Scope * scope)
	{
		ContextValue * context_value = scope->current_environment()->look_up_scan_variable(name);

		if(context_value->has_error())
		{
			return context_value;
		}

		Obj * obj = context_value->get_obj();
		delete context_value;
		return scan_variable(obj);
	}

	ContextValue * scan(std::string name, int index, Scope * scope)
	{
		ContextValue * context_value = scope->current_environment()->look_up_array_scan_variable(name, index);

		if(context_value->has_error())
		{
			return context_value;
		}

		ContextValue * context_value_scan = scan_variable(context_value->get_obj());
		delete context_value;

		return context_value_scan;
	}

	ContextValue * scan_variable(Obj * obj)
	{
		if(obj->get_type() == IntType) return scan((IntObj*)obj);
        else if(obj->get_type() == StringType) return scan((StringObj*)obj);
        else if(obj->get_type() == BoolType) return scan((BoolObj*)obj);
        else 
        {
            return new ContextValue(NULL, new Error(13, "Unknown type"));
        }
	}

	ContextValue * scan(IntObj * int_obj)
	{
		int val;

		if (std::cin >> val) 
		{
			int_obj->set_value(val);
			return new ContextValue(NULL, NULL);
		} 
		else if (std::cin.bad()) 
		{
		   return new ContextValue(NULL, new Error(16, "IO error" ));
		}
		else if (std::cin.eof()) 
		{
		   return new ContextValue(NULL, new Error(17, "EOF reached" ));
		} 
		else 
		{
		   return new ContextValue(NULL, new Error(18, "Format problem" ));
		}	
	}

	ContextValue * scan(StringObj * string_obj)
	{
		std::string val;

		if (std::cin >> val)
		{
			string_obj->set_value(val);
			return new ContextValue(NULL, NULL);
		} 
		else if (std::cin.bad()) 
		{
		   return new ContextValue(NULL, new Error(16, "IO error" ));
		}
		else if (std::cin.eof()) 
		{
		   return new ContextValue(NULL, new Error(17, "EOF reached" ));
		} 
		else 
		{
		   return new ContextValue(NULL, new Error(18, "Format problem" ));
		}
	}

	ContextValue * scan(BoolObj * bool_obj)
	{
		bool val;

		if (std::cin >> std::boolalpha >> val)
		{
			bool_obj->set_value(val);
			return new ContextValue(NULL, NULL);
		} 
		else if (std::cin.bad()) 
		{
		   return new ContextValue(NULL, new Error(16, "IO error" ));
		}
		else if (std::cin.eof()) 
		{
		   return new ContextValue(NULL, new Error(17, "EOF reached" ));
		} 
		else 
		{
		   return new ContextValue(NULL, new Error(18, "Format problem" ));
		}
	}

	void delete_args(Obj ** args, int args_size)
	{
		for(int i=0; i < args_size; i++)
		{
			delete args[i];
		}
		delete [] args;
	}
};