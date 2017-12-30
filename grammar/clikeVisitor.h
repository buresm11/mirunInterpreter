
// Generated from ../grammar/clike.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "clikeParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by clikeParser.
 */
class  clikeVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by clikeParser.
   */
    virtual antlrcpp::Any visitProgram(clikeParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement_top(clikeParser::Statement_topContext *context) = 0;

    virtual antlrcpp::Any visitStatement_if(clikeParser::Statement_ifContext *context) = 0;

    virtual antlrcpp::Any visitStatement_while(clikeParser::Statement_whileContext *context) = 0;

    virtual antlrcpp::Any visitStatement_function(clikeParser::Statement_functionContext *context) = 0;

    virtual antlrcpp::Any visitS_var_def(clikeParser::S_var_defContext *context) = 0;

    virtual antlrcpp::Any visitS_var_assign(clikeParser::S_var_assignContext *context) = 0;

    virtual antlrcpp::Any visitS_var_expression(clikeParser::S_var_expressionContext *context) = 0;

    virtual antlrcpp::Any visitS_if(clikeParser::S_ifContext *context) = 0;

    virtual antlrcpp::Any visitS_while(clikeParser::S_whileContext *context) = 0;

    virtual antlrcpp::Any visitS_fdef(clikeParser::S_fdefContext *context) = 0;

    virtual antlrcpp::Any visitS_break(clikeParser::S_breakContext *context) = 0;

    virtual antlrcpp::Any visitS_call(clikeParser::S_callContext *context) = 0;

    virtual antlrcpp::Any visitS_return(clikeParser::S_returnContext *context) = 0;

    virtual antlrcpp::Any visitCall_parametrs(clikeParser::Call_parametrsContext *context) = 0;

    virtual antlrcpp::Any visitCall_parametr(clikeParser::Call_parametrContext *context) = 0;

    virtual antlrcpp::Any visitParametrs(clikeParser::ParametrsContext *context) = 0;

    virtual antlrcpp::Any visitParametr(clikeParser::ParametrContext *context) = 0;

    virtual antlrcpp::Any visitLogical(clikeParser::LogicalContext *context) = 0;

    virtual antlrcpp::Any visitType_identifier(clikeParser::Type_identifierContext *context) = 0;

    virtual antlrcpp::Any visitFunction_type_identifier(clikeParser::Function_type_identifierContext *context) = 0;

    virtual antlrcpp::Any visitValue(clikeParser::ValueContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(clikeParser::IdentifierContext *context) = 0;

    virtual antlrcpp::Any visitIdentifierLiteral(clikeParser::IdentifierLiteralContext *context) = 0;

    virtual antlrcpp::Any visitArray_identifier(clikeParser::Array_identifierContext *context) = 0;

    virtual antlrcpp::Any visitVar_identifier(clikeParser::Var_identifierContext *context) = 0;

    virtual antlrcpp::Any visitLiteral(clikeParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitString(clikeParser::StringContext *context) = 0;

    virtual antlrcpp::Any visitOp(clikeParser::OpContext *context) = 0;

    virtual antlrcpp::Any visitCompare(clikeParser::CompareContext *context) = 0;


};

