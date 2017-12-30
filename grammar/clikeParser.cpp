
// Generated from ../grammar/clike.g4 by ANTLR 4.7.1


#include "clikeListener.h"
#include "clikeVisitor.h"

#include "clikeParser.h"


using namespace antlrcpp;
using namespace antlr4;

clikeParser::clikeParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

clikeParser::~clikeParser() {
  delete _interpreter;
}

std::string clikeParser::getGrammarFileName() const {
  return "clike.g4";
}

const std::vector<std::string>& clikeParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& clikeParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

clikeParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<clikeParser::Statement_topContext *> clikeParser::ProgramContext::statement_top() {
  return getRuleContexts<clikeParser::Statement_topContext>();
}

clikeParser::Statement_topContext* clikeParser::ProgramContext::statement_top(size_t i) {
  return getRuleContext<clikeParser::Statement_topContext>(i);
}


size_t clikeParser::ProgramContext::getRuleIndex() const {
  return clikeParser::RuleProgram;
}

void clikeParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void clikeParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


antlrcpp::Any clikeParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::ProgramContext* clikeParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, clikeParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(61); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(60);
      statement_top();
      setState(63); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << clikeParser::T__0)
      | (1ULL << clikeParser::T__1)
      | (1ULL << clikeParser::T__2)
      | (1ULL << clikeParser::T__4)
      | (1ULL << clikeParser::T__7)
      | (1ULL << clikeParser::T__8)
      | (1ULL << clikeParser::Name))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_topContext ------------------------------------------------------------------

clikeParser::Statement_topContext::Statement_topContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::S_var_defContext* clikeParser::Statement_topContext::s_var_def() {
  return getRuleContext<clikeParser::S_var_defContext>(0);
}

clikeParser::S_var_assignContext* clikeParser::Statement_topContext::s_var_assign() {
  return getRuleContext<clikeParser::S_var_assignContext>(0);
}

clikeParser::S_var_expressionContext* clikeParser::Statement_topContext::s_var_expression() {
  return getRuleContext<clikeParser::S_var_expressionContext>(0);
}

clikeParser::S_ifContext* clikeParser::Statement_topContext::s_if() {
  return getRuleContext<clikeParser::S_ifContext>(0);
}

clikeParser::S_whileContext* clikeParser::Statement_topContext::s_while() {
  return getRuleContext<clikeParser::S_whileContext>(0);
}

clikeParser::S_fdefContext* clikeParser::Statement_topContext::s_fdef() {
  return getRuleContext<clikeParser::S_fdefContext>(0);
}

clikeParser::S_callContext* clikeParser::Statement_topContext::s_call() {
  return getRuleContext<clikeParser::S_callContext>(0);
}


size_t clikeParser::Statement_topContext::getRuleIndex() const {
  return clikeParser::RuleStatement_top;
}

void clikeParser::Statement_topContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_top(this);
}

void clikeParser::Statement_topContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_top(this);
}


antlrcpp::Any clikeParser::Statement_topContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitStatement_top(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Statement_topContext* clikeParser::statement_top() {
  Statement_topContext *_localctx = _tracker.createInstance<Statement_topContext>(_ctx, getState());
  enterRule(_localctx, 2, clikeParser::RuleStatement_top);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(72);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      s_var_def();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      s_var_assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(67);
      s_var_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(68);
      s_if();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(69);
      s_while();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(70);
      s_fdef();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(71);
      s_call();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_ifContext ------------------------------------------------------------------

clikeParser::Statement_ifContext::Statement_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::S_var_defContext* clikeParser::Statement_ifContext::s_var_def() {
  return getRuleContext<clikeParser::S_var_defContext>(0);
}

clikeParser::S_var_assignContext* clikeParser::Statement_ifContext::s_var_assign() {
  return getRuleContext<clikeParser::S_var_assignContext>(0);
}

clikeParser::S_var_expressionContext* clikeParser::Statement_ifContext::s_var_expression() {
  return getRuleContext<clikeParser::S_var_expressionContext>(0);
}

clikeParser::S_ifContext* clikeParser::Statement_ifContext::s_if() {
  return getRuleContext<clikeParser::S_ifContext>(0);
}

clikeParser::S_whileContext* clikeParser::Statement_ifContext::s_while() {
  return getRuleContext<clikeParser::S_whileContext>(0);
}

clikeParser::S_callContext* clikeParser::Statement_ifContext::s_call() {
  return getRuleContext<clikeParser::S_callContext>(0);
}

clikeParser::S_returnContext* clikeParser::Statement_ifContext::s_return() {
  return getRuleContext<clikeParser::S_returnContext>(0);
}


size_t clikeParser::Statement_ifContext::getRuleIndex() const {
  return clikeParser::RuleStatement_if;
}

void clikeParser::Statement_ifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_if(this);
}

void clikeParser::Statement_ifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_if(this);
}


antlrcpp::Any clikeParser::Statement_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitStatement_if(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Statement_ifContext* clikeParser::statement_if() {
  Statement_ifContext *_localctx = _tracker.createInstance<Statement_ifContext>(_ctx, getState());
  enterRule(_localctx, 4, clikeParser::RuleStatement_if);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(81);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(74);
      s_var_def();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(75);
      s_var_assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(76);
      s_var_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(77);
      s_if();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(78);
      s_while();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(79);
      s_call();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(80);
      s_return();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_whileContext ------------------------------------------------------------------

clikeParser::Statement_whileContext::Statement_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::S_var_defContext* clikeParser::Statement_whileContext::s_var_def() {
  return getRuleContext<clikeParser::S_var_defContext>(0);
}

clikeParser::S_var_assignContext* clikeParser::Statement_whileContext::s_var_assign() {
  return getRuleContext<clikeParser::S_var_assignContext>(0);
}

clikeParser::S_var_expressionContext* clikeParser::Statement_whileContext::s_var_expression() {
  return getRuleContext<clikeParser::S_var_expressionContext>(0);
}

clikeParser::S_ifContext* clikeParser::Statement_whileContext::s_if() {
  return getRuleContext<clikeParser::S_ifContext>(0);
}

clikeParser::S_whileContext* clikeParser::Statement_whileContext::s_while() {
  return getRuleContext<clikeParser::S_whileContext>(0);
}

clikeParser::S_breakContext* clikeParser::Statement_whileContext::s_break() {
  return getRuleContext<clikeParser::S_breakContext>(0);
}

clikeParser::S_callContext* clikeParser::Statement_whileContext::s_call() {
  return getRuleContext<clikeParser::S_callContext>(0);
}

clikeParser::S_returnContext* clikeParser::Statement_whileContext::s_return() {
  return getRuleContext<clikeParser::S_returnContext>(0);
}


size_t clikeParser::Statement_whileContext::getRuleIndex() const {
  return clikeParser::RuleStatement_while;
}

void clikeParser::Statement_whileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_while(this);
}

void clikeParser::Statement_whileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_while(this);
}


