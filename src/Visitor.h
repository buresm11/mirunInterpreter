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
#include "ContextValue.h"

class Visitor : public tlVisitor 
{
    Runtime * runtime;

public:
    Visitor(Runtime * runtime) : runtime(runtime)
    {

    }

    antlrcpp::Any visitParse(tlParser::ParseContext *context)
    {
        std::cout << "parse" << std::endl;

        ContextValue * context_value = visit(context->top_block());

        if(context_value->has_error())
        {
            std::cout << context_value->get_error()->get_text() << std::endl;
        }

        runtime->current_environment()->show_variable();

        ContextValue * return_value = new ContextValue();
        return return_value;
    }

    antlrcpp::Any visitTop_block(tlParser::Top_blockContext *context)
    {
        std::cout << "Top_block" << std::endl;

        for(int i=0; i < context->function_decl().size(); i++)
        {

        }

        for (int i=0; i < context->statement().size(); i++)
        {
            ContextValue * context_value = visit(context->statement().at(i));
            if(context_value->has_error()) return context_value;
            else delete context_value;
        }

        ContextValue * return_value = new ContextValue();
        return return_value;
    }

    antlrcpp::Any visitBlock(tlParser::BlockContext *context)
    {
        std::cout << "block" << std::endl;

        for (int i=0; i < context->statement().size(); i++)
        {
            ContextValue * context_value = visit(context->statement().at(i));
            if(context_value->has_error()) return context_value;
            else delete context_value;
        }

        ContextValue * return_value = new ContextValue();
        return return_value;
    }

    antlrcpp::Any visitStatement(tlParser::StatementContext *context)
    {
        std::cout << "statement" << std::endl;

        ContextValue * context_value_statement = NULL;

        if(context->variable_def() != NULL) 
        {
            context_value_statement = visit(context->variable_def());
        }
        else if(context->assignment() != NULL) 
        {
            context_value_statement = visit(context->assignment());
        }
        else if(context->if_statement() != NULL) 
        {
            context_value_statement = visit(context->if_statement());
        }
        else if(context->while_statement() != NULL)
        {
            context_value_statement = visit(context->while_statement());
        }
        else if(context->function_call() != NULL) 
        {
            context_value_statement = visit(context->function_call());
        }
        else { /* Not possible */ }

        return context_value_statement;
    }

    antlrcpp::Any visitAssignment(tlParser::AssignmentContext *context)
    {
        std::cout << "assignment" << std::endl;

        ContextValue * context_value_expression = visit(context->expression());
        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }

