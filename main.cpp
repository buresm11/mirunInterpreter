#include <iostream>
#include <fstream>
#include <string>

#include "antlr4-runtime.h"
#include "clikeParser.h"
#include "clikeLexer.h"
#include "clikeParser.h"
#include "CharStream.h"

using namespace antlr4;

int main(int , const char **) {

  std::ifstream inputFile ("../example1.c");

  if (!inputFile.is_open()){
    printf("xde");
    return 1;
  }

  ANTLRInputStream input(inputFile);
  clikeLexer lexer(&input);
  CommonTokenStream tokens(&lexer);

  tokens.fill();
  for (auto token : tokens.getTokens()) {
    std::cout << token->toString() << std::endl;
  }

  clikeParser parser(&tokens);
  tree::ParseTree *tree = parser.program();

  std::cout << tree->toStringTree(&parser) << std::endl;

  inputFile.close();

  return 0;
}