antlrcpp::Any clikeParser::Statement_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitStatement_while(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Statement_whileContext* clikeParser::statement_while() {
  Statement_whileContext *_localctx = _tracker.createInstance<Statement_whileContext>(_ctx, getState());
  enterRule(_localctx, 6, clikeParser::RuleStatement_while);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(83);
      s_var_def();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(84);
      s_var_assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(85);
      s_var_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(86);
      s_if();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(87);
      s_while();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(88);
      s_break();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(89);
      s_call();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(90);
      s_return();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Statement_functionContext ------------------------------------------------------------------

clikeParser::Statement_functionContext::Statement_functionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::S_var_defContext* clikeParser::Statement_functionContext::s_var_def() {
  return getRuleContext<clikeParser::S_var_defContext>(0);
}

clikeParser::S_var_assignContext* clikeParser::Statement_functionContext::s_var_assign() {
  return getRuleContext<clikeParser::S_var_assignContext>(0);
}

clikeParser::S_var_expressionContext* clikeParser::Statement_functionContext::s_var_expression() {
  return getRuleContext<clikeParser::S_var_expressionContext>(0);
}

clikeParser::S_ifContext* clikeParser::Statement_functionContext::s_if() {
  return getRuleContext<clikeParser::S_ifContext>(0);
}

clikeParser::S_whileContext* clikeParser::Statement_functionContext::s_while() {
  return getRuleContext<clikeParser::S_whileContext>(0);
}

clikeParser::S_callContext* clikeParser::Statement_functionContext::s_call() {
  return getRuleContext<clikeParser::S_callContext>(0);
}

clikeParser::S_returnContext* clikeParser::Statement_functionContext::s_return() {
  return getRuleContext<clikeParser::S_returnContext>(0);
}


size_t clikeParser::Statement_functionContext::getRuleIndex() const {
  return clikeParser::RuleStatement_function;
}

void clikeParser::Statement_functionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement_function(this);
}

void clikeParser::Statement_functionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement_function(this);
}


antlrcpp::Any clikeParser::Statement_functionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitStatement_function(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Statement_functionContext* clikeParser::statement_function() {
  Statement_functionContext *_localctx = _tracker.createInstance<Statement_functionContext>(_ctx, getState());
  enterRule(_localctx, 8, clikeParser::RuleStatement_function);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(100);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(93);
      s_var_def();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      s_var_assign();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(95);
      s_var_expression();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(96);
      s_if();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(97);
      s_while();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(98);
      s_call();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(99);
      s_return();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_var_defContext ------------------------------------------------------------------

clikeParser::S_var_defContext::S_var_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::Type_identifierContext* clikeParser::S_var_defContext::type_identifier() {
  return getRuleContext<clikeParser::Type_identifierContext>(0);
}

clikeParser::IdentifierContext* clikeParser::S_var_defContext::identifier() {
  return getRuleContext<clikeParser::IdentifierContext>(0);
}

tree::TerminalNode* clikeParser::S_var_defContext::Semicolon() {
  return getToken(clikeParser::Semicolon, 0);
}


size_t clikeParser::S_var_defContext::getRuleIndex() const {
  return clikeParser::RuleS_var_def;
}

void clikeParser::S_var_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_var_def(this);
}

void clikeParser::S_var_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_var_def(this);
}


