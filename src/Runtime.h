
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

#define HEAP_SIZE 500

class Visitor;

class Runtime {
	Environment * environment;
	Obj *** heap;
	//Function * functions;

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

	int find_empty_slot()
	{
		for(int i=0;i<HEAP_SIZE;i++)
		{
			if(heap[i] == NULL)
				return i;
		}
	}

	void create_new_function()
	{
		
	}

	ContextValue * invoke_function (Visitor* visitor, std::string name, ContextValue ** params, int params_count);

/// built-in functions


	ContextValue * print(Obj * obj)
	{
		if(obj->get_type() == IntType) return print((IntObj*)obj);
        else if(obj->get_type() == StringType) return print((StringObj*)obj);
        else if(obj->get_type() == BoolType) return print((BoolObj*)obj);
        else if(obj->get_type() == ArrayType) return print((ArrayObj*)obj);
        else 
        {
            return new ContextValue(NULL, new Error(13, "Unknow type"));
        }
	}

	ContextValue * print(IntObj* int_obj)
	{
		std::cout << "O:" << int_obj->get_value() << std::endl;
		return new ContextValue(int_obj, NULL);
	}

	ContextValue * print(StringObj* string_obj)
	{
		std::cout << "0:" << string_obj->get_value() << std::endl;
		return new ContextValue(string_obj, NULL);
	}

	ContextValue * print(BoolObj* bool_obj)
	{
		if(bool_obj->get_value())
		{
			std::cout << "0:" << "True" << std::endl;
		}
		else
		{
			std::cout << "0:" << "False" << std::endl;
		}
		
		return new ContextValue(bool_obj, NULL);
	}

	ContextValue * print(ArrayObj* array_obj)
	{
		Obj ** array = array_obj->get_value();
		int array_size = array_obj->get_array_size();

		for(int i=0; i<array_size; i++)
		{
			print(array[i]);
		}

		return new ContextValue(array_obj, NULL);
	}

	ContextValue * scan(std::string name)
	{
		ContextValue * context_value = environment->look_up_scan_variable(name);

		if(context_value->has_error())
		{
			return context_value;
		}

		return scan_variable(context_value->get_obj());
	}

	ContextValue * scan(std::string name, int index)
	{
		ContextValue * context_value = environment->look_up_array_scan_variable(name, index);

		if(context_value->has_error())
		{
			return context_value;
		}

		return scan_variable(context_value->get_obj());
	}

	ContextValue * scan_variable(Obj * obj)
	{
		if(obj->get_type() == IntType) return scan((IntObj*)obj);
        else if(obj->get_type() == StringType) return scan((StringObj*)obj);
        else if(obj->get_type() == BoolType) return scan((BoolObj*)obj);
        else 
        {
            return new ContextValue(NULL, new Error(13, "Unknow type"));
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
		   return new ContextValue(NULL, NULL);// error TODO ERROR
		}
		else if (std::cin.eof()) 
		{
		   return new ContextValue(NULL, NULL);// TODO ERROR
		} 
		else 
		{
		   return new ContextValue(NULL, NULL); // TODO ERROR
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
		   return new ContextValue(NULL, NULL);// error TODO ERROR
		}
		else if (std::cin.eof()) 
		{
		   return new ContextValue(NULL, NULL);// TODO ERROR
		} 
		else 
		{
		   return new ContextValue(NULL, NULL); // TODO ERROR
		}
	}

	ContextValue * scan(BoolObj * bool_obj)
	{
		bool val;

		if (std::cin >> val) 
		{
			bool_obj->set_value(val);
			return new ContextValue(NULL, NULL);
		} 
		else if (std::cin.bad()) 
		{
		   return new ContextValue(NULL, NULL);// error TODO ERROR
		}
		else if (std::cin.eof()) 
		{
		   return new ContextValue(NULL, NULL);// TODO ERROR
		} 
		else 
		{
		   return new ContextValue(NULL, NULL); // TODO ERROR
		}
	}

};