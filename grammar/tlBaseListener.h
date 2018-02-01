
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "tlListener.h"


/**
 * This class provides an empty implementation of tlListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  tlBaseListener : public tlListener {
public:

  virtual void enterParse(tlParser::ParseContext * /*ctx*/) override { }
  virtual void exitParse(tlParser::ParseContext * /*ctx*/) override { }

  virtual void enterTop_block(tlParser::Top_blockContext * /*ctx*/) override { }
  virtual void exitTop_block(tlParser::Top_blockContext * /*ctx*/) override { }

  virtual void enterBlock(tlParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(tlParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(tlParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(tlParser::StatementContext * /*ctx*/) override { }

  virtual void enterReturn_statement(tlParser::Return_statementContext * /*ctx*/) override { }
  virtual void exitReturn_statement(tlParser::Return_statementContext * /*ctx*/) override { }

  virtual void enterAssignment(tlParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(tlParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterVariable_def(tlParser::Variable_defContext * /*ctx*/) override { }
  virtual void exitVariable_def(tlParser::Variable_defContext * /*ctx*/) override { }

  virtual void enterIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext * /*ctx*/) override { }
  virtual void exitIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext * /*ctx*/) override { }

  virtual void enterPrintFunctionCall(tlParser::PrintFunctionCallContext * /*ctx*/) override { }
  virtual void exitPrintFunctionCall(tlParser::PrintFunctionCallContext * /*ctx*/) override { }

  virtual void enterScanFunctionCall(tlParser::ScanFunctionCallContext * /*ctx*/) override { }
  virtual void exitScanFunctionCall(tlParser::ScanFunctionCallContext * /*ctx*/) override { }

  virtual void enterIf_statement(tlParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(tlParser::If_statementContext * /*ctx*/) override { }

  virtual void enterIf_stat(tlParser::If_statContext * /*ctx*/) override { }
  virtual void exitIf_stat(tlParser::If_statContext * /*ctx*/) override { }

  virtual void enterElse_if_stat(tlParser::Else_if_statContext * /*ctx*/) override { }
  virtual void exitElse_if_stat(tlParser::Else_if_statContext * /*ctx*/) override { }

  virtual void enterElse_stat(tlParser::Else_statContext * /*ctx*/) override { }
  virtual void exitElse_stat(tlParser::Else_statContext * /*ctx*/) override { }

  virtual void enterWhile_statement(tlParser::While_statementContext * /*ctx*/) override { }
  virtual void exitWhile_statement(tlParser::While_statementContext * /*ctx*/) override { }

  virtual void enterFunction_decl(tlParser::Function_declContext * /*ctx*/) override { }
  virtual void exitFunction_decl(tlParser::Function_declContext * /*ctx*/) override { }

  virtual void enterFunc_decl_type_list(tlParser::Func_decl_type_listContext * /*ctx*/) override { }
  virtual void exitFunc_decl_type_list(tlParser::Func_decl_type_listContext * /*ctx*/) override { }

  virtual void enterFunc_decl_type_arg(tlParser::Func_decl_type_argContext * /*ctx*/) override { }
  virtual void exitFunc_decl_type_arg(tlParser::Func_decl_type_argContext * /*ctx*/) override { }

  virtual void enterFunc_decl_type(tlParser::Func_decl_typeContext * /*ctx*/) override { }
  virtual void exitFunc_decl_type(tlParser::Func_decl_typeContext * /*ctx*/) override { }

  virtual void enterFunc_decl_array_type(tlParser::Func_decl_array_typeContext * /*ctx*/) override { }
  virtual void exitFunc_decl_array_type(tlParser::Func_decl_array_typeContext * /*ctx*/) override { }

  virtual void enterLtExpression(tlParser::LtExpressionContext * /*ctx*/) override { }
  virtual void exitLtExpression(tlParser::LtExpressionContext * /*ctx*/) override { }

  virtual void enterGtExpression(tlParser::GtExpressionContext * /*ctx*/) override { }
  virtual void exitGtExpression(tlParser::GtExpressionContext * /*ctx*/) override { }

  virtual void enterBoolExpression(tlParser::BoolExpressionContext * /*ctx*/) override { }
  virtual void exitBoolExpression(tlParser::BoolExpressionContext * /*ctx*/) override { }

  virtual void enterNotEqExpression(tlParser::NotEqExpressionContext * /*ctx*/) override { }
  virtual void exitNotEqExpression(tlParser::NotEqExpressionContext * /*ctx*/) override { }

  virtual void enterNumberExpression(tlParser::NumberExpressionContext * /*ctx*/) override { }
  virtual void exitNumberExpression(tlParser::NumberExpressionContext * /*ctx*/) override { }

  virtual void enterIdentifierExpression(tlParser::IdentifierExpressionContext * /*ctx*/) override { }
  virtual void exitIdentifierExpression(tlParser::IdentifierExpressionContext * /*ctx*/) override { }

  virtual void enterModulusExpression(tlParser::ModulusExpressionContext * /*ctx*/) override { }
  virtual void exitModulusExpression(tlParser::ModulusExpressionContext * /*ctx*/) override { }

  virtual void enterNotExpression(tlParser::NotExpressionContext * /*ctx*/) override { }
  virtual void exitNotExpression(tlParser::NotExpressionContext * /*ctx*/) override { }

  virtual void enterMultiplyExpression(tlParser::MultiplyExpressionContext * /*ctx*/) override { }
  virtual void exitMultiplyExpression(tlParser::MultiplyExpressionContext * /*ctx*/) override { }

  virtual void enterGtEqExpression(tlParser::GtEqExpressionContext * /*ctx*/) override { }
  virtual void exitGtEqExpression(tlParser::GtEqExpressionContext * /*ctx*/) override { }

  virtual void enterDivideExpression(tlParser::DivideExpressionContext * /*ctx*/) override { }
  virtual void exitDivideExpression(tlParser::DivideExpressionContext * /*ctx*/) override { }

  virtual void enterOrExpression(tlParser::OrExpressionContext * /*ctx*/) override { }
  virtual void exitOrExpression(tlParser::OrExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryMinusExpression(tlParser::UnaryMinusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryMinusExpression(tlParser::UnaryMinusExpressionContext * /*ctx*/) override { }

  virtual void enterEqExpression(tlParser::EqExpressionContext * /*ctx*/) override { }
  virtual void exitEqExpression(tlParser::EqExpressionContext * /*ctx*/) override { }

  virtual void enterAndExpression(tlParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(tlParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterStringExpression(tlParser::StringExpressionContext * /*ctx*/) override { }
  virtual void exitStringExpression(tlParser::StringExpressionContext * /*ctx*/) override { }

  virtual void enterAddExpression(tlParser::AddExpressionContext * /*ctx*/) override { }
  virtual void exitAddExpression(tlParser::AddExpressionContext * /*ctx*/) override { }

  virtual void enterSubtractExpression(tlParser::SubtractExpressionContext * /*ctx*/) override { }
  virtual void exitSubtractExpression(tlParser::SubtractExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpression(tlParser::FunctionCallExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpression(tlParser::FunctionCallExpressionContext * /*ctx*/) override { }

  virtual void enterLtEqExpression(tlParser::LtEqExpressionContext * /*ctx*/) override { }
  virtual void exitLtEqExpression(tlParser::LtEqExpressionContext * /*ctx*/) override { }

  virtual void enterIndex(tlParser::IndexContext * /*ctx*/) override { }
  virtual void exitIndex(tlParser::IndexContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

