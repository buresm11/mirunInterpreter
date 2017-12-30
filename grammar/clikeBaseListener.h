
// Generated from ../grammar/clike.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "clikeListener.h"


/**
 * This class provides an empty implementation of clikeListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  clikeBaseListener : public clikeListener {
public:

  virtual void enterProgram(clikeParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(clikeParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement_top(clikeParser::Statement_topContext * /*ctx*/) override { }
  virtual void exitStatement_top(clikeParser::Statement_topContext * /*ctx*/) override { }

  virtual void enterStatement_if(clikeParser::Statement_ifContext * /*ctx*/) override { }
  virtual void exitStatement_if(clikeParser::Statement_ifContext * /*ctx*/) override { }

  virtual void enterStatement_while(clikeParser::Statement_whileContext * /*ctx*/) override { }
  virtual void exitStatement_while(clikeParser::Statement_whileContext * /*ctx*/) override { }

  virtual void enterStatement_function(clikeParser::Statement_functionContext * /*ctx*/) override { }
  virtual void exitStatement_function(clikeParser::Statement_functionContext * /*ctx*/) override { }

  virtual void enterS_var_def(clikeParser::S_var_defContext * /*ctx*/) override { }
  virtual void exitS_var_def(clikeParser::S_var_defContext * /*ctx*/) override { }

  virtual void enterS_var_assign(clikeParser::S_var_assignContext * /*ctx*/) override { }
  virtual void exitS_var_assign(clikeParser::S_var_assignContext * /*ctx*/) override { }

  virtual void enterS_var_expression(clikeParser::S_var_expressionContext * /*ctx*/) override { }
  virtual void exitS_var_expression(clikeParser::S_var_expressionContext * /*ctx*/) override { }

  virtual void enterS_if(clikeParser::S_ifContext * /*ctx*/) override { }
  virtual void exitS_if(clikeParser::S_ifContext * /*ctx*/) override { }

  virtual void enterS_while(clikeParser::S_whileContext * /*ctx*/) override { }
  virtual void exitS_while(clikeParser::S_whileContext * /*ctx*/) override { }

  virtual void enterS_fdef(clikeParser::S_fdefContext * /*ctx*/) override { }
  virtual void exitS_fdef(clikeParser::S_fdefContext * /*ctx*/) override { }

  virtual void enterS_break(clikeParser::S_breakContext * /*ctx*/) override { }
  virtual void exitS_break(clikeParser::S_breakContext * /*ctx*/) override { }

  virtual void enterS_call(clikeParser::S_callContext * /*ctx*/) override { }
  virtual void exitS_call(clikeParser::S_callContext * /*ctx*/) override { }

  virtual void enterS_return(clikeParser::S_returnContext * /*ctx*/) override { }
  virtual void exitS_return(clikeParser::S_returnContext * /*ctx*/) override { }

  virtual void enterCall_parametrs(clikeParser::Call_parametrsContext * /*ctx*/) override { }
  virtual void exitCall_parametrs(clikeParser::Call_parametrsContext * /*ctx*/) override { }

  virtual void enterCall_parametr(clikeParser::Call_parametrContext * /*ctx*/) override { }
  virtual void exitCall_parametr(clikeParser::Call_parametrContext * /*ctx*/) override { }

  virtual void enterParametrs(clikeParser::ParametrsContext * /*ctx*/) override { }
  virtual void exitParametrs(clikeParser::ParametrsContext * /*ctx*/) override { }

  virtual void enterParametr(clikeParser::ParametrContext * /*ctx*/) override { }
  virtual void exitParametr(clikeParser::ParametrContext * /*ctx*/) override { }

  virtual void enterLogical(clikeParser::LogicalContext * /*ctx*/) override { }
  virtual void exitLogical(clikeParser::LogicalContext * /*ctx*/) override { }

  virtual void enterType_identifier(clikeParser::Type_identifierContext * /*ctx*/) override { }
  virtual void exitType_identifier(clikeParser::Type_identifierContext * /*ctx*/) override { }

  virtual void enterFunction_type_identifier(clikeParser::Function_type_identifierContext * /*ctx*/) override { }
  virtual void exitFunction_type_identifier(clikeParser::Function_type_identifierContext * /*ctx*/) override { }

  virtual void enterValue(clikeParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(clikeParser::ValueContext * /*ctx*/) override { }

  virtual void enterIdentifier(clikeParser::IdentifierContext * /*ctx*/) override { }
  virtual void exitIdentifier(clikeParser::IdentifierContext * /*ctx*/) override { }

  virtual void enterIdentifierLiteral(clikeParser::IdentifierLiteralContext * /*ctx*/) override { }
  virtual void exitIdentifierLiteral(clikeParser::IdentifierLiteralContext * /*ctx*/) override { }

  virtual void enterArray_identifier(clikeParser::Array_identifierContext * /*ctx*/) override { }
  virtual void exitArray_identifier(clikeParser::Array_identifierContext * /*ctx*/) override { }

  virtual void enterVar_identifier(clikeParser::Var_identifierContext * /*ctx*/) override { }
  virtual void exitVar_identifier(clikeParser::Var_identifierContext * /*ctx*/) override { }

  virtual void enterLiteral(clikeParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(clikeParser::LiteralContext * /*ctx*/) override { }

  virtual void enterString(clikeParser::StringContext * /*ctx*/) override { }
  virtual void exitString(clikeParser::StringContext * /*ctx*/) override { }

  virtual void enterOp(clikeParser::OpContext * /*ctx*/) override { }
  virtual void exitOp(clikeParser::OpContext * /*ctx*/) override { }

  virtual void enterCompare(clikeParser::CompareContext * /*ctx*/) override { }
  virtual void exitCompare(clikeParser::CompareContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

