
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "tlParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by tlParser.
 */
class  tlVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by tlParser.
   */
    virtual antlrcpp::Any visitParse(tlParser::ParseContext *context) = 0;

    virtual antlrcpp::Any visitTopBlock(tlParser::TopBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(tlParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(tlParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(tlParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitVariableDef(tlParser::VariableDefContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitPrintlnFunctionCall(tlParser::PrintlnFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitPrintFunctionCall(tlParser::PrintFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitAssertFunctionCall(tlParser::AssertFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitSizeFunctionCall(tlParser::SizeFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(tlParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStat(tlParser::IfStatContext *context) = 0;

    virtual antlrcpp::Any visitElseIfStat(tlParser::ElseIfStatContext *context) = 0;

    virtual antlrcpp::Any visitElseStat(tlParser::ElseStatContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDecl(tlParser::FunctionDeclContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(tlParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(tlParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitIdList(tlParser::IdListContext *context) = 0;

    virtual antlrcpp::Any visitExprList(tlParser::ExprListContext *context) = 0;

    virtual antlrcpp::Any visitLtExpression(tlParser::LtExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGtExpression(tlParser::GtExpressionContext *context) = 0;

    virtual antlrcpp::Any visitBoolExpression(tlParser::BoolExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNotEqExpression(tlParser::NotEqExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNumberExpression(tlParser::NumberExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierExpression(tlParser::IdentifierExpressionContext *context) = 0;

    virtual antlrcpp::Any visitModulusExpression(tlParser::ModulusExpressionContext *context) = 0;

    virtual antlrcpp::Any visitNotExpression(tlParser::NotExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplyExpression(tlParser::MultiplyExpressionContext *context) = 0;

    virtual antlrcpp::Any visitGtEqExpression(tlParser::GtEqExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDivideExpression(tlParser::DivideExpressionContext *context) = 0;

    virtual antlrcpp::Any visitOrExpression(tlParser::OrExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryMinusExpression(tlParser::UnaryMinusExpressionContext *context) = 0;

    virtual antlrcpp::Any visitEqExpression(tlParser::EqExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAndExpression(tlParser::AndExpressionContext *context) = 0;

    virtual antlrcpp::Any visitStringExpression(tlParser::StringExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAddExpression(tlParser::AddExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSubtractExpression(tlParser::SubtractExpressionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionCallExpression(tlParser::FunctionCallExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLtEqExpression(tlParser::LtEqExpressionContext *context) = 0;

    virtual antlrcpp::Any visitInputExpression(tlParser::InputExpressionContext *context) = 0;

    virtual antlrcpp::Any visitList(tlParser::ListContext *context) = 0;

    virtual antlrcpp::Any visitIndex(tlParser::IndexContext *context) = 0;


};

