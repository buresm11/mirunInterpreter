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

void finalize(ContextValue * context_value, Runtime * runtime);

int main(int argc , char ** argv) {

	if(argc != 2)
	{
		std::cout << "need input file" << std::endl;
		return -1;
	}

	std::ifstream inputFile (argv[1]);

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

	inputFile.close();

	if(parser.getNumberOfSyntaxErrors() > 0)
	{	
		std::cout << tree->toStringTree(&parser) << std::endl;
		return -1;
	}

	Runtime * runtime = new Runtime();

	Visitor visitor(runtime);
	ContextValue * context_value = visitor.visit(tree);

	if(context_value->has_error())
	{
		std::cout << context_value->get_error()->get_text() << std::endl;
		finalize(context_value, runtime);
		return -2;
	}
	else if(context_value->has_done())
	{	
		if(context_value->get_obj()->get_type() == IntType)
		{
			int ret = ((IntObj*)context_value->get_obj())->get_value();
			delete context_value->get_obj();
			finalize(context_value, runtime);
			return ret;
		}
		else
		{
			std::cout << "main function does not return int" << std::endl;
			finalize(context_value, runtime);
			return - 3;
		}
	}
	else
	{
		std::cout << "main function is missig return statement" << std::endl;
		finalize(context_value, runtime);
		return -4;
	}
}

void finalize(ContextValue * context_value, Runtime * runtime)
{
	delete context_value;
	delete runtime;
}