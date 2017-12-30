
// Generated from ../grammar/clike.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "clikeParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by clikeParser.
 */
class  clikeListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(clikeParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(clikeParser::ProgramContext *ctx) = 0;

  virtual void enterStatement_top(clikeParser::Statement_topContext *ctx) = 0;
  virtual void exitStatement_top(clikeParser::Statement_topContext *ctx) = 0;

  virtual void enterStatement_if(clikeParser::Statement_ifContext *ctx) = 0;
  virtual void exitStatement_if(clikeParser::Statement_ifContext *ctx) = 0;

  virtual void enterStatement_while(clikeParser::Statement_whileContext *ctx) = 0;
  virtual void exitStatement_while(clikeParser::Statement_whileContext *ctx) = 0;

  virtual void enterStatement_function(clikeParser::Statement_functionContext *ctx) = 0;
  virtual void exitStatement_function(clikeParser::Statement_functionContext *ctx) = 0;

  virtual void enterS_var_def(clikeParser::S_var_defContext *ctx) = 0;
  virtual void exitS_var_def(clikeParser::S_var_defContext *ctx) = 0;

  virtual void enterS_var_assign(clikeParser::S_var_assignContext *ctx) = 0;
  virtual void exitS_var_assign(clikeParser::S_var_assignContext *ctx) = 0;

  virtual void enterS_var_expression(clikeParser::S_var_expressionContext *ctx) = 0;
  virtual void exitS_var_expression(clikeParser::S_var_expressionContext *ctx) = 0;

  virtual void enterS_if(clikeParser::S_ifContext *ctx) = 0;
  virtual void exitS_if(clikeParser::S_ifContext *ctx) = 0;

  virtual void enterS_while(clikeParser::S_whileContext *ctx) = 0;
  virtual void exitS_while(clikeParser::S_whileContext *ctx) = 0;

  virtual void enterS_fdef(clikeParser::S_fdefContext *ctx) = 0;
  virtual void exitS_fdef(clikeParser::S_fdefContext *ctx) = 0;

  virtual void enterS_break(clikeParser::S_breakContext *ctx) = 0;
  virtual void exitS_break(clikeParser::S_breakContext *ctx) = 0;

  virtual void enterS_call(clikeParser::S_callContext *ctx) = 0;
  virtual void exitS_call(clikeParser::S_callContext *ctx) = 0;

  virtual void enterS_return(clikeParser::S_returnContext *ctx) = 0;
  virtual void exitS_return(clikeParser::S_returnContext *ctx) = 0;

  virtual void enterCall_parametrs(clikeParser::Call_parametrsContext *ctx) = 0;
  virtual void exitCall_parametrs(clikeParser::Call_parametrsContext *ctx) = 0;

  virtual void enterCall_parametr(clikeParser::Call_parametrContext *ctx) = 0;
  virtual void exitCall_parametr(clikeParser::Call_parametrContext *ctx) = 0;

  virtual void enterParametrs(clikeParser::ParametrsContext *ctx) = 0;
  virtual void exitParametrs(clikeParser::ParametrsContext *ctx) = 0;

  virtual void enterParametr(clikeParser::ParametrContext *ctx) = 0;
  virtual void exitParametr(clikeParser::ParametrContext *ctx) = 0;

  virtual void enterLogical(clikeParser::LogicalContext *ctx) = 0;
  virtual void exitLogical(clikeParser::LogicalContext *ctx) = 0;

  virtual void enterType_identifier(clikeParser::Type_identifierContext *ctx) = 0;
  virtual void exitType_identifier(clikeParser::Type_identifierContext *ctx) = 0;

  virtual void enterFunction_type_identifier(clikeParser::Function_type_identifierContext *ctx) = 0;
  virtual void exitFunction_type_identifier(clikeParser::Function_type_identifierContext *ctx) = 0;

  virtual void enterValue(clikeParser::ValueContext *ctx) = 0;
  virtual void exitValue(clikeParser::ValueContext *ctx) = 0;

  virtual void enterIdentifier(clikeParser::IdentifierContext *ctx) = 0;
  virtual void exitIdentifier(clikeParser::IdentifierContext *ctx) = 0;

  virtual void enterIdentifierLiteral(clikeParser::IdentifierLiteralContext *ctx) = 0;
  virtual void exitIdentifierLiteral(clikeParser::IdentifierLiteralContext *ctx) = 0;

  virtual void enterArray_identifier(clikeParser::Array_identifierContext *ctx) = 0;
  virtual void exitArray_identifier(clikeParser::Array_identifierContext *ctx) = 0;

  virtual void enterVar_identifier(clikeParser::Var_identifierContext *ctx) = 0;
  virtual void exitVar_identifier(clikeParser::Var_identifierContext *ctx) = 0;

  virtual void enterLiteral(clikeParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(clikeParser::LiteralContext *ctx) = 0;

  virtual void enterString(clikeParser::StringContext *ctx) = 0;
  virtual void exitString(clikeParser::StringContext *ctx) = 0;

  virtual void enterOp(clikeParser::OpContext *ctx) = 0;
  virtual void exitOp(clikeParser::OpContext *ctx) = 0;

  virtual void enterCompare(clikeParser::CompareContext *ctx) = 0;
  virtual void exitCompare(clikeParser::CompareContext *ctx) = 0;


};

