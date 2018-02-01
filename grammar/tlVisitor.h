
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

    virtual antlrcpp::Any visitTop_block(tlParser::Top_blockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(tlParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStatement(tlParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitReturn_statement(tlParser::Return_statementContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(tlParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitVariable_def(tlParser::Variable_defContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitPrintFunctionCall(tlParser::PrintFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitScanFunctionCall(tlParser::ScanFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitIf_statement(tlParser::If_statementContext *context) = 0;

    virtual antlrcpp::Any visitIf_stat(tlParser::If_statContext *context) = 0;

    virtual antlrcpp::Any visitElse_if_stat(tlParser::Else_if_statContext *context) = 0;

    virtual antlrcpp::Any visitElse_stat(tlParser::Else_statContext *context) = 0;

    virtual antlrcpp::Any visitWhile_statement(tlParser::While_statementContext *context) = 0;

    virtual antlrcpp::Any visitFunction_decl(tlParser::Function_declContext *context) = 0;

    virtual antlrcpp::Any visitFunc_decl_type_list(tlParser::Func_decl_type_listContext *context) = 0;

    virtual antlrcpp::Any visitFunc_decl_type_arg(tlParser::Func_decl_type_argContext *context) = 0;

    virtual antlrcpp::Any visitFunc_decl_type(tlParser::Func_decl_typeContext *context) = 0;

    virtual antlrcpp::Any visitFunc_decl_array_type(tlParser::Func_decl_array_typeContext *context) = 0;

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

    virtual antlrcpp::Any visitIndex(tlParser::IndexContext *context) = 0;


};

