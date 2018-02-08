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
#include "FuncArgDeclContext.h"
#include "Function.h"
#include "FuncArg.h"
#include "Scope.h"

#define DEBUG_ENABLED

#ifdef DEBUG_ENABLED
#define Debug(x) std::cout << x;
#else
#define Debug(x) 
#endif 

class Runtime;

class Visitor : public tlVisitor 
{
    Runtime * runtime;
    Scope * scope;
    FuncArg * func_return_type;

    bool return_value_set;
    ContextValue * context_return_value;

public:
    Visitor(Runtime * runtime) : runtime(runtime)
    {
        scope = new Scope();
        return_value_set = false;
        context_return_value = NULL;
        func_return_type = NULL;
    }

    Scope * get_scope()
    {
        return scope;
    }

    antlrcpp::Any visitParse(tlParser::ParseContext *context)
    {
        Debug(": parse" << std::endl);

        ContextValue * context_value = visit(context->top_block());
        return context_value;
    }

    antlrcpp::Any visitTop_block(tlParser::Top_blockContext *context)
    {
        Debug(": top_block" << std::endl);

        for(int i=0; i < context->function_decl().size(); i++)
        {
            ContextValue * context_value = visit(context->function_decl().at(i));
            if(context_value->has_error()) return context_value;
            else delete context_value;
        }

        for (int i=0; i < context->statement().size(); i++)
        {
            ContextValue * context_value = visit(context->statement().at(i));
            if(context_value->has_error() || context_value->has_done()) return context_value;
            else delete context_value;
        }

        return new ContextValue();
    }

    antlrcpp::Any visitBlock(tlParser::BlockContext *context)
    {
        Debug(": block" << std::endl);


        for (int i=0; i < context->statement().size(); i++)
        {
            ContextValue * context_value = visit(context->statement().at(i));
            if(context_value->has_error() || context_value->has_done()) return context_value;
            else delete context_value;
        }

        return new ContextValue();
    }

    antlrcpp::Any visitStatement(tlParser::StatementContext *context)
    {
        Debug(": statement" << std::endl);

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
        else if(context->return_statement() != NULL)
        {
            context_value_statement = visit(context->return_statement());
        }
        else { /* Not possible */ }

        return context_value_statement;
    }

    antlrcpp::Any visitVariable_def(tlParser::Variable_defContext *context)
    {
        Debug(": variable_def" << std::endl);

        if(context->index() != NULL)
        {
            ContextValue * context_value_index = visit(context->index());
            if(context_value_index->has_error()) return context_value_index; 

            return new_array_variable_def(context->Type_identifier()->getText(), context->Identifier()->getText(),
                                ((IntObj *)context_value_index->get_obj())->get_value());
        }
        else 
        {
            return new_variable_def(context->Type_identifier()->getText(), context->Identifier()->getText());
        }
    }

    ContextValue* new_variable_def(std::string type, std::string name)
    {
        Debug(": new variable" << std::endl);

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
           return new ContextValue(NULL, new Error(5, "Unexpexted type " + type));
        }

