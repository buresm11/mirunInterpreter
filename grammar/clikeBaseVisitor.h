
// Generated from ../grammar/clike.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "clikeVisitor.h"


/**
 * This class provides an empty implementation of clikeVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  clikeBaseVisitor : public clikeVisitor {
public:

  virtual antlrcpp::Any visitProgram(clikeParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_top(clikeParser::Statement_topContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_if(clikeParser::Statement_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_while(clikeParser::Statement_whileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement_function(clikeParser::Statement_functionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_var_def(clikeParser::S_var_defContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_var_assign(clikeParser::S_var_assignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_var_expression(clikeParser::S_var_expressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_if(clikeParser::S_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_while(clikeParser::S_whileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_fdef(clikeParser::S_fdefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_break(clikeParser::S_breakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_call(clikeParser::S_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitS_return(clikeParser::S_returnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_parametrs(clikeParser::Call_parametrsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCall_parametr(clikeParser::Call_parametrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametrs(clikeParser::ParametrsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParametr(clikeParser::ParametrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLogical(clikeParser::LogicalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitType_identifier(clikeParser::Type_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_type_identifier(clikeParser::Function_type_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitValue(clikeParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifier(clikeParser::IdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIdentifierLiteral(clikeParser::IdentifierLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArray_identifier(clikeParser::Array_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar_identifier(clikeParser::Var_identifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(clikeParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitString(clikeParser::StringContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOp(clikeParser::OpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompare(clikeParser::CompareContext *ctx) override {
    return visitChildren(ctx);
  }


};

