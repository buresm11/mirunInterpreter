
#include <string>

class Environment {
	std::map<std::string, Obj *> variables;
	Environment * parent;

public:

	Environment() {
		this->parent = NULL;
	}

	Environment(Environment * environment) {
		this->environment = environment;
	}

	bool addVariable(string name, Obj * obj) {

		return this->variables.insert(std::pair<std::string, Obj *>(name, obj)).second;
	}

	Obj * lookUpVariable(String name) {


		Environment * tmp = parent;
	}
};