antlrcpp::Any clikeParser::S_var_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_var_def(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_var_defContext* clikeParser::s_var_def() {
  S_var_defContext *_localctx = _tracker.createInstance<S_var_defContext>(_ctx, getState());
  enterRule(_localctx, 10, clikeParser::RuleS_var_def);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(102);
    type_identifier();
    setState(103);
    identifier();
    setState(104);
    match(clikeParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_var_assignContext ------------------------------------------------------------------

clikeParser::S_var_assignContext::S_var_assignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::IdentifierContext* clikeParser::S_var_assignContext::identifier() {
  return getRuleContext<clikeParser::IdentifierContext>(0);
}

tree::TerminalNode* clikeParser::S_var_assignContext::Equals() {
  return getToken(clikeParser::Equals, 0);
}

clikeParser::ValueContext* clikeParser::S_var_assignContext::value() {
  return getRuleContext<clikeParser::ValueContext>(0);
}

tree::TerminalNode* clikeParser::S_var_assignContext::Semicolon() {
  return getToken(clikeParser::Semicolon, 0);
}


size_t clikeParser::S_var_assignContext::getRuleIndex() const {
  return clikeParser::RuleS_var_assign;
}

void clikeParser::S_var_assignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_var_assign(this);
}

void clikeParser::S_var_assignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_var_assign(this);
}


antlrcpp::Any clikeParser::S_var_assignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_var_assign(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_var_assignContext* clikeParser::s_var_assign() {
  S_var_assignContext *_localctx = _tracker.createInstance<S_var_assignContext>(_ctx, getState());
  enterRule(_localctx, 12, clikeParser::RuleS_var_assign);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    identifier();
    setState(107);
    match(clikeParser::Equals);
    setState(108);
    value();
    setState(109);
    match(clikeParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_var_expressionContext ------------------------------------------------------------------

clikeParser::S_var_expressionContext::S_var_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::IdentifierContext* clikeParser::S_var_expressionContext::identifier() {
  return getRuleContext<clikeParser::IdentifierContext>(0);
}

tree::TerminalNode* clikeParser::S_var_expressionContext::Equals() {
  return getToken(clikeParser::Equals, 0);
}

std::vector<clikeParser::ValueContext *> clikeParser::S_var_expressionContext::value() {
  return getRuleContexts<clikeParser::ValueContext>();
}

clikeParser::ValueContext* clikeParser::S_var_expressionContext::value(size_t i) {
  return getRuleContext<clikeParser::ValueContext>(i);
}

clikeParser::OpContext* clikeParser::S_var_expressionContext::op() {
  return getRuleContext<clikeParser::OpContext>(0);
}

tree::TerminalNode* clikeParser::S_var_expressionContext::Semicolon() {
  return getToken(clikeParser::Semicolon, 0);
}


size_t clikeParser::S_var_expressionContext::getRuleIndex() const {
  return clikeParser::RuleS_var_expression;
}

void clikeParser::S_var_expressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_var_expression(this);
}

void clikeParser::S_var_expressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_var_expression(this);
}


antlrcpp::Any clikeParser::S_var_expressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_var_expression(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_var_expressionContext* clikeParser::s_var_expression() {
  S_var_expressionContext *_localctx = _tracker.createInstance<S_var_expressionContext>(_ctx, getState());
  enterRule(_localctx, 14, clikeParser::RuleS_var_expression);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    identifier();
    setState(112);
    match(clikeParser::Equals);
    setState(113);
    value();
    setState(114);
    op();
    setState(115);
    value();
    setState(116);
    match(clikeParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_ifContext ------------------------------------------------------------------

clikeParser::S_ifContext::S_ifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* clikeParser::S_ifContext::LeftParen() {
  return getToken(clikeParser::LeftParen, 0);
}

clikeParser::LogicalContext* clikeParser::S_ifContext::logical() {
  return getRuleContext<clikeParser::LogicalContext>(0);
}

tree::TerminalNode* clikeParser::S_ifContext::RightParen() {
  return getToken(clikeParser::RightParen, 0);
}

tree::TerminalNode* clikeParser::S_ifContext::LeftBrace() {
  return getToken(clikeParser::LeftBrace, 0);
}

tree::TerminalNode* clikeParser::S_ifContext::RightBrace() {
  return getToken(clikeParser::RightBrace, 0);
}

std::vector<clikeParser::Statement_ifContext *> clikeParser::S_ifContext::statement_if() {
  return getRuleContexts<clikeParser::Statement_ifContext>();
}

clikeParser::Statement_ifContext* clikeParser::S_ifContext::statement_if(size_t i) {
  return getRuleContext<clikeParser::Statement_ifContext>(i);
}


size_t clikeParser::S_ifContext::getRuleIndex() const {
  return clikeParser::RuleS_if;
}

void clikeParser::S_ifContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_if(this);
}

void clikeParser::S_ifContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_if(this);
}


antlrcpp::Any clikeParser::S_ifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_if(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_ifContext* clikeParser::s_if() {
  S_ifContext *_localctx = _tracker.createInstance<S_ifContext>(_ctx, getState());
  enterRule(_localctx, 16, clikeParser::RuleS_if);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    match(clikeParser::T__0);
    setState(119);
    match(clikeParser::LeftParen);
    setState(120);
    logical();
    setState(121);
    match(clikeParser::RightParen);
    setState(122);
    match(clikeParser::LeftBrace);
    setState(124); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(123);
      statement_if();
      setState(126); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << clikeParser::T__0)
      | (1ULL << clikeParser::T__1)
      | (1ULL << clikeParser::T__4)
      | (1ULL << clikeParser::T__5)
      | (1ULL << clikeParser::T__7)
      | (1ULL << clikeParser::T__8)
      | (1ULL << clikeParser::Name))) != 0));
    setState(128);
    match(clikeParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_whileContext ------------------------------------------------------------------

clikeParser::S_whileContext::S_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* clikeParser::S_whileContext::LeftParen() {
  return getToken(clikeParser::LeftParen, 0);
}

clikeParser::LogicalContext* clikeParser::S_whileContext::logical() {
  return getRuleContext<clikeParser::LogicalContext>(0);
}

tree::TerminalNode* clikeParser::S_whileContext::RightParen() {
  return getToken(clikeParser::RightParen, 0);
}

tree::TerminalNode* clikeParser::S_whileContext::LeftBrace() {
  return getToken(clikeParser::LeftBrace, 0);
}

tree::TerminalNode* clikeParser::S_whileContext::RightBrace() {
  return getToken(clikeParser::RightBrace, 0);
}

std::vector<clikeParser::Statement_whileContext *> clikeParser::S_whileContext::statement_while() {
  return getRuleContexts<clikeParser::Statement_whileContext>();
}

clikeParser::Statement_whileContext* clikeParser::S_whileContext::statement_while(size_t i) {
  return getRuleContext<clikeParser::Statement_whileContext>(i);
}


size_t clikeParser::S_whileContext::getRuleIndex() const {
  return clikeParser::RuleS_while;
}

void clikeParser::S_whileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_while(this);
}

void clikeParser::S_whileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_while(this);
}


antlrcpp::Any clikeParser::S_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_while(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_whileContext* clikeParser::s_while() {
  S_whileContext *_localctx = _tracker.createInstance<S_whileContext>(_ctx, getState());
  enterRule(_localctx, 18, clikeParser::RuleS_while);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(clikeParser::T__1);
    setState(131);
    match(clikeParser::LeftParen);
    setState(132);
    logical();
    setState(133);
    match(clikeParser::RightParen);
    setState(134);
    match(clikeParser::LeftBrace);
    setState(136); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(135);
      statement_while();
      setState(138); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << clikeParser::T__0)
      | (1ULL << clikeParser::T__1)
      | (1ULL << clikeParser::T__3)
      | (1ULL << clikeParser::T__4)
      | (1ULL << clikeParser::T__5)
      | (1ULL << clikeParser::T__7)
      | (1ULL << clikeParser::T__8)
      | (1ULL << clikeParser::Name))) != 0));
    setState(140);
    match(clikeParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_fdefContext ------------------------------------------------------------------

clikeParser::S_fdefContext::S_fdefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::Function_type_identifierContext* clikeParser::S_fdefContext::function_type_identifier() {
  return getRuleContext<clikeParser::Function_type_identifierContext>(0);
}

clikeParser::Var_identifierContext* clikeParser::S_fdefContext::var_identifier() {
  return getRuleContext<clikeParser::Var_identifierContext>(0);
}

tree::TerminalNode* clikeParser::S_fdefContext::LeftParen() {
  return getToken(clikeParser::LeftParen, 0);
}

clikeParser::ParametrsContext* clikeParser::S_fdefContext::parametrs() {
  return getRuleContext<clikeParser::ParametrsContext>(0);
}

tree::TerminalNode* clikeParser::S_fdefContext::RightParen() {
  return getToken(clikeParser::RightParen, 0);
}

tree::TerminalNode* clikeParser::S_fdefContext::LeftBrace() {
  return getToken(clikeParser::LeftBrace, 0);
}

tree::TerminalNode* clikeParser::S_fdefContext::RightBrace() {
  return getToken(clikeParser::RightBrace, 0);
}

std::vector<clikeParser::Statement_functionContext *> clikeParser::S_fdefContext::statement_function() {
  return getRuleContexts<clikeParser::Statement_functionContext>();
}

clikeParser::Statement_functionContext* clikeParser::S_fdefContext::statement_function(size_t i) {
  return getRuleContext<clikeParser::Statement_functionContext>(i);
}


size_t clikeParser::S_fdefContext::getRuleIndex() const {
  return clikeParser::RuleS_fdef;
}

void clikeParser::S_fdefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_fdef(this);
}

void clikeParser::S_fdefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_fdef(this);
}


