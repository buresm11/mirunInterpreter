
#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "tlVisitor.h"
#include "tlParser.h"
#include "Runtime.h"

#include "IntObj.h"
#include "StringObj.h"
#include "BoolObj.h"
#include "ArrayObj.h"

class Visitor : public tlVisitor {

Runtime * runtime;

public:

    Visitor(Runtime * r) : runtime(r) { }

    antlrcpp::Any visitParse(tlParser::ParseContext *context) {
        std::cout << "visitParse" << std::endl; //DEBUG


        visit(context->topBlock());

        return 5;
    }

    antlrcpp::Any visitTopBlock(tlParser::TopBlockContext *context) {
        std::cout << "visitTopBlock" << std::endl; //DEBUG

        for(int i=0;i<context->statement().size();i++){
            visit(context->statement().at(i));
        }

        return 5;
    }

    antlrcpp::Any visitBlock(tlParser::BlockContext *context) {
        std::cout << "visitBlock" << std::endl; //DEBUG

        for(int i=0;i<context->statement().size();i++){
            visit(context->statement().at(i));
        }

        return 5;
    }

    antlrcpp::Any visitStatement(tlParser::StatementContext *context) {
        std::cout << "visitStatement" << std::endl; //DEBUG


        if(context->variableDef() != NULL) {
            visit(context->variableDef());
        }

        if(context->assignment() != NULL) {
            visit(context->assignment());
        }

        if(context->ifStatement() != NULL) {
            visit(context->ifStatement());
        }


        /*FunctionCallContext *functionCall();
        IfStatementContext *ifStatement();
        ForStatementContext *forStatement();
        WhileStatementContext *whileStatement();*/

        return 5;
    }

    antlrcpp::Any visitAssignment(tlParser::AssignmentContext *context) {
        std::cout << "visitAssignment"; //DEBUG

        std::string identifier = context->Identifier()->getText();
        Obj * obj = visit(context->expression());
        
        if(context->index() != NULL){
            IntObj * indexObj = visit(context->index());
            int index = indexObj->getValue();  

            bool success = runtime->getCurrentEnvironment()->reAssignArrayVariable(identifier, obj, index);

            if(!success) {
                std::cout << "Variable " << identifier << " was not declared/wrong type" << std::endl;
            }

        }
        else {
            bool success = runtime->getCurrentEnvironment()->reAssignVariable(identifier, obj);

            /*DEBUG*/
            if(obj->getType() == IntType){
                std::cout << " " << identifier << ": " << ((IntObj*)obj)->getValue() << std::endl;       
            }
            else if (obj->getType() == StringType) {
                std::cout << " " << identifier << ": " << ((StringObj*)obj)->getValue() << std::endl;       
            }
            else if (obj->getType() == BoolType) {
                if(((BoolObj*)obj)->getValue() == false)
                    std::cout << " " << identifier << ": " << "false" << std::endl;
                else std::cout << " " << identifier << ": " << "true" << std::endl;
            }
            /*DEBUG */

            if(!success) {
                std::cout << "Variable " << identifier << " was not declared/wrong type" << std::endl;
            }
        }
        return 5;
    }

    /*antlr4::tree::TerminalNode *Identifier();
    ExpressionContext *expression();
    IndexContext *index();*/

