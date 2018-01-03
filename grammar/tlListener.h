
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

  virtual void enterTopBlock(tlParser::TopBlockContext *ctx) = 0;
  virtual void exitTopBlock(tlParser::TopBlockContext *ctx) = 0;

  virtual void enterBlock(tlParser::BlockContext *ctx) = 0;
  virtual void exitBlock(tlParser::BlockContext *ctx) = 0;

  virtual void enterStatement(tlParser::StatementContext *ctx) = 0;
  virtual void exitStatement(tlParser::StatementContext *ctx) = 0;

  virtual void enterAssignment(tlParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(tlParser::AssignmentContext *ctx) = 0;

  virtual void enterVariableDef(tlParser::VariableDefContext *ctx) = 0;
  virtual void exitVariableDef(tlParser::VariableDefContext *ctx) = 0;

  virtual void enterIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext *ctx) = 0;
  virtual void exitIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext *ctx) = 0;

  virtual void enterPrintlnFunctionCall(tlParser::PrintlnFunctionCallContext *ctx) = 0;
  virtual void exitPrintlnFunctionCall(tlParser::PrintlnFunctionCallContext *ctx) = 0;

  virtual void enterPrintFunctionCall(tlParser::PrintFunctionCallContext *ctx) = 0;
  virtual void exitPrintFunctionCall(tlParser::PrintFunctionCallContext *ctx) = 0;

  virtual void enterAssertFunctionCall(tlParser::AssertFunctionCallContext *ctx) = 0;
  virtual void exitAssertFunctionCall(tlParser::AssertFunctionCallContext *ctx) = 0;

  virtual void enterSizeFunctionCall(tlParser::SizeFunctionCallContext *ctx) = 0;
  virtual void exitSizeFunctionCall(tlParser::SizeFunctionCallContext *ctx) = 0;

  virtual void enterIfStatement(tlParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(tlParser::IfStatementContext *ctx) = 0;

  virtual void enterIfStat(tlParser::IfStatContext *ctx) = 0;
  virtual void exitIfStat(tlParser::IfStatContext *ctx) = 0;

  virtual void enterElseIfStat(tlParser::ElseIfStatContext *ctx) = 0;
  virtual void exitElseIfStat(tlParser::ElseIfStatContext *ctx) = 0;

  virtual void enterElseStat(tlParser::ElseStatContext *ctx) = 0;
  virtual void exitElseStat(tlParser::ElseStatContext *ctx) = 0;

  virtual void enterFunctionDecl(tlParser::FunctionDeclContext *ctx) = 0;
  virtual void exitFunctionDecl(tlParser::FunctionDeclContext *ctx) = 0;

  virtual void enterForStatement(tlParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(tlParser::ForStatementContext *ctx) = 0;

  virtual void enterWhileStatement(tlParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(tlParser::WhileStatementContext *ctx) = 0;

  virtual void enterIdList(tlParser::IdListContext *ctx) = 0;
  virtual void exitIdList(tlParser::IdListContext *ctx) = 0;

  virtual void enterExprList(tlParser::ExprListContext *ctx) = 0;
  virtual void exitExprList(tlParser::ExprListContext *ctx) = 0;

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

  virtual void enterInputExpression(tlParser::InputExpressionContext *ctx) = 0;
  virtual void exitInputExpression(tlParser::InputExpressionContext *ctx) = 0;

  virtual void enterList(tlParser::ListContext *ctx) = 0;
  virtual void exitList(tlParser::ListContext *ctx) = 0;

  virtual void enterIndex(tlParser::IndexContext *ctx) = 0;
  virtual void exitIndex(tlParser::IndexContext *ctx) = 0;


};

