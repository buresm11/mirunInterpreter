#include <iostream>
#include <fstream>
#include <string>

#include "antlr4-runtime.h"
#include "tlParser.h"
#include "tlLexer.h"
#include "CharStream.h"
#include "Visitor.h"
#include "Runtime.h"

using namespace antlr4;

int main(int , const char **) {

  std::ifstream inputFile ("../example1.c");

  if (!inputFile.is_open()){
    printf("xde");
    return 1;
  }

  ANTLRInputStream input(inputFile);
  tlLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  tlParser parser(&tokens);
  tree::ParseTree *tree = parser.parse();

  std::cout << tree->toStringTree(&parser) << std::endl;

  inputFile.close();

  Runtime * runtime = new Runtime();

  Visitor visitor(runtime);
  visitor.visit(tree);

  //delete visitor;

  return 0;
}

/* Number
 : Int ('.' Digit*)?*/


 //check for error in gramma
// context value is_value true fix - is always falss