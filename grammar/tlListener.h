
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "tlParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by tlParser.
 */
class  tlListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterParse(tlParser::ParseContext *ctx) = 0;
  virtual void exitParse(tlParser::ParseContext *ctx) = 0;

  virtual void enterTop_block(tlParser::Top_blockContext *ctx) = 0;
  virtual void exitTop_block(tlParser::Top_blockContext *ctx) = 0;

  virtual void enterBlock(tlParser::BlockContext *ctx) = 0;
  virtual void exitBlock(tlParser::BlockContext *ctx) = 0;

  virtual void enterStatement(tlParser::StatementContext *ctx) = 0;
  virtual void exitStatement(tlParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(tlParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(tlParser::AssignmentContext *ctx) = 0;

  virtual void enterVariable_def(tlParser::Variable_defContext *ctx) = 0;
  virtual void exitVariable_def(tlParser::Variable_defContext *ctx) = 0;

  virtual void enterIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext *ctx) = 0;
  virtual void exitIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext *ctx) = 0;

  virtual void enterPrintFunctionCall(tlParser::PrintFunctionCallContext *ctx) = 0;
  virtual void exitPrintFunctionCall(tlParser::PrintFunctionCallContext *ctx) = 0;

  virtual void enterScanFunctionCall(tlParser::ScanFunctionCallContext *ctx) = 0;
  virtual void exitScanFunctionCall(tlParser::ScanFunctionCallContext *ctx) = 0;

  virtual void enterIf_statement(tlParser::If_statementContext *ctx) = 0;
  virtual void exitIf_statement(tlParser::If_statementContext *ctx) = 0;

  virtual void enterIf_stat(tlParser::If_statContext *ctx) = 0;
  virtual void exitIf_stat(tlParser::If_statContext *ctx) = 0;

  virtual void enterElse_if_stat(tlParser::Else_if_statContext *ctx) = 0;
  virtual void exitElse_if_stat(tlParser::Else_if_statContext *ctx) = 0;

  virtual void enterElse_stat(tlParser::Else_statContext *ctx) = 0;
  virtual void exitElse_stat(tlParser::Else_statContext *ctx) = 0;

  virtual void enterFunction_decl(tlParser::Function_declContext *ctx) = 0;
  virtual void exitFunction_decl(tlParser::Function_declContext *ctx) = 0;

  virtual void enterWhile_statement(tlParser::While_statementContext *ctx) = 0;
  virtual void exitWhile_statement(tlParser::While_statementContext *ctx) = 0;

  virtual void enterFunc_arg_list_decl(tlParser::Func_arg_list_declContext *ctx) = 0;
  virtual void exitFunc_arg_list_decl(tlParser::Func_arg_list_declContext *ctx) = 0;

  virtual void enterFunc_arg(tlParser::Func_argContext *ctx) = 0;
  virtual void exitFunc_arg(tlParser::Func_argContext *ctx) = 0;

  virtual void enterLtExpression(tlParser::LtExpressionContext *ctx) = 0;
  virtual void exitLtExpression(tlParser::LtExpressionContext *ctx) = 0;

  virtual void enterGtExpression(tlParser::GtExpressionContext *ctx) = 0;
  virtual void exitGtExpression(tlParser::GtExpressionContext *ctx) = 0;

  virtual void enterBoolExpression(tlParser::BoolExpressionContext *ctx) = 0;
  virtual void exitBoolExpression(tlParser::BoolExpressionContext *ctx) = 0;

  virtual void enterNotEqExpression(tlParser::NotEqExpressionContext *ctx) = 0;
  virtual void exitNotEqExpression(tlParser::NotEqExpressionContext *ctx) = 0;

  virtual void enterNumberExpression(tlParser::NumberExpressionContext *ctx) = 0;
  virtual void exitNumberExpression(tlParser::NumberExpressionContext *ctx) = 0;

  virtual void enterIdentifierExpression(tlParser::IdentifierExpressionContext *ctx) = 0;
  virtual void exitIdentifierExpression(tlParser::IdentifierExpressionContext *ctx) = 0;

  virtual void enterModulusExpression(tlParser::ModulusExpressionContext *ctx) = 0;
  virtual void exitModulusExpression(tlParser::ModulusExpressionContext *ctx) = 0;

  virtual void enterNotExpression(tlParser::NotExpressionContext *ctx) = 0;
  virtual void exitNotExpression(tlParser::NotExpressionContext *ctx) = 0;

  virtual void enterMultiplyExpression(tlParser::MultiplyExpressionContext *ctx) = 0;
  virtual void exitMultiplyExpression(tlParser::MultiplyExpressionContext *ctx) = 0;

  virtual void enterGtEqExpression(tlParser::GtEqExpressionContext *ctx) = 0;
  virtual void exitGtEqExpression(tlParser::GtEqExpressionContext *ctx) = 0;

  virtual void enterDivideExpression(tlParser::DivideExpressionContext *ctx) = 0;
  virtual void exitDivideExpression(tlParser::DivideExpressionContext *ctx) = 0;

  virtual void enterOrExpression(tlParser::OrExpressionContext *ctx) = 0;
  virtual void exitOrExpression(tlParser::OrExpressionContext *ctx) = 0;

  virtual void enterUnaryMinusExpression(tlParser::UnaryMinusExpressionContext *ctx) = 0;
  virtual void exitUnaryMinusExpression(tlParser::UnaryMinusExpressionContext *ctx) = 0;

  virtual void enterEqExpression(tlParser::EqExpressionContext *ctx) = 0;
  virtual void exitEqExpression(tlParser::EqExpressionContext *ctx) = 0;

  virtual void enterAndExpression(tlParser::AndExpressionContext *ctx) = 0;
  virtual void exitAndExpression(tlParser::AndExpressionContext *ctx) = 0;

  virtual void enterStringExpression(tlParser::StringExpressionContext *ctx) = 0;
  virtual void exitStringExpression(tlParser::StringExpressionContext *ctx) = 0;

  virtual void enterAddExpression(tlParser::AddExpressionContext *ctx) = 0;
  virtual void exitAddExpression(tlParser::AddExpressionContext *ctx) = 0;

  virtual void enterSubtractExpression(tlParser::SubtractExpressionContext *ctx) = 0;
  virtual void exitSubtractExpression(tlParser::SubtractExpressionContext *ctx) = 0;

  virtual void enterFunctionCallExpression(tlParser::FunctionCallExpressionContext *ctx) = 0;
  virtual void exitFunctionCallExpression(tlParser::FunctionCallExpressionContext *ctx) = 0;

  virtual void enterLtEqExpression(tlParser::LtEqExpressionContext *ctx) = 0;
  virtual void exitLtEqExpression(tlParser::LtEqExpressionContext *ctx) = 0;

  virtual void enterIndex(tlParser::IndexContext *ctx) = 0;
  virtual void exitIndex(tlParser::IndexContext *ctx) = 0;


};