antlrcpp::Any clikeParser::S_fdefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_fdef(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_fdefContext* clikeParser::s_fdef() {
  S_fdefContext *_localctx = _tracker.createInstance<S_fdefContext>(_ctx, getState());
  enterRule(_localctx, 20, clikeParser::RuleS_fdef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(clikeParser::T__2);
    setState(143);
    function_type_identifier();
    setState(144);
    var_identifier();
    setState(145);
    match(clikeParser::LeftParen);
    setState(146);
    parametrs();
    setState(147);
    match(clikeParser::RightParen);
    setState(148);
    match(clikeParser::LeftBrace);
    setState(150); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(149);
      statement_function();
      setState(152); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << clikeParser::T__0)
      | (1ULL << clikeParser::T__1)
      | (1ULL << clikeParser::T__4)
      | (1ULL << clikeParser::T__5)
      | (1ULL << clikeParser::T__7)
      | (1ULL << clikeParser::T__8)
      | (1ULL << clikeParser::Name))) != 0));
    setState(154);
    match(clikeParser::RightBrace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_breakContext ------------------------------------------------------------------

clikeParser::S_breakContext::S_breakContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* clikeParser::S_breakContext::Semicolon() {
  return getToken(clikeParser::Semicolon, 0);
}


size_t clikeParser::S_breakContext::getRuleIndex() const {
  return clikeParser::RuleS_break;
}

void clikeParser::S_breakContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_break(this);
}

void clikeParser::S_breakContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_break(this);
}


antlrcpp::Any clikeParser::S_breakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_break(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_breakContext* clikeParser::s_break() {
  S_breakContext *_localctx = _tracker.createInstance<S_breakContext>(_ctx, getState());
  enterRule(_localctx, 22, clikeParser::RuleS_break);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    match(clikeParser::T__3);
    setState(157);
    match(clikeParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_callContext ------------------------------------------------------------------

clikeParser::S_callContext::S_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::IdentifierContext* clikeParser::S_callContext::identifier() {
  return getRuleContext<clikeParser::IdentifierContext>(0);
}

tree::TerminalNode* clikeParser::S_callContext::LeftParen() {
  return getToken(clikeParser::LeftParen, 0);
}

clikeParser::Call_parametrsContext* clikeParser::S_callContext::call_parametrs() {
  return getRuleContext<clikeParser::Call_parametrsContext>(0);
}

tree::TerminalNode* clikeParser::S_callContext::RightParen() {
  return getToken(clikeParser::RightParen, 0);
}

tree::TerminalNode* clikeParser::S_callContext::Semicolon() {
  return getToken(clikeParser::Semicolon, 0);
}


size_t clikeParser::S_callContext::getRuleIndex() const {
  return clikeParser::RuleS_call;
}

void clikeParser::S_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_call(this);
}

void clikeParser::S_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_call(this);
}


antlrcpp::Any clikeParser::S_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_call(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_callContext* clikeParser::s_call() {
  S_callContext *_localctx = _tracker.createInstance<S_callContext>(_ctx, getState());
  enterRule(_localctx, 24, clikeParser::RuleS_call);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(clikeParser::T__4);
    setState(160);
    identifier();
    setState(161);
    match(clikeParser::LeftParen);
    setState(162);
    call_parametrs();
    setState(163);
    match(clikeParser::RightParen);
    setState(164);
    match(clikeParser::Semicolon);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- S_returnContext ------------------------------------------------------------------

clikeParser::S_returnContext::S_returnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::ValueContext* clikeParser::S_returnContext::value() {
  return getRuleContext<clikeParser::ValueContext>(0);
}


size_t clikeParser::S_returnContext::getRuleIndex() const {
  return clikeParser::RuleS_return;
}

void clikeParser::S_returnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterS_return(this);
}

void clikeParser::S_returnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitS_return(this);
}


antlrcpp::Any clikeParser::S_returnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitS_return(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::S_returnContext* clikeParser::s_return() {
  S_returnContext *_localctx = _tracker.createInstance<S_returnContext>(_ctx, getState());
  enterRule(_localctx, 26, clikeParser::RuleS_return);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    match(clikeParser::T__5);
    setState(167);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_parametrsContext ------------------------------------------------------------------

clikeParser::Call_parametrsContext::Call_parametrsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<clikeParser::Call_parametrContext *> clikeParser::Call_parametrsContext::call_parametr() {
  return getRuleContexts<clikeParser::Call_parametrContext>();
}

clikeParser::Call_parametrContext* clikeParser::Call_parametrsContext::call_parametr(size_t i) {
  return getRuleContext<clikeParser::Call_parametrContext>(i);
}


size_t clikeParser::Call_parametrsContext::getRuleIndex() const {
  return clikeParser::RuleCall_parametrs;
}

void clikeParser::Call_parametrsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_parametrs(this);
}

void clikeParser::Call_parametrsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_parametrs(this);
}


antlrcpp::Any clikeParser::Call_parametrsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitCall_parametrs(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Call_parametrsContext* clikeParser::call_parametrs() {
  Call_parametrsContext *_localctx = _tracker.createInstance<Call_parametrsContext>(_ctx, getState());
  enterRule(_localctx, 28, clikeParser::RuleCall_parametrs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(169);
      call_parametr();
      setState(172); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << clikeParser::T__4)
      | (1ULL << clikeParser::Name)
      | (1ULL << clikeParser::Number)
      | (1ULL << clikeParser::Single_string)
      | (1ULL << clikeParser::Double_string))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_parametrContext ------------------------------------------------------------------

clikeParser::Call_parametrContext::Call_parametrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::ValueContext* clikeParser::Call_parametrContext::value() {
  return getRuleContext<clikeParser::ValueContext>(0);
}


size_t clikeParser::Call_parametrContext::getRuleIndex() const {
  return clikeParser::RuleCall_parametr;
}

void clikeParser::Call_parametrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_parametr(this);
}

void clikeParser::Call_parametrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_parametr(this);
}


