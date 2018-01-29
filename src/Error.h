#include "BoolObj.h"

#include <string>

class Error {

	int id;
	std::string text;

public:

	Error(int id, std::string text) : id(id), text(text)
	{

	}

	std::string get_text()
	{
		return text;
	}

	int get_id() 
	{
		return id;
	}

};