        if(context->index() != NULL)
        {
            ContextValue * context_value_index = visit(context->index());
            if(context_value_index->has_error()) 
            {
                return context_value_index;
            }
            else
            {
                return runtime->current_environment()->set_array_variable(context->Identifier()->getText(), context_value_expression->get_obj(), 
                                    ((IntObj *)context_value_index->get_obj())->get_value()); 
            }
        }
        else
        {
            return runtime->current_environment()->set_variable(context->Identifier()->getText(), context_value_expression->get_obj());  
        }
    }

    antlrcpp::Any visitVariable_def(tlParser::Variable_defContext *context)
    {
        std::cout << "VariableDef" << std::endl;

        if(context->index() != NULL)
        {
            ContextValue * context_value_index = visit(context->index());
            if(context_value_index->has_error()) 
            {
                return context_value_index;
            }
            else
            {
                return new_array_variable_def(context->Type_identifier()->getText(), context->Identifier()->getText(),
                                    ((IntObj *)context_value_index->get_obj())->get_value());
            }
        }
        else 
        {
            return new_variable_def(context->Type_identifier()->getText(), context->Identifier()->getText());
        }
    }

    ContextValue* new_variable_def(std::string type, std::string name)
    {
        Obj * var = NULL; 

        if(type.compare("string") == 0)
        {
            var = new StringObj();
        }
        else if(type.compare("int") == 0)
        {
            var = new IntObj();
        }
        else if(type.compare("bool") == 0)
        {
            var = new BoolObj();
        } 
        else
        {
           return new ContextValue(NULL, new Error(1, "Unexpexted type " + type));
        }

        return runtime->current_environment()->create_variable(name, var);
    }

    ContextValue* new_array_variable_def(std::string type, std::string name, int index)
    {
        if(index == 0)
        {
            return new ContextValue(NULL, new Error(6, "Cannon create array sized 0"));
        }

        Obj ** var = new Obj*[index];

        if(type.compare("string") == 0)
        {
            for(int i=0;i<index;i++)
            {
                var[i] = new StringObj();
            }

        }
        else if(type.compare("int") == 0)
        {
            for(int i=0;i<index;i++)
            {
                var[i] = new IntObj();
            }
        }
        else if(type.compare("bool") == 0)
        {
            for(int i=0;i<index;i++)
            {
                var[i] = new BoolObj();
            }
        } 
        else
        {
           return new ContextValue(NULL, new Error(1, "Unexpexted type " + type));
        }

        Obj * array_var = new ArrayObj(index, var);
        runtime->allocate_on_heap(var);

        return runtime->current_environment()->create_variable(name, array_var);
    }

    antlrcpp::Any visitFunction_call(tlParser::Function_callContext *context)
    {

    }

    antlrcpp::Any visitIf_statement(tlParser::If_statementContext *context)
    {
        std::cout << "If_statement" << std::endl;

        bool if_executed = false;

        ContextValue * context_value_if = visit(context->if_stat());
        if(context_value_if->has_error())
        {
            return context_value_if;
        }

        if(!((BoolObj*)context_value_if->get_obj())->get_value())
        {
            for(int i=0;i < context->else_if_stat().size(); i++)
            {
               ContextValue * context_value_else_if = visit(context->else_if_stat().at(i)); 

               if(context_value_else_if->has_error())
               {
                    return context_value_else_if;
               }
               if(((BoolObj*)context_value_else_if->get_obj())->get_value())
               {
                    delete context_value_else_if;
                    if_executed = true;
                    break; 
               }
               else delete context_value_else_if;
            }
        }
        else
        {
            if_executed = true;
        }
        delete context_value_if;

        if(!if_executed)
        {
            ContextValue * context_value_else = visit(context->else_stat());
            if(context_value_else->has_error())
            {
                return context_value_if;
            }
            delete context_value_else;
        }

        return new ContextValue();
    }

    antlrcpp::Any visitIf_stat(tlParser::If_statContext *context)
    {
        std::cout << "If_stat" << std::endl;

        ContextValue * context_value_expression = visit(context->expression());

        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }

        if(((BoolObj*)context_value_expression->get_obj())->get_value())
        {
            runtime->create_new_environment();
            ContextValue * contex_value_if_block = visit(context->block());
            if(contex_value_if_block->has_error()) return contex_value_if_block;
            runtime->current_environment()->show_variable();
            runtime->remove_top_environment();
        }

        return context_value_expression;
    }

    antlrcpp::Any visitElse_if_stat(tlParser::Else_if_statContext *context)
    {
        std::cout << "Else_if_stat" << std::endl;

        ContextValue * context_value_expression = visit(context->expression());

        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }

        if(((BoolObj*)context_value_expression->get_obj())->get_value())
        {
            runtime->create_new_environment();
            ContextValue * contex_value_else_if_block = visit(context->block());
            if(contex_value_else_if_block->has_error()) return contex_value_else_if_block;
            runtime->current_environment()->show_variable();
            runtime->remove_top_environment();
        }

        return context_value_expression;
    }

    antlrcpp::Any visitElse_stat(tlParser::Else_statContext *context)
    {
        std::cout << "Else_stat" << std::endl;

        runtime->create_new_environment();
        ContextValue * contex_value_else_block = visit(context->block());
        if(contex_value_else_block->has_error()) return contex_value_else_block;
        runtime->current_environment()->show_variable();
        runtime->remove_top_environment();

        return new ContextValue();
    }

    antlrcpp::Any visitFunction_decl(tlParser::Function_declContext *context)
    {

    }

    antlrcpp::Any visitWhile_statement(tlParser::While_statementContext *context)
    {
        std::cout << "while" << std::endl;

        while(true)
        {
            ContextValue * context_value_expression = visit(context->expression());

            if(context_value_expression->has_error())
            {
                return context_value_expression;
            }

            if(!((BoolObj*)context_value_expression->get_obj())->get_value()) break;
            else
            {
                runtime->create_new_environment();
                ContextValue * contex_value_else_block = visit(context->block());
                if(contex_value_else_block->has_error()) return contex_value_else_block;
                runtime->current_environment()->show_variable();
                runtime->remove_top_environment();
            }
        }
        return new ContextValue();
    }

    antlrcpp::Any visitId_list_decl(tlParser::Id_list_declContext *context)
    {

    }

    antlrcpp::Any visitExpr_list(tlParser::Expr_listContext *context)
    {

    }

    antlrcpp::Any visitIndex(tlParser::IndexContext *context)
    {
        std::cout << "Index" << std::endl;

        ContextValue * context_value_expression = visit(context->expression());

        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }
        else
        {
            if(context_value_expression->get_obj()->get_type() == IntType)
            {
                return context_value_expression;
            }
            else
            {
                delete context_value_expression;
                return new ContextValue(NULL ,new Error(3, "Index is not a number"));
            }
        }
    }

    antlrcpp::Any visitIdentifierExpression(tlParser::IdentifierExpressionContext *context)
    {
        std::cout << "identifier" << std::endl;

        if(context->index() != NULL)
        {
            ContextValue * context_value_index = visit(context->index());
            if(context_value_index->has_error()) 
            {
                return context_value_index;
            }
            else
            {
                return runtime->current_environment()->look_up_array_variable(context->Identifier()->getText(), 
                    ((IntObj *)context_value_index->get_obj())->get_value()); 
            }
        }
        else
        {
            return runtime->current_environment()->look_up_variable(context->Identifier()->getText());  
        }
    }

    antlrcpp::Any visitFunctionCallExpression(tlParser::FunctionCallExpressionContext *context)
    {

    }

    antlrcpp::Any visitLtExpression(tlParser::LtExpressionContext *context)
    {
        std::cout << "LtExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {

            Obj * return_obj = new BoolObj(((IntObj*)(contex_value_l->get_obj()))->get_value() < ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitGtExpression(tlParser::GtExpressionContext *context)
    {
        std::cout << "LtEqExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {

            Obj * return_obj = new BoolObj(((IntObj*)(contex_value_l->get_obj()))->get_value() > ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitBoolExpression(tlParser::BoolExpressionContext *context)
    {
        std::cout << "bool" << std::endl;

        bool value;
        if(context->Bool()->getText().compare("true") == 0) 
        {
            value = true;
        }
        else value = false;

        Obj * obj = new BoolObj(value);
        return new ContextValue(obj, NULL);
    }

    antlrcpp::Any visitNotEqExpression(tlParser::NotEqExpressionContext *context)
    {
        std::cout << "EqExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new BoolObj(((IntObj*)(contex_value_l->get_obj()))->get_value() != ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        if(contex_value_l->get_obj()->get_type() == StringType && contex_value_r->get_obj()->get_type() == StringType)
        {
            Obj * return_obj = new BoolObj(((StringObj*)(contex_value_l->get_obj()))->get_value() != ((StringObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        if(contex_value_l->get_obj()->get_type() == BoolType && contex_value_r->get_obj()->get_type() == BoolType)
        {
            Obj * return_obj = new BoolObj(((BoolObj*)(contex_value_l->get_obj()))->get_value() != ((BoolObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitNumberExpression(tlParser::NumberExpressionContext *context)
    {
        int number;

        try
        {
            number = std::stoi(context->Number()->getText());
        }
        catch(std::invalid_argument & e)
        { 
            return new ContextValue(NULL, new Error(4, "unknown number"));
        }
        catch(std::out_of_range & e)
        {
            return new ContextValue(NULL, new Error(5, "int out of range"));
        }

        Obj * obj = new IntObj(number);
        return new ContextValue(obj, NULL);
    }

    antlrcpp::Any visitModulusExpression(tlParser::ModulusExpressionContext *context)
    {
        std::cout << "ModulusExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {

            Obj * return_obj = new IntObj(((IntObj*)(contex_value_l->get_obj()))->get_value() % ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitNotExpression(tlParser::NotExpressionContext *context)
    {
        std::cout << "NotExpression" << std::endl;

        ContextValue* contex_value = visit(context->expression());
        if(contex_value->has_error()) return contex_value;

        if(contex_value->get_obj()->get_type() == BoolType)
        {
            Obj * return_obj = new BoolObj(!((BoolObj*)(contex_value->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            return new ContextValue(NULL, new Error(12, "operation do not supperted"));
        }
    }

    antlrcpp::Any visitMultiplyExpression(tlParser::MultiplyExpressionContext *context)
    {
        std::cout << "MultiplyExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new IntObj(((IntObj*)(contex_value_l->get_obj()))->get_value() * ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitGtEqExpression(tlParser::GtEqExpressionContext *context)
    {
        std::cout << "GtEqExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new BoolObj(((IntObj*)(contex_value_l->get_obj()))->get_value() >= ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitDivideExpression(tlParser::DivideExpressionContext *context)
    {
        std::cout << "DivideExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {

            Obj * return_obj = new IntObj(((IntObj*)(contex_value_l->get_obj()))->get_value() / ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitOrExpression(tlParser::OrExpressionContext *context)
    {
        std::cout << "OrExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == BoolType && contex_value_r->get_obj()->get_type() == BoolType)
        {
            Obj * return_obj = new BoolObj(((BoolObj*)(contex_value_l->get_obj()))->get_value() || ((BoolObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitUnaryMinusExpression(tlParser::UnaryMinusExpressionContext *context)
    {
        std::cout << "UnaryMinusExpression" << std::endl;

        ContextValue* contex_value = visit(context->expression());
        if(contex_value->has_error()) return contex_value;

        if(contex_value->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new IntObj(-((IntObj*)(contex_value->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            return new ContextValue(NULL, new Error(12, "operation do not supperted"));
        }
    }

    antlrcpp::Any visitEqExpression(tlParser::EqExpressionContext *context)
    {
        std::cout << "EqExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new BoolObj(((IntObj*)(contex_value_l->get_obj()))->get_value() == ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        if(contex_value_l->get_obj()->get_type() == StringType && contex_value_r->get_obj()->get_type() == StringType)
        {

            Obj * return_obj = new BoolObj(((StringObj*)(contex_value_l->get_obj()))->get_value() == ((StringObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        if(contex_value_l->get_obj()->get_type() == BoolType && contex_value_r->get_obj()->get_type() == BoolType)
        {

            Obj * return_obj = new BoolObj(((BoolObj*)(contex_value_l->get_obj()))->get_value() == ((BoolObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitAndExpression(tlParser::AndExpressionContext *context)
    {
        std::cout << "AndExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == BoolType && contex_value_r->get_obj()->get_type() == BoolType)
        {
            Obj * return_obj = new BoolObj(((BoolObj*)(contex_value_l->get_obj()))->get_value() && ((BoolObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitStringExpression(tlParser::StringExpressionContext *context)
    {
        std::string string = context->String()->getText().substr(1, context->String()->getText().size() -2 );
        return new ContextValue(new StringObj(string), NULL);
    }

    antlrcpp::Any visitAddExpression(tlParser::AddExpressionContext *context)
    {
        std::cout << "AddExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new IntObj(((IntObj*)(contex_value_l->get_obj()))->get_value() + ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitSubtractExpression(tlParser::SubtractExpressionContext *context)
    {
        std::cout << "SubtractExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new IntObj(((IntObj*)(contex_value_l->get_obj()))->get_value() - ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }

    antlrcpp::Any visitLtEqExpression(tlParser::LtEqExpressionContext *context)
    {
        std::cout << "LtEqExpression" << std::endl;

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new BoolObj(((IntObj*)(contex_value_l->get_obj()))->get_value() <= ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            if(contex_value_l->get_obj()->get_type() != contex_value_r->get_obj()->get_type())
            {
                return new ContextValue(NULL, new Error(11, "types do not match"));
            } 
            else
            {
                return new ContextValue(NULL, new Error(12, "operation do not supperted"));
            }
        }
    }
};