        return scope->current_environment()->create_variable(name, var);
    }

    ContextValue* new_array_variable_def(std::string type, std::string name, int index)
    {
        Debug(": new array variable" << std::endl);

        if(index == 0)
        {
            return new ContextValue(NULL, new Error(6, "Cannon create array sized 0"));
        }

        Obj ** var = new Obj*[index];
        Type type_content;

        if(type.compare("string") == 0)
        {
            type_content = StringType;
            for(int i=0;i<index;i++)
            {
                var[i] = new StringObj();
            }

        }
        else if(type.compare("int") == 0)
        {
            type_content = IntType;
            for(int i=0;i<index;i++)
            {
                var[i] = new IntObj();
            }
        }
        else if(type.compare("bool") == 0)
        {
            type_content = BoolType;
            for(int i=0;i<index;i++)
            {
                var[i] = new BoolObj();
            }
        } 
        else
        {
           return new ContextValue(NULL, new Error(5, "Unexpexted type " + type));
        }

        Obj * array_var = new ArrayObj(index, var, type_content);
        runtime->allocate_on_heap(var);

        return scope->current_environment()->create_variable(name, array_var);
    }

    antlrcpp::Any visitReturn_statement(tlParser::Return_statementContext *context)
    {
        Debug(": return statement" << std::endl);

        ContextValue * context_value_expression = visit(context->expression());
        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }

        Obj * return_value = context_value_expression->get_obj();
        return new ContextValue(return_value, NULL, true);
    }

    antlrcpp::Any visitAssignment(tlParser::AssignmentContext *context)
    {
        Debug(": assignment" << std::endl);

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
                return scope->current_environment()->set_array_variable(context->Identifier()->getText(), context_value_expression->get_obj(), 
                                    ((IntObj *)context_value_index->get_obj())->get_value()); 
            }
        }
        else
        {
            return scope->current_environment()->set_variable(context->Identifier()->getText(), context_value_expression->get_obj());  
        }
    }

    antlrcpp::Any visitPrintFunctionCall(tlParser::PrintFunctionCallContext *context)
    {
        Debug(": print function" << std::endl);

        ContextValue * context_value_expression = visit(context->expression());

        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }

        return runtime->print(context_value_expression->get_obj(), false);
    }

    antlrcpp::Any visitPrintLnFunctionCall(tlParser::PrintLnFunctionCallContext *context)
    {
        Debug(": println function" << std::endl);

        ContextValue * context_value_expression = visit(context->expression());

        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }

        return runtime->print(context_value_expression->get_obj(), true);
    }

    antlrcpp::Any visitScanFunctionCall(tlParser::ScanFunctionCallContext *context)
    {
        Debug(": scan function" << std::endl);

        if(context->index() != NULL)
        {
            ContextValue * context_value_index = visit(context->index());
            if(context_value_index->has_error()) 
            {
                return context_value_index;
            }
            else
            {
                return runtime->scan(context->Identifier()->getText(), ((IntObj *)context_value_index->get_obj())->get_value(), scope);
            }
        }

        return runtime->scan(context->Identifier()->getText(), scope);
    }

    antlrcpp::Any visitIdentifierFunctionCall(tlParser::IdentifierFunctionCallContext *context)
    {
        Debug(": function" << std::endl);

        std::string name = context->Identifier()->getText();
        int args_size = context->expression().size();

        Obj ** args = new Obj*[args_size];

        for(int i=0;i< args_size; i++)
        {
            ContextValue * context_value_expression = visit(context->expression().at(i));
            if(context_value_expression->has_error()) 
            {
                for(int i=0;i< args_size; i++)
                {
                    delete args[i];
                }
                delete args;

                return context_value_expression;
            }
            else
            {
                args[i] = context_value_expression->get_obj();
            }
        }

        return runtime->invoke_function(name, args, args_size);
    }

    antlrcpp::Any visitIf_statement(tlParser::If_statementContext *context)
    {
        Debug(": if_statement" << std::endl);

        bool if_executed = false;

        ContextValue * context_value_if = visit(context->if_stat());
        if(context_value_if->has_error() || context_value_if->has_done())
        {
            return context_value_if;
        }

        if(!((BoolObj*)context_value_if->get_obj())->get_value())
        {
            for(int i=0;i < context->else_if_stat().size(); i++)
            {
               ContextValue * context_value_else_if = visit(context->else_if_stat().at(i)); 

               if(context_value_else_if->has_error() || context_value_else_if->has_done())
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

        if(!if_executed && context->else_stat() != NULL)
        {
            ContextValue * context_value_else = visit(context->else_stat());
            if(context_value_else->has_error() || context_value_else->has_done())
            {
                return context_value_else;
            }
            delete context_value_else;
        }

        return new ContextValue();
    }

    antlrcpp::Any visitIf_stat(tlParser::If_statContext *context)
    {
        Debug(": if_stat" << std::endl);

        ContextValue * context_value_expression = visit(context->expression());

        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }

        if(((BoolObj*)context_value_expression->get_obj())->get_value())
        {
            scope->create_new_environment();
            ContextValue * contex_value_if_block = visit(context->block());
            if(contex_value_if_block->has_error() || contex_value_if_block->has_done()) return contex_value_if_block;
            scope->remove_top_environment();
        }

        return context_value_expression;
    }

    antlrcpp::Any visitElse_if_stat(tlParser::Else_if_statContext *context)
    {
        Debug(": else_if_stat" << std::endl);

        ContextValue * context_value_expression = visit(context->expression());

        if(context_value_expression->has_error())
        {
            return context_value_expression;
        }

        if(((BoolObj*)context_value_expression->get_obj())->get_value())
        {
            scope->create_new_environment();
            ContextValue * contex_value_else_if_block = visit(context->block());
            if(contex_value_else_if_block->has_error() || contex_value_else_if_block->has_done()) return contex_value_else_if_block;
            scope->remove_top_environment();
        }

        return context_value_expression;
    }

    antlrcpp::Any visitElse_stat(tlParser::Else_statContext *context)
    {
        Debug(": else_stat" << std::endl);

        scope->create_new_environment();
        ContextValue * contex_value_else_block = visit(context->block());
        if(contex_value_else_block->has_error() || contex_value_else_block->has_done()) return contex_value_else_block;
        scope->remove_top_environment();

        return new ContextValue();
    }

    antlrcpp::Any visitFunction_decl(tlParser::Function_declContext *context)
    {
        Debug(": func_decl" << std::endl);

        FuncArgDeclContext * func_decl_context_type = visit(context->func_decl_type());

        if(func_decl_context_type->has_error())
        {
             //error 
        }

        std::string name = func_decl_context_type->get_func_arg()->get_name();
        FuncArg * return_type = func_decl_context_type->get_func_arg();

        Function * function;
        if(context->func_decl_type_list() == NULL)
        {
            function = new Function(context->block(), return_type);
        }
        else
        {
           std::vector<FuncArgDeclContext*> func_decl_context_args = visit(context->func_decl_type_list());

           FuncArg ** args = new FuncArg*[func_decl_context_args.size()]; 

           for(int i=0; i< func_decl_context_args.size(); i++)
           {
                if(func_decl_context_args.at(i)->has_error())
                {
                    //handle error and delete
                }
                args[i] = func_decl_context_args.at(i)->get_func_arg();
            }
            function = new Function(context->block(), return_type, args, func_decl_context_args.size());
        }

        return runtime->create_new_function(name, function);
    }

    antlrcpp::Any visitFunc_decl_type_list(tlParser::Func_decl_type_listContext *context)
    {
        Debug(": func_decl_type_list" << std::endl);

        std::vector<FuncArgDeclContext *> func_decl_context_args;

        for(int i=0; i< context->func_decl_type_arg().size(); i++)
        {
            FuncArgDeclContext * func_decl_context_arg = visit(context->func_decl_type_arg().at(i));
            func_decl_context_args.push_back(func_decl_context_arg);
        }

        return func_decl_context_args;
    }

    antlrcpp::Any visitFunc_decl_type_arg(tlParser::Func_decl_type_argContext *context)
    {
        Debug(": func_decl_type_arg" << std::endl);

        if(context->func_decl_type() != NULL)
        {   
            return visit(context->func_decl_type());
        }
        else if(context->func_decl_array_type() != NULL)
        {
            return visit(context->func_decl_array_type());
        }
        else
        {
            return new FuncArgDeclContext(NULL,new Error(14, "Syntax error"));
        }
    }

    antlrcpp::Any visitFunc_decl_type(tlParser::Func_decl_typeContext *context)
    {
        Debug(": func_decl_type" << std::endl);

        std::string type_string = context->Type_identifier()->getText();

        Type arg_type;
        if(type_string.compare("string") == 0)
        {
            arg_type = StringType;
        }
        else if(type_string.compare("int") == 0)
        {
            arg_type = IntType;
        }
        else if(type_string.compare("bool") == 0)
        {
            arg_type = BoolType;
        }
        else
        {
            return new FuncArgDeclContext(NULL, new Error(13, "Unknow type"));
        }

        FuncArg * func_arg = new FuncArg(context->Identifier()->getText(), false, arg_type);
        return new FuncArgDeclContext(func_arg, NULL);
    }

    antlrcpp::Any visitFunc_decl_array_type(tlParser::Func_decl_array_typeContext *context)
    {
        Debug(": func_decl_array_type" << std::endl);

        std::string type_string = context->Type_identifier()->getText();

        Type arg_type;
        if(type_string.compare("string") == 0)
        {
            arg_type = StringType;
        }
        else if(type_string.compare("int") == 0)
        {
            arg_type = IntType;
        }
        else if(type_string.compare("bool") == 0)
        {
            arg_type = BoolType;
        }
        else
        {
            return new FuncArgDeclContext(NULL, new Error(13, "Unknow type"));
        }

        FuncArg * func_arg = new FuncArg(context->Identifier()->getText(), true, arg_type);
        return new FuncArgDeclContext(func_arg, NULL);
    }

    antlrcpp::Any visitWhile_statement(tlParser::While_statementContext *context)
    {
        Debug(": while_statement" << std::endl);

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
                scope->create_new_environment();
                ContextValue * contex_value_else_block = visit(context->block());
                if(contex_value_else_block->has_error() || contex_value_else_block->has_done()) return contex_value_else_block;
                scope->remove_top_environment();
            }
        }
        return new ContextValue();
    }

    antlrcpp::Any visitFunctionCallExpression(tlParser::FunctionCallExpressionContext *context)
    {
        Debug(": function_call_expression" << std::endl);

        ContextValue * func_call_context_value = visit(context->function_call());

        if(func_call_context_value->has_error())
        {
            return func_call_context_value;
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
                Obj * returned_obj = func_call_context_value->get_obj();
                if(returned_obj->get_type() == ArrayType)
                {
                    int index = ((IntObj *)context_value_index->get_obj())->get_value();
                    Obj ** array = ((ArrayObj*)returned_obj)->get_value();
                    int array_size = ((ArrayObj*)returned_obj)->get_array_size();

                    if(index > 0 && index < array_size)
                    {
                        return array[index];
                    }
                    else
                    {
                        // not in
                    }
                }
                else
                {
                    // error
                }
            }
        }
        else
        {
            return func_call_context_value;  
        }
    }

    antlrcpp::Any visitIdentifierExpression(tlParser::IdentifierExpressionContext *context)
    {
        Debug(": identifier" << std::endl);

        if(context->index() != NULL)
        {
            ContextValue * context_value_index = visit(context->index());
            if(context_value_index->has_error()) 
            {
                return context_value_index;
            }
            else
            {
                return scope->current_environment()->look_up_array_variable(context->Identifier()->getText(), 
                    ((IntObj *)context_value_index->get_obj())->get_value()); 
            }
        }
        else
        {
            return scope->current_environment()->look_up_variable(context->Identifier()->getText());  
        }
    }

    antlrcpp::Any visitIndex(tlParser::IndexContext *context)
    {
        Debug(": index" << std::endl);

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
                delete context_value_expression->get_obj();
                delete context_value_expression;
                return new ContextValue(NULL, new Error(4, "Index is not a number"));
            }
        }
    }

    antlrcpp::Any visitNumberExpression(tlParser::NumberExpressionContext *context)
    {
        Debug(": number_expression" << std::endl);

        int number;

        try
        {
            number = std::stoi(context->Number()->getText());
        }
        catch(std::invalid_argument & e)
        { 
            return new ContextValue(NULL, new Error(1, "Unknown number"));
        }
        catch(std::out_of_range & e)
        {
            return new ContextValue(NULL, new Error(2, "Integer out of range"));
        }

        Obj * obj = new IntObj(number);
        return new ContextValue(obj, NULL);
    }

    antlrcpp::Any visitStringExpression(tlParser::StringExpressionContext *context)
    {
        Debug(": string_expression" << std::endl);

        std::string string = context->String()->getText().substr(1, context->String()->getText().size() -2 );
        return new ContextValue(new StringObj(string), NULL);
    }

    antlrcpp::Any visitBoolExpression(tlParser::BoolExpressionContext *context)
    {
        Debug(": bool_expression" << std::endl);

        bool value;
        if(context->Bool()->getText().compare("true") == 0) 
        {
            value = true;
        }
        else
        {
            value = false;
        }

        Obj * obj = new BoolObj(value);
        return new ContextValue(obj, NULL);
    }

    antlrcpp::Any visitLtExpression(tlParser::LtExpressionContext *context)
    {
        Debug(": lt_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator < unsupported types" ));
        }
    }

    antlrcpp::Any visitGtExpression(tlParser::GtExpressionContext *context)
    {
        Debug(": gt_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator > unsupported types" ));
        }
    }

    antlrcpp::Any visitNotEqExpression(tlParser::NotEqExpressionContext *context)
    {
        Debug(": not_eq_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator != unsupported types" ));
        }
    }

    antlrcpp::Any visitModulusExpression(tlParser::ModulusExpressionContext *context)
    {
        Debug(": modulus_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator % unsupported types" ));
        }
    }

    antlrcpp::Any visitNotExpression(tlParser::NotExpressionContext *context)
    {
        Debug(": not_expression" << std::endl);

        ContextValue* contex_value = visit(context->expression());
        if(contex_value->has_error()) return contex_value;

        if(contex_value->get_obj()->get_type() == BoolType)
        {
            Obj * return_obj = new BoolObj(!((BoolObj*)(contex_value->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            return new ContextValue(NULL, new Error(3, "Operator ! unsupported types" ));
        }
    }

    antlrcpp::Any visitMultiplyExpression(tlParser::MultiplyExpressionContext *context)
    {
        Debug(": multiply_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator * unsupported types" ));
        }
    }

    antlrcpp::Any visitGtEqExpression(tlParser::GtEqExpressionContext *context)
    {
        Debug(": gt_eq_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator >= unsupported types" ));
        }
    }

    antlrcpp::Any visitDivideExpression(tlParser::DivideExpressionContext *context)
    {
        Debug(": divide_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator / unsupported types" ));
        }
    }

    antlrcpp::Any visitOrExpression(tlParser::OrExpressionContext *context)
    {
        Debug(": or_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator || unsupported types" ));
        }
    }

    antlrcpp::Any visitUnaryMinusExpression(tlParser::UnaryMinusExpressionContext *context)
    {
        Debug(": unary_minus_expression" << std::endl);

        ContextValue* contex_value = visit(context->expression());
        if(contex_value->has_error()) return contex_value;

        if(contex_value->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new IntObj(-((IntObj*)(contex_value->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            return new ContextValue(NULL, new Error(3, "Operator - unsupported types" ));
        }
    }

    antlrcpp::Any visitEqExpression(tlParser::EqExpressionContext *context)
    {
        Debug(": eq_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator == unsupported types" ));
        }
    }

    antlrcpp::Any visitAndExpression(tlParser::AndExpressionContext *context)
    {
        Debug(": and_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator && unsupported types" ));
        }
    }

    antlrcpp::Any visitAddExpression(tlParser::AddExpressionContext *context)
    {
        Debug(": add_expression" << std::endl);

        ContextValue* contex_value_l = visit(context->expression().at(0));
        if(contex_value_l->has_error()) return contex_value_l;

        ContextValue* contex_value_r = visit(context->expression().at(1));
        if(contex_value_l->has_error()) return contex_value_r;

        if(contex_value_l->get_obj()->get_type() == IntType && contex_value_r->get_obj()->get_type() == IntType)
        {
            Obj * return_obj = new IntObj(((IntObj*)(contex_value_l->get_obj()))->get_value() + ((IntObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        if(contex_value_l->get_obj()->get_type() == StringType && contex_value_r->get_obj()->get_type() == StringType)
        {
            Obj * return_obj = new StringObj(((StringObj*)(contex_value_l->get_obj()))->get_value() + ((StringObj*)(contex_value_r->get_obj()))->get_value());
            return new ContextValue(return_obj, NULL);
        }
        else 
        {
            return new ContextValue(NULL, new Error(3, "Operator + unsupported types" ));
        }
    }

    antlrcpp::Any visitSubtractExpression(tlParser::SubtractExpressionContext *context)
    {
        Debug(": substract_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator - unsupported types" ));
        }
    }

    antlrcpp::Any visitLtEqExpression(tlParser::LtEqExpressionContext *context)
    {
        Debug(": lt_eq_expression" << std::endl);

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
            return new ContextValue(NULL, new Error(3, "Operator <= unsupported types" ));
        }
    }
};