antlrcpp::Any clikeParser::Call_parametrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitCall_parametr(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Call_parametrContext* clikeParser::call_parametr() {
  Call_parametrContext *_localctx = _tracker.createInstance<Call_parametrContext>(_ctx, getState());
  enterRule(_localctx, 30, clikeParser::RuleCall_parametr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    value();
    setState(175);
    match(clikeParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametrsContext ------------------------------------------------------------------

clikeParser::ParametrsContext::ParametrsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<clikeParser::ParametrContext *> clikeParser::ParametrsContext::parametr() {
  return getRuleContexts<clikeParser::ParametrContext>();
}

clikeParser::ParametrContext* clikeParser::ParametrsContext::parametr(size_t i) {
  return getRuleContext<clikeParser::ParametrContext>(i);
}


size_t clikeParser::ParametrsContext::getRuleIndex() const {
  return clikeParser::RuleParametrs;
}

void clikeParser::ParametrsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametrs(this);
}

void clikeParser::ParametrsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametrs(this);
}


antlrcpp::Any clikeParser::ParametrsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitParametrs(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::ParametrsContext* clikeParser::parametrs() {
  ParametrsContext *_localctx = _tracker.createInstance<ParametrsContext>(_ctx, getState());
  enterRule(_localctx, 32, clikeParser::RuleParametrs);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(178); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(177);
      parametr();
      setState(180); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == clikeParser::T__7

    || _la == clikeParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParametrContext ------------------------------------------------------------------

clikeParser::ParametrContext::ParametrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::Type_identifierContext* clikeParser::ParametrContext::type_identifier() {
  return getRuleContext<clikeParser::Type_identifierContext>(0);
}

clikeParser::Var_identifierContext* clikeParser::ParametrContext::var_identifier() {
  return getRuleContext<clikeParser::Var_identifierContext>(0);
}


size_t clikeParser::ParametrContext::getRuleIndex() const {
  return clikeParser::RuleParametr;
}

void clikeParser::ParametrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParametr(this);
}

void clikeParser::ParametrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParametr(this);
}


antlrcpp::Any clikeParser::ParametrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitParametr(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::ParametrContext* clikeParser::parametr() {
  ParametrContext *_localctx = _tracker.createInstance<ParametrContext>(_ctx, getState());
  enterRule(_localctx, 34, clikeParser::RuleParametr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    type_identifier();
    setState(183);
    var_identifier();
    setState(184);
    match(clikeParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalContext ------------------------------------------------------------------

clikeParser::LogicalContext::LogicalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<clikeParser::ValueContext *> clikeParser::LogicalContext::value() {
  return getRuleContexts<clikeParser::ValueContext>();
}

clikeParser::ValueContext* clikeParser::LogicalContext::value(size_t i) {
  return getRuleContext<clikeParser::ValueContext>(i);
}

clikeParser::CompareContext* clikeParser::LogicalContext::compare() {
  return getRuleContext<clikeParser::CompareContext>(0);
}


size_t clikeParser::LogicalContext::getRuleIndex() const {
  return clikeParser::RuleLogical;
}

void clikeParser::LogicalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogical(this);
}

void clikeParser::LogicalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogical(this);
}


antlrcpp::Any clikeParser::LogicalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitLogical(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::LogicalContext* clikeParser::logical() {
  LogicalContext *_localctx = _tracker.createInstance<LogicalContext>(_ctx, getState());
  enterRule(_localctx, 36, clikeParser::RuleLogical);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(186);
    value();
    setState(187);
    compare();
    setState(188);
    value();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_identifierContext ------------------------------------------------------------------

clikeParser::Type_identifierContext::Type_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t clikeParser::Type_identifierContext::getRuleIndex() const {
  return clikeParser::RuleType_identifier;
}

void clikeParser::Type_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_identifier(this);
}

void clikeParser::Type_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_identifier(this);
}


antlrcpp::Any clikeParser::Type_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitType_identifier(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Type_identifierContext* clikeParser::type_identifier() {
  Type_identifierContext *_localctx = _tracker.createInstance<Type_identifierContext>(_ctx, getState());
  enterRule(_localctx, 38, clikeParser::RuleType_identifier);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(190);
    _la = _input->LA(1);
    if (!(_la == clikeParser::T__7

    || _la == clikeParser::T__8)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_type_identifierContext ------------------------------------------------------------------

clikeParser::Function_type_identifierContext::Function_type_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::Type_identifierContext* clikeParser::Function_type_identifierContext::type_identifier() {
  return getRuleContext<clikeParser::Type_identifierContext>(0);
}


size_t clikeParser::Function_type_identifierContext::getRuleIndex() const {
  return clikeParser::RuleFunction_type_identifier;
}

void clikeParser::Function_type_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_type_identifier(this);
}

void clikeParser::Function_type_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_type_identifier(this);
}


antlrcpp::Any clikeParser::Function_type_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitFunction_type_identifier(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Function_type_identifierContext* clikeParser::function_type_identifier() {
  Function_type_identifierContext *_localctx = _tracker.createInstance<Function_type_identifierContext>(_ctx, getState());
  enterRule(_localctx, 40, clikeParser::RuleFunction_type_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(194);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case clikeParser::T__7:
      case clikeParser::T__8: {
        enterOuterAlt(_localctx, 1);
        setState(192);
        type_identifier();
        break;
      }

      case clikeParser::T__9: {
        enterOuterAlt(_localctx, 2);
        setState(193);
        match(clikeParser::T__9);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

clikeParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::IdentifierLiteralContext* clikeParser::ValueContext::identifierLiteral() {
  return getRuleContext<clikeParser::IdentifierLiteralContext>(0);
}

clikeParser::S_callContext* clikeParser::ValueContext::s_call() {
  return getRuleContext<clikeParser::S_callContext>(0);
}


size_t clikeParser::ValueContext::getRuleIndex() const {
  return clikeParser::RuleValue;
}

void clikeParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void clikeParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}


antlrcpp::Any clikeParser::ValueContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitValue(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::ValueContext* clikeParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 42, clikeParser::RuleValue);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(198);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case clikeParser::Name:
      case clikeParser::Number:
      case clikeParser::Single_string:
      case clikeParser::Double_string: {
        enterOuterAlt(_localctx, 1);
        setState(196);
        identifierLiteral();
        break;
      }

      case clikeParser::T__4: {
        enterOuterAlt(_localctx, 2);
        setState(197);
        s_call();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierContext ------------------------------------------------------------------

clikeParser::IdentifierContext::IdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::Var_identifierContext* clikeParser::IdentifierContext::var_identifier() {
  return getRuleContext<clikeParser::Var_identifierContext>(0);
}

clikeParser::Array_identifierContext* clikeParser::IdentifierContext::array_identifier() {
  return getRuleContext<clikeParser::Array_identifierContext>(0);
}


size_t clikeParser::IdentifierContext::getRuleIndex() const {
  return clikeParser::RuleIdentifier;
}

void clikeParser::IdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifier(this);
}

void clikeParser::IdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifier(this);
}


antlrcpp::Any clikeParser::IdentifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitIdentifier(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::IdentifierContext* clikeParser::identifier() {
  IdentifierContext *_localctx = _tracker.createInstance<IdentifierContext>(_ctx, getState());
  enterRule(_localctx, 44, clikeParser::RuleIdentifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(202);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(200);
      var_identifier();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(201);
      array_identifier();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierLiteralContext ------------------------------------------------------------------

clikeParser::IdentifierLiteralContext::IdentifierLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::IdentifierContext* clikeParser::IdentifierLiteralContext::identifier() {
  return getRuleContext<clikeParser::IdentifierContext>(0);
}

clikeParser::LiteralContext* clikeParser::IdentifierLiteralContext::literal() {
  return getRuleContext<clikeParser::LiteralContext>(0);
}


size_t clikeParser::IdentifierLiteralContext::getRuleIndex() const {
  return clikeParser::RuleIdentifierLiteral;
}

void clikeParser::IdentifierLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierLiteral(this);
}

void clikeParser::IdentifierLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierLiteral(this);
}


antlrcpp::Any clikeParser::IdentifierLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitIdentifierLiteral(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::IdentifierLiteralContext* clikeParser::identifierLiteral() {
  IdentifierLiteralContext *_localctx = _tracker.createInstance<IdentifierLiteralContext>(_ctx, getState());
  enterRule(_localctx, 46, clikeParser::RuleIdentifierLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case clikeParser::Name: {
        enterOuterAlt(_localctx, 1);
        setState(204);
        identifier();
        break;
      }

      case clikeParser::Number:
      case clikeParser::Single_string:
      case clikeParser::Double_string: {
        enterOuterAlt(_localctx, 2);
        setState(205);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Array_identifierContext ------------------------------------------------------------------

clikeParser::Array_identifierContext::Array_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* clikeParser::Array_identifierContext::Name() {
  return getToken(clikeParser::Name, 0);
}

tree::TerminalNode* clikeParser::Array_identifierContext::LeftBracket() {
  return getToken(clikeParser::LeftBracket, 0);
}

clikeParser::ValueContext* clikeParser::Array_identifierContext::value() {
  return getRuleContext<clikeParser::ValueContext>(0);
}

tree::TerminalNode* clikeParser::Array_identifierContext::RightBracket() {
  return getToken(clikeParser::RightBracket, 0);
}


size_t clikeParser::Array_identifierContext::getRuleIndex() const {
  return clikeParser::RuleArray_identifier;
}

void clikeParser::Array_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArray_identifier(this);
}

void clikeParser::Array_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArray_identifier(this);
}


antlrcpp::Any clikeParser::Array_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitArray_identifier(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Array_identifierContext* clikeParser::array_identifier() {
  Array_identifierContext *_localctx = _tracker.createInstance<Array_identifierContext>(_ctx, getState());
  enterRule(_localctx, 48, clikeParser::RuleArray_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(208);
    match(clikeParser::Name);
    setState(209);
    match(clikeParser::LeftBracket);
    setState(210);
    value();
    setState(211);
    match(clikeParser::RightBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_identifierContext ------------------------------------------------------------------

clikeParser::Var_identifierContext::Var_identifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* clikeParser::Var_identifierContext::Name() {
  return getToken(clikeParser::Name, 0);
}


size_t clikeParser::Var_identifierContext::getRuleIndex() const {
  return clikeParser::RuleVar_identifier;
}

void clikeParser::Var_identifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_identifier(this);
}

void clikeParser::Var_identifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_identifier(this);
}


antlrcpp::Any clikeParser::Var_identifierContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitVar_identifier(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::Var_identifierContext* clikeParser::var_identifier() {
  Var_identifierContext *_localctx = _tracker.createInstance<Var_identifierContext>(_ctx, getState());
  enterRule(_localctx, 50, clikeParser::RuleVar_identifier);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(clikeParser::Name);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

clikeParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

clikeParser::StringContext* clikeParser::LiteralContext::string() {
  return getRuleContext<clikeParser::StringContext>(0);
}

tree::TerminalNode* clikeParser::LiteralContext::Number() {
  return getToken(clikeParser::Number, 0);
}


size_t clikeParser::LiteralContext::getRuleIndex() const {
  return clikeParser::RuleLiteral;
}

void clikeParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void clikeParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any clikeParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::LiteralContext* clikeParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 52, clikeParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(217);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case clikeParser::Single_string:
      case clikeParser::Double_string: {
        enterOuterAlt(_localctx, 1);
        setState(215);
        string();
        break;
      }

      case clikeParser::Number: {
        enterOuterAlt(_localctx, 2);
        setState(216);
        match(clikeParser::Number);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

clikeParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* clikeParser::StringContext::Single_string() {
  return getToken(clikeParser::Single_string, 0);
}

tree::TerminalNode* clikeParser::StringContext::Double_string() {
  return getToken(clikeParser::Double_string, 0);
}


size_t clikeParser::StringContext::getRuleIndex() const {
  return clikeParser::RuleString;
}

void clikeParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void clikeParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}


antlrcpp::Any clikeParser::StringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitString(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::StringContext* clikeParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 54, clikeParser::RuleString);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(219);
    _la = _input->LA(1);
    if (!(_la == clikeParser::Single_string

    || _la == clikeParser::Double_string)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OpContext ------------------------------------------------------------------

clikeParser::OpContext::OpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* clikeParser::OpContext::Op_plus() {
  return getToken(clikeParser::Op_plus, 0);
}

tree::TerminalNode* clikeParser::OpContext::Op_minus() {
  return getToken(clikeParser::Op_minus, 0);
}

tree::TerminalNode* clikeParser::OpContext::Op_multiplication() {
  return getToken(clikeParser::Op_multiplication, 0);
}

tree::TerminalNode* clikeParser::OpContext::Op_div() {
  return getToken(clikeParser::Op_div, 0);
}

tree::TerminalNode* clikeParser::OpContext::Op_mod() {
  return getToken(clikeParser::Op_mod, 0);
}


size_t clikeParser::OpContext::getRuleIndex() const {
  return clikeParser::RuleOp;
}

void clikeParser::OpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp(this);
}

void clikeParser::OpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp(this);
}


antlrcpp::Any clikeParser::OpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitOp(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::OpContext* clikeParser::op() {
  OpContext *_localctx = _tracker.createInstance<OpContext>(_ctx, getState());
  enterRule(_localctx, 56, clikeParser::RuleOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << clikeParser::Op_plus)
      | (1ULL << clikeParser::Op_minus)
      | (1ULL << clikeParser::Op_multiplication)
      | (1ULL << clikeParser::Op_div)
      | (1ULL << clikeParser::Op_mod))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompareContext ------------------------------------------------------------------

clikeParser::CompareContext::CompareContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* clikeParser::CompareContext::Compare_equals() {
  return getToken(clikeParser::Compare_equals, 0);
}

tree::TerminalNode* clikeParser::CompareContext::Compare_lower() {
  return getToken(clikeParser::Compare_lower, 0);
}

tree::TerminalNode* clikeParser::CompareContext::Compare_lowere() {
  return getToken(clikeParser::Compare_lowere, 0);
}

tree::TerminalNode* clikeParser::CompareContext::Compare_greater() {
  return getToken(clikeParser::Compare_greater, 0);
}

tree::TerminalNode* clikeParser::CompareContext::Compare_greatere() {
  return getToken(clikeParser::Compare_greatere, 0);
}


size_t clikeParser::CompareContext::getRuleIndex() const {
  return clikeParser::RuleCompare;
}

void clikeParser::CompareContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompare(this);
}

void clikeParser::CompareContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<clikeListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompare(this);
}


antlrcpp::Any clikeParser::CompareContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<clikeVisitor*>(visitor))
    return parserVisitor->visitCompare(this);
  else
    return visitor->visitChildren(this);
}

clikeParser::CompareContext* clikeParser::compare() {
  CompareContext *_localctx = _tracker.createInstance<CompareContext>(_ctx, getState());
  enterRule(_localctx, 58, clikeParser::RuleCompare);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << clikeParser::Compare_equals)
      | (1ULL << clikeParser::Compare_lower)
      | (1ULL << clikeParser::Compare_lowere)
      | (1ULL << clikeParser::Compare_greater)
      | (1ULL << clikeParser::Compare_greatere))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> clikeParser::_decisionToDFA;
atn::PredictionContextCache clikeParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN clikeParser::_atn;
std::vector<uint16_t> clikeParser::_serializedATN;

std::vector<std::string> clikeParser::_ruleNames = {
  "program", "statement_top", "statement_if", "statement_while", "statement_function", 
  "s_var_def", "s_var_assign", "s_var_expression", "s_if", "s_while", "s_fdef", 
  "s_break", "s_call", "s_return", "call_parametrs", "call_parametr", "parametrs", 
  "parametr", "logical", "type_identifier", "function_type_identifier", 
  "value", "identifier", "identifierLiteral", "array_identifier", "var_identifier", 
  "literal", "string", "op", "compare"
};

std::vector<std::string> clikeParser::_literalNames = {
  "", "'if'", "'while'", "'fdef'", "'break'", "'call'", "'return'", "','", 
  "'int'", "'string'", "'void'", "", "", "", "", "':'", "';'", "'='", "'('", 
  "')'", "'['", "']'", "'{'", "'}'", "'+'", "'-'", "'*'", "'/'", "'%'", 
  "'=='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> clikeParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "Name", "Number", "Single_string", 
  "Double_string", "Colon", "Semicolon", "Equals", "LeftParen", "RightParen", 
  "LeftBracket", "RightBracket", "LeftBrace", "RightBrace", "Op_plus", "Op_minus", 
  "Op_multiplication", "Op_div", "Op_mod", "Compare_equals", "Compare_lower", 
  "Compare_lowere", "Compare_greater", "Compare_greatere", "Whitespace", 
  "Newline", "BlockComment", "LineComment"
};

dfa::Vocabulary clikeParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> clikeParser::_tokenNames;

clikeParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x27, 0xe4, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 
    0x9, 0x1f, 0x3, 0x2, 0x6, 0x2, 0x40, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x41, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x5, 0x3, 0x4b, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x54, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 
    0x5e, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x67, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 0x7f, 0xa, 
    0xa, 0xd, 0xa, 0xe, 0xa, 0x80, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x6, 0xb, 0x8b, 0xa, 0xb, 0xd, 
    0xb, 0xe, 0xb, 0x8c, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x99, 0xa, 
    0xc, 0xd, 0xc, 0xe, 0xc, 0x9a, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x6, 0x10, 0xad, 
    0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xae, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x12, 0x6, 0x12, 0xb5, 0xa, 0x12, 0xd, 0x12, 0xe, 0x12, 0xb6, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0xc5, 
    0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xc9, 0xa, 0x17, 0x3, 0x18, 
    0x3, 0x18, 0x5, 0x18, 0xcd, 0xa, 0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 
    0xd1, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0xdc, 0xa, 0x1c, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x2, 0x2, 0x20, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 
    0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x3c, 0x2, 0x6, 0x3, 
    0x2, 0xa, 0xb, 0x3, 0x2, 0xf, 0x10, 0x3, 0x2, 0x1a, 0x1e, 0x3, 0x2, 
    0x1f, 0x23, 0x2, 0xe9, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x4, 0x4a, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x53, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x66, 0x3, 0x2, 0x2, 0x2, 0xc, 0x68, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x71, 0x3, 0x2, 0x2, 0x2, 0x12, 0x78, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x84, 0x3, 0x2, 0x2, 0x2, 0x16, 0x90, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xac, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb4, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x26, 0xbc, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xc0, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x30, 0xd0, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0xd2, 0x3, 0x2, 0x2, 0x2, 0x34, 0xd7, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0xdb, 0x3, 0x2, 0x2, 0x2, 0x38, 0xdd, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x3c, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x40, 0x5, 0x4, 0x3, 0x2, 0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x41, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x3, 0x3, 0x2, 0x2, 0x2, 0x43, 0x4b, 0x5, 
    0xc, 0x7, 0x2, 0x44, 0x4b, 0x5, 0xe, 0x8, 0x2, 0x45, 0x4b, 0x5, 0x10, 
    0x9, 0x2, 0x46, 0x4b, 0x5, 0x12, 0xa, 0x2, 0x47, 0x4b, 0x5, 0x14, 0xb, 
    0x2, 0x48, 0x4b, 0x5, 0x16, 0xc, 0x2, 0x49, 0x4b, 0x5, 0x1a, 0xe, 0x2, 
    0x4a, 0x43, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4a, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x46, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x47, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x49, 0x3, 
    0x2, 0x2, 0x2, 0x4b, 0x5, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x54, 0x5, 0xc, 
    0x7, 0x2, 0x4d, 0x54, 0x5, 0xe, 0x8, 0x2, 0x4e, 0x54, 0x5, 0x10, 0x9, 
    0x2, 0x4f, 0x54, 0x5, 0x12, 0xa, 0x2, 0x50, 0x54, 0x5, 0x14, 0xb, 0x2, 
    0x51, 0x54, 0x5, 0x1a, 0xe, 0x2, 0x52, 0x54, 0x5, 0x1c, 0xf, 0x2, 0x53, 
    0x4c, 0x3, 0x2, 0x2, 0x2, 0x53, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x53, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x53, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x52, 0x3, 0x2, 
    0x2, 0x2, 0x54, 0x7, 0x3, 0x2, 0x2, 0x2, 0x55, 0x5e, 0x5, 0xc, 0x7, 
    0x2, 0x56, 0x5e, 0x5, 0xe, 0x8, 0x2, 0x57, 0x5e, 0x5, 0x10, 0x9, 0x2, 
    0x58, 0x5e, 0x5, 0x12, 0xa, 0x2, 0x59, 0x5e, 0x5, 0x14, 0xb, 0x2, 0x5a, 
    0x5e, 0x5, 0x18, 0xd, 0x2, 0x5b, 0x5e, 0x5, 0x1a, 0xe, 0x2, 0x5c, 0x5e, 
    0x5, 0x1c, 0xf, 0x2, 0x5d, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x56, 0x3, 
    0x2, 0x2, 0x2, 0x5d, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x58, 0x3, 0x2, 
    0x2, 0x2, 0x5d, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5a, 0x3, 0x2, 0x2, 
    0x2, 0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x67, 0x5, 0xc, 0x7, 0x2, 0x60, 
    0x67, 0x5, 0xe, 0x8, 0x2, 0x61, 0x67, 0x5, 0x10, 0x9, 0x2, 0x62, 0x67, 
    0x5, 0x12, 0xa, 0x2, 0x63, 0x67, 0x5, 0x14, 0xb, 0x2, 0x64, 0x67, 0x5, 
    0x1a, 0xe, 0x2, 0x65, 0x67, 0x5, 0x1c, 0xf, 0x2, 0x66, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x66, 0x60, 0x3, 0x2, 0x2, 0x2, 0x66, 0x61, 0x3, 0x2, 0x2, 
    0x2, 0x66, 0x62, 0x3, 0x2, 0x2, 0x2, 0x66, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x65, 0x3, 0x2, 0x2, 0x2, 0x67, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x5, 0x28, 0x15, 0x2, 0x69, 0x6a, 
    0x5, 0x2e, 0x18, 0x2, 0x6a, 0x6b, 0x7, 0x12, 0x2, 0x2, 0x6b, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x2e, 0x18, 0x2, 0x6d, 0x6e, 0x7, 0x13, 
    0x2, 0x2, 0x6e, 0x6f, 0x5, 0x2c, 0x17, 0x2, 0x6f, 0x70, 0x7, 0x12, 0x2, 
    0x2, 0x70, 0xf, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x5, 0x2e, 0x18, 0x2, 
    0x72, 0x73, 0x7, 0x13, 0x2, 0x2, 0x73, 0x74, 0x5, 0x2c, 0x17, 0x2, 0x74, 
    0x75, 0x5, 0x3a, 0x1e, 0x2, 0x75, 0x76, 0x5, 0x2c, 0x17, 0x2, 0x76, 
    0x77, 0x7, 0x12, 0x2, 0x2, 0x77, 0x11, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 
    0x7, 0x3, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x14, 0x2, 0x2, 0x7a, 0x7b, 0x5, 
    0x26, 0x14, 0x2, 0x7b, 0x7c, 0x7, 0x15, 0x2, 0x2, 0x7c, 0x7e, 0x7, 0x18, 
    0x2, 0x2, 0x7d, 0x7f, 0x5, 0x6, 0x4, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x7f, 0x80, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 
    0x83, 0x7, 0x19, 0x2, 0x2, 0x83, 0x13, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 
    0x7, 0x4, 0x2, 0x2, 0x85, 0x86, 0x7, 0x14, 0x2, 0x2, 0x86, 0x87, 0x5, 
    0x26, 0x14, 0x2, 0x87, 0x88, 0x7, 0x15, 0x2, 0x2, 0x88, 0x8a, 0x7, 0x18, 
    0x2, 0x2, 0x89, 0x8b, 0x5, 0x8, 0x5, 0x2, 0x8a, 0x89, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x8f, 0x7, 0x19, 0x2, 0x2, 0x8f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 
    0x7, 0x5, 0x2, 0x2, 0x91, 0x92, 0x5, 0x2a, 0x16, 0x2, 0x92, 0x93, 0x5, 
    0x34, 0x1b, 0x2, 0x93, 0x94, 0x7, 0x14, 0x2, 0x2, 0x94, 0x95, 0x5, 0x22, 
    0x12, 0x2, 0x95, 0x96, 0x7, 0x15, 0x2, 0x2, 0x96, 0x98, 0x7, 0x18, 0x2, 
    0x2, 0x97, 0x99, 0x5, 0xa, 0x6, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 
    0x7, 0x19, 0x2, 0x2, 0x9d, 0x17, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x7, 
    0x6, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x12, 0x2, 0x2, 0xa0, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0xa1, 0xa2, 0x7, 0x7, 0x2, 0x2, 0xa2, 0xa3, 0x5, 0x2e, 0x18, 
    0x2, 0xa3, 0xa4, 0x7, 0x14, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x1e, 0x10, 0x2, 
    0xa5, 0xa6, 0x7, 0x15, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x12, 0x2, 0x2, 0xa7, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x7, 0x8, 0x2, 0x2, 0xa9, 0xaa, 
    0x5, 0x2c, 0x17, 0x2, 0xaa, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 0x5, 
    0x20, 0x11, 0x2, 0xac, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 0x2, 
    0x2, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xaf, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x5, 0x2c, 0x17, 0x2, 
    0xb1, 0xb2, 0x7, 0x9, 0x2, 0x2, 0xb2, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb3, 
    0xb5, 0x5, 0x24, 0x13, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 
    0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 
    0x2, 0x2, 0x2, 0xb7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0x28, 
    0x15, 0x2, 0xb9, 0xba, 0x5, 0x34, 0x1b, 0x2, 0xba, 0xbb, 0x7, 0x9, 0x2, 
    0x2, 0xbb, 0x25, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x5, 0x2c, 0x17, 0x2, 
    0xbd, 0xbe, 0x5, 0x3c, 0x1f, 0x2, 0xbe, 0xbf, 0x5, 0x2c, 0x17, 0x2, 
    0xbf, 0x27, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x9, 0x2, 0x2, 0x2, 0xc1, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc5, 0x5, 0x28, 0x15, 0x2, 0xc3, 0xc5, 
    0x7, 0xc, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x5, 0x30, 
    0x19, 0x2, 0xc7, 0xc9, 0x5, 0x1a, 0xe, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xcd, 0x5, 0x34, 0x1b, 0x2, 0xcb, 0xcd, 0x5, 0x32, 0x1a, 0x2, 
    0xcc, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xcd, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 0x5, 0x2e, 0x18, 0x2, 0xcf, 0xd1, 
    0x5, 0x36, 0x1c, 0x2, 0xd0, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0x31, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0xd, 
    0x2, 0x2, 0xd3, 0xd4, 0x7, 0x16, 0x2, 0x2, 0xd4, 0xd5, 0x5, 0x2c, 0x17, 
    0x2, 0xd5, 0xd6, 0x7, 0x17, 0x2, 0x2, 0xd6, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0xd7, 0xd8, 0x7, 0xd, 0x2, 0x2, 0xd8, 0x35, 0x3, 0x2, 0x2, 0x2, 0xd9, 
    0xdc, 0x5, 0x38, 0x1d, 0x2, 0xda, 0xdc, 0x7, 0xe, 0x2, 0x2, 0xdb, 0xd9, 
    0x3, 0x2, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0xdd, 0xde, 0x9, 0x3, 0x2, 0x2, 0xde, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0xdf, 0xe0, 0x9, 0x4, 0x2, 0x2, 0xe0, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0xe1, 0xe2, 0x9, 0x5, 0x2, 0x2, 0xe2, 0x3d, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x41, 0x4a, 0x53, 0x5d, 0x66, 0x80, 0x8c, 0x9a, 0xae, 0xb6, 0xc4, 
    0xc8, 0xcc, 0xd0, 0xdb, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

clikeParser::Initializer clikeParser::_init;
