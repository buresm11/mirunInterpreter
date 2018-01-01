
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

  virtual void enterTopBlock(tlParser::TopBlockContext * /*ctx*/) override { }
  virtual void exitTopBlock(tlParser::TopBlockContext * /*ctx*/) override { }

  virtual void enterBlock(tlParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(tlParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(tlParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(tlParser::StatementContext * /*ctx*/) override { }

  virtual void enterAssignment(tlParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(tlParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterVariableDef(tlParser::VariableDefContext * /*ctx*/) override { }
  virtual void exitVariableDef(tlParser::VariableDefContext * /*ctx*/) override { }

  virtual void enterIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext * /*ctx*/) override { }
  virtual void exitIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext * /*ctx*/) override { }

  virtual void enterPrintlnFunctionCall(tlParser::PrintlnFunctionCallContext * /*ctx*/) override { }
  virtual void exitPrintlnFunctionCall(tlParser::PrintlnFunctionCallContext * /*ctx*/) override { }

  virtual void enterPrintFunctionCall(tlParser::PrintFunctionCallContext * /*ctx*/) override { }
  virtual void exitPrintFunctionCall(tlParser::PrintFunctionCallContext * /*ctx*/) override { }

  virtual void enterAssertFunctionCall(tlParser::AssertFunctionCallContext * /*ctx*/) override { }
  virtual void exitAssertFunctionCall(tlParser::AssertFunctionCallContext * /*ctx*/) override { }

  virtual void enterSizeFunctionCall(tlParser::SizeFunctionCallContext * /*ctx*/) override { }
  virtual void exitSizeFunctionCall(tlParser::SizeFunctionCallContext * /*ctx*/) override { }

  virtual void enterIfStatement(tlParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(tlParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterIfStat(tlParser::IfStatContext * /*ctx*/) override { }
  virtual void exitIfStat(tlParser::IfStatContext * /*ctx*/) override { }

  virtual void enterElseIfStat(tlParser::ElseIfStatContext * /*ctx*/) override { }
  virtual void exitElseIfStat(tlParser::ElseIfStatContext * /*ctx*/) override { }

  virtual void enterElseStat(tlParser::ElseStatContext * /*ctx*/) override { }
  virtual void exitElseStat(tlParser::ElseStatContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(tlParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(tlParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterForStatement(tlParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(tlParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterWhileStatement(tlParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(tlParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterIdList(tlParser::IdListContext * /*ctx*/) override { }
  virtual void exitIdList(tlParser::IdListContext * /*ctx*/) override { }

  virtual void enterExprList(tlParser::ExprListContext * /*ctx*/) override { }
  virtual void exitExprList(tlParser::ExprListContext * /*ctx*/) override { }

  virtual void enterGtExpression(tlParser::GtExpressionContext * /*ctx*/) override { }
  virtual void exitGtExpression(tlParser::GtExpressionContext * /*ctx*/) override { }

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

  virtual void enterAndExpression(tlParser::AndExpressionContext * /*ctx*/) override { }
  virtual void exitAndExpression(tlParser::AndExpressionContext * /*ctx*/) override { }

  virtual void enterStringExpression(tlParser::StringExpressionContext * /*ctx*/) override { }
  virtual void exitStringExpression(tlParser::StringExpressionContext * /*ctx*/) override { }

  virtual void enterExpressionExpression(tlParser::ExpressionExpressionContext * /*ctx*/) override { }
  virtual void exitExpressionExpression(tlParser::ExpressionExpressionContext * /*ctx*/) override { }

  virtual void enterNullExpression(tlParser::NullExpressionContext * /*ctx*/) override { }
  virtual void exitNullExpression(tlParser::NullExpressionContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpression(tlParser::FunctionCallExpressionContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpression(tlParser::FunctionCallExpressionContext * /*ctx*/) override { }

  virtual void enterListExpression(tlParser::ListExpressionContext * /*ctx*/) override { }
  virtual void exitListExpression(tlParser::ListExpressionContext * /*ctx*/) override { }

  virtual void enterLtEqExpression(tlParser::LtEqExpressionContext * /*ctx*/) override { }
  virtual void exitLtEqExpression(tlParser::LtEqExpressionContext * /*ctx*/) override { }

  virtual void enterLtExpression(tlParser::LtExpressionContext * /*ctx*/) override { }
  virtual void exitLtExpression(tlParser::LtExpressionContext * /*ctx*/) override { }

  virtual void enterBoolExpression(tlParser::BoolExpressionContext * /*ctx*/) override { }
  virtual void exitBoolExpression(tlParser::BoolExpressionContext * /*ctx*/) override { }

  virtual void enterNotEqExpression(tlParser::NotEqExpressionContext * /*ctx*/) override { }
  virtual void exitNotEqExpression(tlParser::NotEqExpressionContext * /*ctx*/) override { }

  virtual void enterDivideExpression(tlParser::DivideExpressionContext * /*ctx*/) override { }
  virtual void exitDivideExpression(tlParser::DivideExpressionContext * /*ctx*/) override { }

  virtual void enterOrExpression(tlParser::OrExpressionContext * /*ctx*/) override { }
  virtual void exitOrExpression(tlParser::OrExpressionContext * /*ctx*/) override { }

  virtual void enterUnaryMinusExpression(tlParser::UnaryMinusExpressionContext * /*ctx*/) override { }
  virtual void exitUnaryMinusExpression(tlParser::UnaryMinusExpressionContext * /*ctx*/) override { }

  virtual void enterPowerExpression(tlParser::PowerExpressionContext * /*ctx*/) override { }
  virtual void exitPowerExpression(tlParser::PowerExpressionContext * /*ctx*/) override { }

  virtual void enterEqExpression(tlParser::EqExpressionContext * /*ctx*/) override { }
  virtual void exitEqExpression(tlParser::EqExpressionContext * /*ctx*/) override { }

  virtual void enterInExpression(tlParser::InExpressionContext * /*ctx*/) override { }
  virtual void exitInExpression(tlParser::InExpressionContext * /*ctx*/) override { }

  virtual void enterAddExpression(tlParser::AddExpressionContext * /*ctx*/) override { }
  virtual void exitAddExpression(tlParser::AddExpressionContext * /*ctx*/) override { }

  virtual void enterSubtractExpression(tlParser::SubtractExpressionContext * /*ctx*/) override { }
  virtual void exitSubtractExpression(tlParser::SubtractExpressionContext * /*ctx*/) override { }

  virtual void enterTernaryExpression(tlParser::TernaryExpressionContext * /*ctx*/) override { }
  virtual void exitTernaryExpression(tlParser::TernaryExpressionContext * /*ctx*/) override { }

  virtual void enterInputExpression(tlParser::InputExpressionContext * /*ctx*/) override { }
  virtual void exitInputExpression(tlParser::InputExpressionContext * /*ctx*/) override { }

  virtual void enterList(tlParser::ListContext * /*ctx*/) override { }
  virtual void exitList(tlParser::ListContext * /*ctx*/) override { }

  virtual void enterIndexes(tlParser::IndexesContext * /*ctx*/) override { }
  virtual void exitIndexes(tlParser::IndexesContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