    antlrcpp::Any visitVariableDef(tlParser::VariableDefContext *context) {

        Obj * obj;

        if(context->TypeIdentifier()->getText().compare("int") == 0){

            if(context->index() != NULL) {
                IntObj * index = visit(context->index());
                int size = index->getValue();    

                Obj ** array = new Obj*[size];
                for(int i=0;i<size;i++){
                    array[i] = new IntObj();
                }

                runtime->allocateOnHeap(array);

                obj = new ArrayObj(size,array);
            }
            else {
                obj = new IntObj();
            }
        }
        else if(context->TypeIdentifier()->getText().compare("string") == 0){
            if(context->index() != NULL){
                IntObj * index = visit(context->index());
                int size = index->getValue();    

                Obj ** array = new Obj*[size];
                for(int i=0;i<size;i++){
                    array[i] = new StringObj();
                }

                runtime->allocateOnHeap(array);

                obj = new ArrayObj(size,array);
            }
            obj = new StringObj();
        }
        else if(context->TypeIdentifier()->getText().compare("bool") == 0){
            if(context->index() != NULL){
                IntObj * index = visit(context->index());
                int size = index->getValue();    

                Obj ** array = new Obj*[size];
                for(int i=0;i<size;i++){
                    array[i] = new BoolObj();
                }

                runtime->allocateOnHeap(array);

                obj = new ArrayObj(size,array);
            }
            obj = new BoolObj();
        }

        if (!runtime->getCurrentEnvironment()->createVariable(context->Identifier()->getText(), obj)){
            std::cout << "Variable already exists in current scope: " << context->Identifier()->getText() << std::endl;
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

        bool doneIt = visit(context->ifStat());

        if (!doneIt) {
            for(int i=0;i<context->elseIfStat().size();i++) {

                doneIt = visit(context->elseIfStat().at(i));

                if(doneIt) {
                    doneIt = doneIt = true;
                    break;
                }
            }
        }

        if (!doneIt)
        {
            visit(context->elseStat());
        }

        return 5;
    }

    antlrcpp::Any visitIfStat(tlParser::IfStatContext *context) {

        Obj * decision = visit(context->expression());

        if(decision->getType() == BoolType){
            bool value = ((BoolObj*)decision)->getValue();

            if(value){
                runtime->createNewEnvironment();
                visit(context->block());
                runtime->removeTopEnvironment();
                return true;
            }
        }
        else {
            std::cout << "Cannot make the decision" << std::endl;
        }

        return false;
    }

    antlrcpp::Any visitElseIfStat(tlParser::ElseIfStatContext *context) {

        Obj * decision = visit(context->expression());

        if(decision->getType() == BoolType){
            bool value = ((BoolObj*)decision)->getValue();

            if(value){
                runtime->createNewEnvironment();
                visit(context->block());
                runtime->removeTopEnvironment();
                return true;
            }
        }
        else {
            std::cout << "Cannot make the decision" << std::endl;
        }

        return false;
    }

    antlrcpp::Any visitElseStat(tlParser::ElseStatContext *context) {
        runtime->createNewEnvironment();
        visit(context->block());
        runtime->removeTopEnvironment();

        return true;
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

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue > rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitNumberExpression(tlParser::NumberExpressionContext *context) {

        int number = std::stoi(context->Number()->getText());
        Obj * obj = new IntObj(number);
        return obj;
    }

    antlrcpp::Any visitIdentifierExpression(tlParser::IdentifierExpressionContext *context) {

        std::string identifier = context->Identifier()->getText();
        
        if(context->index() != NULL){
            IntObj * indexObj = visit(context->index());
            int index = indexObj->getValue();

            Obj * c = runtime->getCurrentEnvironment()->lookUpArrayVariable(identifier, index); //TODO looking the variable twice
            if(c == NULL) {
                std::cout << "array too small / not array / not found" << std::endl;
            }
            else {
                Obj * copy = c->copy();
                return copy;
            }
        }
        else{

            //TODO check if array and then copy

            Obj * c = runtime->getCurrentEnvironment()->lookUpVariable(identifier); //TODO looking the variable twice
            if(c == NULL){
                std::cout << "vat does not exists" << std::endl;

            }     
            else {
                Obj * copy = c->copy();
                return copy;
            }
        }
    }

    antlrcpp::Any visitModulusExpression(tlParser::ModulusExpressionContext *context) {
         if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new IntObj(lValue % rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitNotExpression(tlParser::NotExpressionContext *context) {

        Obj * obj = visit(context->expression());

        if(obj->getType() == BoolType) {
            int value = ((BoolObj*)obj)->getValue();

            Obj * returnObj = new BoolObj(!value);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }        
    }

    antlrcpp::Any visitMultiplyExpression(tlParser::MultiplyExpressionContext *context) {
         if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new IntObj(lValue * rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitGtEqExpression(tlParser::GtEqExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue >= rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitAndExpression(tlParser::AndExpressionContext *context) {
        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == BoolType && rObj->getType() == BoolType) {
            bool lValue = ((BoolObj*)lObj)->getValue();
            bool rValue = ((BoolObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue && rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitStringExpression(tlParser::StringExpressionContext *context) {

        std::string string = context->String()->getText().substr(1, context->String()->getText().size() -2 );
        Obj * obj = new StringObj(string);
        return obj;
    }

    antlrcpp::Any visitFunctionCallExpression(tlParser::FunctionCallExpressionContext *context) {

    }

    antlrcpp::Any visitLtEqExpression(tlParser::LtEqExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue <= rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitLtExpression(tlParser::LtExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue < rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitBoolExpression(tlParser::BoolExpressionContext *context) {

        bool value;
        if(context->Bool()->getText().compare("true") == 0) {
            value = true;
        }
        else value = false;

        Obj * obj = new BoolObj(value);
        return obj; 

    }

    antlrcpp::Any visitNotEqExpression(tlParser::NotEqExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue != rValue);
            return returnObj;
        }
        else if(lObj->getType() == StringType && rObj->getType() == StringType) {
            std::string lValue = ((StringObj*)lObj)->getValue();
            std::string rValue = ((StringObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue != rValue);
            return returnObj;
        }
        else if(lObj->getType() == BoolType && rObj->getType() == BoolType) {
            bool lValue = ((BoolObj*)lObj)->getValue();
            bool rValue = ((BoolObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue != rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitDivideExpression(tlParser::DivideExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new IntObj(lValue / rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitOrExpression(tlParser::OrExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == BoolType && rObj->getType() == BoolType) {
            bool lValue = ((BoolObj*)lObj)->getValue();
            bool rValue = ((BoolObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue || rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitUnaryMinusExpression(tlParser::UnaryMinusExpressionContext *context) {

        Obj * obj = visit(context->expression());

        if(obj->getType() == IntType) {
            int value = ((IntObj*)obj)->getValue();

            Obj * returnObj = new IntObj(-value);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitEqExpression(tlParser::EqExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue == rValue);
            return returnObj;
        }
        else if(lObj->getType() == StringType && rObj->getType() == StringType) {
            std::string lValue = ((StringObj*)lObj)->getValue();
            std::string rValue = ((StringObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue == rValue);
            return returnObj;
        }
        else if(lObj->getType() == BoolType && rObj->getType() == BoolType) {
            bool lValue = ((BoolObj*)lObj)->getValue();
            bool rValue = ((BoolObj*)rObj)->getValue();

            Obj * returnObj = new BoolObj(lValue == rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitAddExpression(tlParser::AddExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType) {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new IntObj(lValue + rValue);
            return returnObj;
        }
        else if(lObj->getType() == StringType && rObj->getType() == StringType) {
            std::string lValue = ((StringObj*)lObj)->getValue();
            std::string rValue = ((StringObj*)rObj)->getValue();

            Obj * returnObj = new StringObj(lValue + rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitSubtractExpression(tlParser::SubtractExpressionContext *context) {

        if(context->expression().size() != 2){
            //TODO should never happen unless grammar is wrong
        }

        Obj * lObj = visit(context->expression().at(0));
        Obj * rObj = visit(context->expression().at(1));

        if(lObj->getType() == IntType && rObj->getType() == IntType)  {
            int lValue = ((IntObj*)lObj)->getValue();
            int rValue = ((IntObj*)rObj)->getValue();

            Obj * returnObj = new IntObj(lValue - rValue);
            return returnObj;
        }
        else {
            std::cout << "types dont match / operation not supported" << std::endl;
        }
    }

    antlrcpp::Any visitInputExpression(tlParser::InputExpressionContext *context) {

    }

    antlrcpp::Any visitList(tlParser::ListContext *context) {

    }

    antlrcpp::Any visitIndex(tlParser::IndexContext *context) {
        Obj * obj = visit(context->expression());

        if(obj->getType() != IntType){

        }
        else return (IntObj*)obj;
    }
};