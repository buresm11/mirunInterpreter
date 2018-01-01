
#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "tlVisitor.h"
#include "tlParser.h"
#include "Runtime.h"

#include "IntObj.h"

class Visitor : public tlVisitor {

Runtime * runtime;

public:

    Visitor(Runtime * r) : runtime(r) { }

    antlrcpp::Any visitParse(tlParser::ParseContext *context) {
        visit(context->topBlock());

        return 5;
    }

    antlrcpp::Any visitTopBlock(tlParser::TopBlockContext *context) {
        printf("Top Block started + func :%d", context->functionDecl().size());

        for(int i=0;i<context->statement().size();i++){
            visit(context->statement().at(i));
        }

        return 5;
    }

    antlrcpp::Any visitBlock(tlParser::BlockContext *context) {
        printf("Block started");

        return 5;
    }

    antlrcpp::Any visitStatement(tlParser::StatementContext *context) {

        if(context->variableDef() != NULL){
            visit(context->variableDef());
        }
        if(context->assignment() != NULL){
            visit(context->assignment());
        }


        /*FunctionCallContext *functionCall();
        IfStatementContext *ifStatement();
        ForStatementContext *forStatement();
        WhileStatementContext *whileStatement();*/

        return 5;
    }

    antlrcpp::Any visitAssignment(tlParser::AssignmentContext *context) {
        printf("ass\n" );

        return 5;
    }

    antlrcpp::Any visitVariableDef(tlParser::VariableDefContext *context) {

        Obj * obj;

        if(context->TypeIdentifier()->getText().compare("int")){
            obj = new IntObj();
        }
        else if(context->Identifier()->getText().compare("string")){

        }
        else if(context->Identifier()->getText().compare("bool")){

        }


        if (!runtime->getCurrentEnvironment().addVariable(context->Identifier()->getText(), obj)){
            //already exists
        }

        return 5;
    }

    antlrcpp::Any visitIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext *context) {

    }

    antlrcpp::Any visitPrintlnFunctionCall(tlParser::PrintlnFunctionCallContext *context) {

    }

    antlrcpp::Any visitPrintFunctionCall(tlParser::PrintFunctionCallContext *context) {

    }

    antlrcpp::Any visitAssertFunctionCall(tlParser::AssertFunctionCallContext *context) {

    }

    antlrcpp::Any visitSizeFunctionCall(tlParser::SizeFunctionCallContext *context) {

    }

    antlrcpp::Any visitIfStatement(tlParser::IfStatementContext *context) {

    }

    antlrcpp::Any visitIfStat(tlParser::IfStatContext *context) {

    }

    antlrcpp::Any visitElseIfStat(tlParser::ElseIfStatContext *context) {

    }

    antlrcpp::Any visitElseStat(tlParser::ElseStatContext *context) {

    }

    antlrcpp::Any visitFunctionDecl(tlParser::FunctionDeclContext *context) {

    }

    antlrcpp::Any visitForStatement(tlParser::ForStatementContext *context) {

    }

    antlrcpp::Any visitWhileStatement(tlParser::WhileStatementContext *context) {

    }

    antlrcpp::Any visitIdList(tlParser::IdListContext *context) {

    }

    antlrcpp::Any visitExprList(tlParser::ExprListContext *context) {

    }

    antlrcpp::Any visitGtExpression(tlParser::GtExpressionContext *context) {

    }

    antlrcpp::Any visitNumberExpression(tlParser::NumberExpressionContext *context) {

    }

    antlrcpp::Any visitIdentifierExpression(tlParser::IdentifierExpressionContext *context) {

    }

    antlrcpp::Any visitModulusExpression(tlParser::ModulusExpressionContext *context) {

    }

    antlrcpp::Any visitNotExpression(tlParser::NotExpressionContext *context) {

    }

    antlrcpp::Any visitMultiplyExpression(tlParser::MultiplyExpressionContext *context) {

    }

    antlrcpp::Any visitGtEqExpression(tlParser::GtEqExpressionContext *context) {

    }

    antlrcpp::Any visitAndExpression(tlParser::AndExpressionContext *context) {

    }

    antlrcpp::Any visitStringExpression(tlParser::StringExpressionContext *context) {

    }

    antlrcpp::Any visitExpressionExpression(tlParser::ExpressionExpressionContext *context) {

    }

    antlrcpp::Any visitNullExpression(tlParser::NullExpressionContext *context) {

    }

    antlrcpp::Any visitFunctionCallExpression(tlParser::FunctionCallExpressionContext *context) {

    }

    antlrcpp::Any visitListExpression(tlParser::ListExpressionContext *context) {

    }

    antlrcpp::Any visitLtEqExpression(tlParser::LtEqExpressionContext *context) {

    }

    antlrcpp::Any visitLtExpression(tlParser::LtExpressionContext *context) {

    }

    antlrcpp::Any visitBoolExpression(tlParser::BoolExpressionContext *context) {

    }

    antlrcpp::Any visitNotEqExpression(tlParser::NotEqExpressionContext *context) {

    }

    antlrcpp::Any visitDivideExpression(tlParser::DivideExpressionContext *context) {

    }

    antlrcpp::Any visitOrExpression(tlParser::OrExpressionContext *context) {

    }

    antlrcpp::Any visitUnaryMinusExpression(tlParser::UnaryMinusExpressionContext *context) {

    }

    antlrcpp::Any visitPowerExpression(tlParser::PowerExpressionContext *context) {

    }

    antlrcpp::Any visitEqExpression(tlParser::EqExpressionContext *context) {

    }

    antlrcpp::Any visitInExpression(tlParser::InExpressionContext *context) {

    }

    antlrcpp::Any visitAddExpression(tlParser::AddExpressionContext *context) {

    }

    antlrcpp::Any visitSubtractExpression(tlParser::SubtractExpressionContext *context) {

    }

    antlrcpp::Any visitTernaryExpression(tlParser::TernaryExpressionContext *context) {

    }

    antlrcpp::Any visitInputExpression(tlParser::InputExpressionContext *context) {

    }

    antlrcpp::Any visitList(tlParser::ListContext *context) {

    }

    antlrcpp::Any visitIndexes(tlParser::IndexesContext *context) {

    }

};