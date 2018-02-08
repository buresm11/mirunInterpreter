#include <iostream>
#include <fstream>
#include <string>

#include "antlr4-runtime.h"
#include "tlParser.h"
#include "tlLexer.h"
#include "CharStream.h"
#include "Visitor.h"
#include "Runtime.h"
#include "Types.h"

using namespace antlr4;

int main(int argc , char ** argv) {

	std::ifstream inputFile ("../example1.c");

	if (!inputFile.is_open())
	{
		std::cout << "file could not be opened" << std::endl;
		return -1;
	}

	ANTLRInputStream input(inputFile);
	tlLexer lexer(&input);
	CommonTokenStream tokens(&lexer);
	tokens.fill();

	tlParser parser(&tokens);
	tree::ParseTree *tree = parser.parse();

	//std::cout << tree->toStringTree(&parser) << std::endl;

	inputFile.close();

	Runtime * runtime = new Runtime();

	Visitor visitor(runtime);
	ContextValue * context_value = visitor.visit(tree);

	if(context_value->has_error())
	{
		std::cout << context_value->get_error()->get_text() << std::endl;
		return -2;
	}
	else if(context_value->has_done())
	{	
		if(context_value->get_obj()->get_type() == IntType)
		{
			return ((IntObj*)context_value->get_obj())->get_value();
		}
		else
		{
			std::cout << "main function does not return int" << std::endl;
			return - 3;
		}
	}
	else
	{
		std::cout << "main function is missig return statement" << std::endl;
		return -4;
	}
}