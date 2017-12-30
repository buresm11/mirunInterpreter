
// Generated from ../grammar/clike.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  clikeParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, Name = 11, Number = 12, Single_string = 13, 
    Double_string = 14, Colon = 15, Semicolon = 16, Equals = 17, LeftParen = 18, 
    RightParen = 19, LeftBracket = 20, RightBracket = 21, LeftBrace = 22, 
    RightBrace = 23, Op_plus = 24, Op_minus = 25, Op_multiplication = 26, 
    Op_div = 27, Op_mod = 28, Compare_equals = 29, Compare_lower = 30, Compare_lowere = 31, 
    Compare_greater = 32, Compare_greatere = 33, Whitespace = 34, Newline = 35, 
    BlockComment = 36, LineComment = 37
  };

  enum {
    RuleProgram = 0, RuleStatement_top = 1, RuleStatement_if = 2, RuleStatement_while = 3, 
    RuleStatement_function = 4, RuleS_var_def = 5, RuleS_var_assign = 6, 
    RuleS_var_expression = 7, RuleS_if = 8, RuleS_while = 9, RuleS_fdef = 10, 
    RuleS_break = 11, RuleS_call = 12, RuleS_return = 13, RuleCall_parametrs = 14, 
    RuleCall_parametr = 15, RuleParametrs = 16, RuleParametr = 17, RuleLogical = 18, 
    RuleType_identifier = 19, RuleFunction_type_identifier = 20, RuleValue = 21, 
    RuleIdentifier = 22, RuleIdentifierLiteral = 23, RuleArray_identifier = 24, 
    RuleVar_identifier = 25, RuleLiteral = 26, RuleString = 27, RuleOp = 28, 
    RuleCompare = 29
  };

  clikeParser(antlr4::TokenStream *input);
  ~clikeParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class Statement_topContext;
  class Statement_ifContext;
  class Statement_whileContext;
  class Statement_functionContext;
  class S_var_defContext;
  class S_var_assignContext;
  class S_var_expressionContext;
  class S_ifContext;
  class S_whileContext;
  class S_fdefContext;
  class S_breakContext;
  class S_callContext;
  class S_returnContext;
  class Call_parametrsContext;
  class Call_parametrContext;
  class ParametrsContext;
  class ParametrContext;
  class LogicalContext;
  class Type_identifierContext;
  class Function_type_identifierContext;
  class ValueContext;
  class IdentifierContext;
  class IdentifierLiteralContext;
  class Array_identifierContext;
  class Var_identifierContext;
  class LiteralContext;
  class StringContext;
  class OpContext;
  class CompareContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Statement_topContext *> statement_top();
    Statement_topContext* statement_top(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  Statement_topContext : public antlr4::ParserRuleContext {
  public:
    Statement_topContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    S_var_defContext *s_var_def();
    S_var_assignContext *s_var_assign();
    S_var_expressionContext *s_var_expression();
    S_ifContext *s_if();
    S_whileContext *s_while();
    S_fdefContext *s_fdef();
    S_callContext *s_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_topContext* statement_top();

  class  Statement_ifContext : public antlr4::ParserRuleContext {
  public:
    Statement_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    S_var_defContext *s_var_def();
    S_var_assignContext *s_var_assign();
    S_var_expressionContext *s_var_expression();
    S_ifContext *s_if();
    S_whileContext *s_while();
    S_callContext *s_call();
    S_returnContext *s_return();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_ifContext* statement_if();

  class  Statement_whileContext : public antlr4::ParserRuleContext {
  public:
    Statement_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    S_var_defContext *s_var_def();
    S_var_assignContext *s_var_assign();
    S_var_expressionContext *s_var_expression();
    S_ifContext *s_if();
    S_whileContext *s_while();
    S_breakContext *s_break();
    S_callContext *s_call();
    S_returnContext *s_return();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_whileContext* statement_while();

  class  Statement_functionContext : public antlr4::ParserRuleContext {
  public:
    Statement_functionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    S_var_defContext *s_var_def();
    S_var_assignContext *s_var_assign();
    S_var_expressionContext *s_var_expression();
    S_ifContext *s_if();
    S_whileContext *s_while();
    S_callContext *s_call();
    S_returnContext *s_return();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Statement_functionContext* statement_function();

  class  S_var_defContext : public antlr4::ParserRuleContext {
  public:
    S_var_defContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_identifierContext *type_identifier();
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_var_defContext* s_var_def();

  class  S_var_assignContext : public antlr4::ParserRuleContext {
  public:
    S_var_assignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Equals();
    ValueContext *value();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_var_assignContext* s_var_assign();

  class  S_var_expressionContext : public antlr4::ParserRuleContext {
  public:
    S_var_expressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *Equals();
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    OpContext *op();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_var_expressionContext* s_var_expression();

  class  S_ifContext : public antlr4::ParserRuleContext {
  public:
    S_ifContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    LogicalContext *logical();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<Statement_ifContext *> statement_if();
    Statement_ifContext* statement_if(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_ifContext* s_if();

  class  S_whileContext : public antlr4::ParserRuleContext {
  public:
    S_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LeftParen();
    LogicalContext *logical();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<Statement_whileContext *> statement_while();
    Statement_whileContext* statement_while(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_whileContext* s_while();

  class  S_fdefContext : public antlr4::ParserRuleContext {
  public:
    S_fdefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_type_identifierContext *function_type_identifier();
    Var_identifierContext *var_identifier();
    antlr4::tree::TerminalNode *LeftParen();
    ParametrsContext *parametrs();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *LeftBrace();
    antlr4::tree::TerminalNode *RightBrace();
    std::vector<Statement_functionContext *> statement_function();
    Statement_functionContext* statement_function(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_fdefContext* s_fdef();

  class  S_breakContext : public antlr4::ParserRuleContext {
  public:
    S_breakContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_breakContext* s_break();

  class  S_callContext : public antlr4::ParserRuleContext {
  public:
    S_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    antlr4::tree::TerminalNode *LeftParen();
    Call_parametrsContext *call_parametrs();
    antlr4::tree::TerminalNode *RightParen();
    antlr4::tree::TerminalNode *Semicolon();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_callContext* s_call();

  class  S_returnContext : public antlr4::ParserRuleContext {
  public:
    S_returnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  S_returnContext* s_return();

  class  Call_parametrsContext : public antlr4::ParserRuleContext {
  public:
    Call_parametrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Call_parametrContext *> call_parametr();
    Call_parametrContext* call_parametr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_parametrsContext* call_parametrs();

  class  Call_parametrContext : public antlr4::ParserRuleContext {
  public:
    Call_parametrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Call_parametrContext* call_parametr();

  class  ParametrsContext : public antlr4::ParserRuleContext {
  public:
    ParametrsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ParametrContext *> parametr();
    ParametrContext* parametr(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametrsContext* parametrs();

  class  ParametrContext : public antlr4::ParserRuleContext {
  public:
    ParametrContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_identifierContext *type_identifier();
    Var_identifierContext *var_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ParametrContext* parametr();

  class  LogicalContext : public antlr4::ParserRuleContext {
  public:
    LogicalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    CompareContext *compare();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicalContext* logical();

  class  Type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Type_identifierContext* type_identifier();

  class  Function_type_identifierContext : public antlr4::ParserRuleContext {
  public:
    Function_type_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Type_identifierContext *type_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_type_identifierContext* function_type_identifier();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierLiteralContext *identifierLiteral();
    S_callContext *s_call();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();

  class  IdentifierContext : public antlr4::ParserRuleContext {
  public:
    IdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Var_identifierContext *var_identifier();
    Array_identifierContext *array_identifier();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierContext* identifier();

  class  IdentifierLiteralContext : public antlr4::ParserRuleContext {
  public:
    IdentifierLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IdentifierContext *identifier();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IdentifierLiteralContext* identifierLiteral();

  class  Array_identifierContext : public antlr4::ParserRuleContext {
  public:
    Array_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Name();
    antlr4::tree::TerminalNode *LeftBracket();
    ValueContext *value();
    antlr4::tree::TerminalNode *RightBracket();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Array_identifierContext* array_identifier();

  class  Var_identifierContext : public antlr4::ParserRuleContext {
  public:
    Var_identifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Name();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Var_identifierContext* var_identifier();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext *string();
    antlr4::tree::TerminalNode *Number();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Single_string();
    antlr4::tree::TerminalNode *Double_string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StringContext* string();

  class  OpContext : public antlr4::ParserRuleContext {
  public:
    OpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Op_plus();
    antlr4::tree::TerminalNode *Op_minus();
    antlr4::tree::TerminalNode *Op_multiplication();
    antlr4::tree::TerminalNode *Op_div();
    antlr4::tree::TerminalNode *Op_mod();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OpContext* op();

  class  CompareContext : public antlr4::ParserRuleContext {
  public:
    CompareContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Compare_equals();
    antlr4::tree::TerminalNode *Compare_lower();
    antlr4::tree::TerminalNode *Compare_lowere();
    antlr4::tree::TerminalNode *Compare_greater();
    antlr4::tree::TerminalNode *Compare_greatere();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompareContext* compare();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

