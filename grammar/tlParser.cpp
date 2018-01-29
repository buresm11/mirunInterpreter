
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1


#include "tlListener.h"
#include "tlVisitor.h"

#include "tlParser.h"


using namespace antlrcpp;
using namespace antlr4;

tlParser::tlParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

tlParser::~tlParser() {
  delete _interpreter;
}

std::string tlParser::getGrammarFileName() const {
  return "tl.g4";
}

const std::vector<std::string>& tlParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& tlParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ParseContext ------------------------------------------------------------------

tlParser::ParseContext::ParseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tlParser::Top_blockContext* tlParser::ParseContext::top_block() {
  return getRuleContext<tlParser::Top_blockContext>(0);
}

tree::TerminalNode* tlParser::ParseContext::EOF() {
  return getToken(tlParser::EOF, 0);
}


size_t tlParser::ParseContext::getRuleIndex() const {
  return tlParser::RuleParse;
}

void tlParser::ParseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParse(this);
}

void tlParser::ParseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParse(this);
}


antlrcpp::Any tlParser::ParseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitParse(this);
  else
    return visitor->visitChildren(this);
}

tlParser::ParseContext* tlParser::parse() {
  ParseContext *_localctx = _tracker.createInstance<ParseContext>(_ctx, getState());
  enterRule(_localctx, 0, tlParser::RuleParse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    top_block();
    setState(35);
    match(tlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Top_blockContext ------------------------------------------------------------------

tlParser::Top_blockContext::Top_blockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tlParser::StatementContext *> tlParser::Top_blockContext::statement() {
  return getRuleContexts<tlParser::StatementContext>();
}

tlParser::StatementContext* tlParser::Top_blockContext::statement(size_t i) {
  return getRuleContext<tlParser::StatementContext>(i);
}

std::vector<tlParser::Function_declContext *> tlParser::Top_blockContext::function_decl() {
  return getRuleContexts<tlParser::Function_declContext>();
}

tlParser::Function_declContext* tlParser::Top_blockContext::function_decl(size_t i) {
  return getRuleContext<tlParser::Function_declContext>(i);
}


size_t tlParser::Top_blockContext::getRuleIndex() const {
  return tlParser::RuleTop_block;
}

void tlParser::Top_blockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTop_block(this);
}

void tlParser::Top_blockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTop_block(this);
}


antlrcpp::Any tlParser::Top_blockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitTop_block(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Top_blockContext* tlParser::top_block() {
  Top_blockContext *_localctx = _tracker.createInstance<Top_blockContext>(_ctx, getState());
  enterRule(_localctx, 2, tlParser::RuleTop_block);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tlParser::Def)
      | (1ULL << tlParser::If)
      | (1ULL << tlParser::While)
      | (1ULL << tlParser::Type_identifier)
      | (1ULL << tlParser::Identifier))) != 0)) {
      setState(39);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case tlParser::If:
        case tlParser::While:
        case tlParser::Type_identifier:
        case tlParser::Identifier: {
          setState(37);
          statement();
          break;
        }

        case tlParser::Def: {
          setState(38);
          function_decl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(43);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

tlParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tlParser::StatementContext *> tlParser::BlockContext::statement() {
  return getRuleContexts<tlParser::StatementContext>();
}

tlParser::StatementContext* tlParser::BlockContext::statement(size_t i) {
  return getRuleContext<tlParser::StatementContext>(i);
}

tree::TerminalNode* tlParser::BlockContext::Return() {
  return getToken(tlParser::Return, 0);
}

tlParser::ExpressionContext* tlParser::BlockContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}


size_t tlParser::BlockContext::getRuleIndex() const {
  return tlParser::RuleBlock;
}

void tlParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void tlParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


antlrcpp::Any tlParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

tlParser::BlockContext* tlParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, tlParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tlParser::If)
      | (1ULL << tlParser::While)
      | (1ULL << tlParser::Type_identifier)
      | (1ULL << tlParser::Identifier))) != 0)) {
      setState(44);
      statement();
      setState(49);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::Return) {
      setState(50);
      match(tlParser::Return);
      setState(51);
      expression(0);
      setState(52);
      match(tlParser::SColon);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

tlParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tlParser::Variable_defContext* tlParser::StatementContext::variable_def() {
  return getRuleContext<tlParser::Variable_defContext>(0);
}

tlParser::AssignmentContext* tlParser::StatementContext::assignment() {
  return getRuleContext<tlParser::AssignmentContext>(0);
}

tlParser::Function_callContext* tlParser::StatementContext::function_call() {
  return getRuleContext<tlParser::Function_callContext>(0);
}

tlParser::If_statementContext* tlParser::StatementContext::if_statement() {
  return getRuleContext<tlParser::If_statementContext>(0);
}

tlParser::While_statementContext* tlParser::StatementContext::while_statement() {
  return getRuleContext<tlParser::While_statementContext>(0);
}


size_t tlParser::StatementContext::getRuleIndex() const {
  return tlParser::RuleStatement;
}

void tlParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void tlParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any tlParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

tlParser::StatementContext* tlParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 6, tlParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(67);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(56);
      variable_def();
      setState(57);
      match(tlParser::SColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(59);
      assignment();
      setState(60);
      match(tlParser::SColon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(62);
      function_call();
      setState(63);
      match(tlParser::SColon);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(65);
      if_statement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(66);
      while_statement();
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

//----------------- AssignmentContext ------------------------------------------------------------------

tlParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::AssignmentContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::ExpressionContext* tlParser::AssignmentContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::IndexContext* tlParser::AssignmentContext::index() {
  return getRuleContext<tlParser::IndexContext>(0);
}


size_t tlParser::AssignmentContext::getRuleIndex() const {
  return tlParser::RuleAssignment;
}

void tlParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void tlParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


antlrcpp::Any tlParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

tlParser::AssignmentContext* tlParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 8, tlParser::RuleAssignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    match(tlParser::Identifier);
    setState(71);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::OBracket) {
      setState(70);
      index();
    }
    setState(73);
    match(tlParser::Assign);
    setState(74);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Variable_defContext ------------------------------------------------------------------

tlParser::Variable_defContext::Variable_defContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::Variable_defContext::Type_identifier() {
  return getToken(tlParser::Type_identifier, 0);
}

tree::TerminalNode* tlParser::Variable_defContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::IndexContext* tlParser::Variable_defContext::index() {
  return getRuleContext<tlParser::IndexContext>(0);
}


size_t tlParser::Variable_defContext::getRuleIndex() const {
  return tlParser::RuleVariable_def;
}

void tlParser::Variable_defContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable_def(this);
}

void tlParser::Variable_defContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable_def(this);
}


antlrcpp::Any tlParser::Variable_defContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitVariable_def(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Variable_defContext* tlParser::variable_def() {
  Variable_defContext *_localctx = _tracker.createInstance<Variable_defContext>(_ctx, getState());
  enterRule(_localctx, 10, tlParser::RuleVariable_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(tlParser::Type_identifier);
    setState(77);
    match(tlParser::Identifier);
    setState(79);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::OBracket) {
      setState(78);
      index();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

tlParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::Function_callContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::Expr_listContext* tlParser::Function_callContext::expr_list() {
  return getRuleContext<tlParser::Expr_listContext>(0);
}


size_t tlParser::Function_callContext::getRuleIndex() const {
  return tlParser::RuleFunction_call;
}

void tlParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void tlParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}


antlrcpp::Any tlParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Function_callContext* tlParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 12, tlParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(tlParser::Identifier);
    setState(82);
    match(tlParser::OParen);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tlParser::Excl)
      | (1ULL << tlParser::Subtract)
      | (1ULL << tlParser::Bool)
      | (1ULL << tlParser::Number)
      | (1ULL << tlParser::Identifier)
      | (1ULL << tlParser::String))) != 0)) {
      setState(83);
      expr_list();
    }
    setState(86);
    match(tlParser::CParen);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

tlParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tlParser::If_statContext* tlParser::If_statementContext::if_stat() {
  return getRuleContext<tlParser::If_statContext>(0);
}

tree::TerminalNode* tlParser::If_statementContext::End() {
  return getToken(tlParser::End, 0);
}

std::vector<tlParser::Else_if_statContext *> tlParser::If_statementContext::else_if_stat() {
  return getRuleContexts<tlParser::Else_if_statContext>();
}

tlParser::Else_if_statContext* tlParser::If_statementContext::else_if_stat(size_t i) {
  return getRuleContext<tlParser::Else_if_statContext>(i);
}

tlParser::Else_statContext* tlParser::If_statementContext::else_stat() {
  return getRuleContext<tlParser::Else_statContext>(0);
}


size_t tlParser::If_statementContext::getRuleIndex() const {
  return tlParser::RuleIf_statement;
}

void tlParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void tlParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}


antlrcpp::Any tlParser::If_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitIf_statement(this);
  else
    return visitor->visitChildren(this);
}

tlParser::If_statementContext* tlParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, tlParser::RuleIf_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(88);
    if_stat();
    setState(92);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(89);
        else_if_stat(); 
      }
      setState(94);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx);
    }
    setState(96);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::Else) {
      setState(95);
      else_stat();
    }
    setState(98);
    match(tlParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statContext ------------------------------------------------------------------

tlParser::If_statContext::If_statContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::If_statContext::If() {
  return getToken(tlParser::If, 0);
}

tlParser::ExpressionContext* tlParser::If_statContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tree::TerminalNode* tlParser::If_statContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::If_statContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}


size_t tlParser::If_statContext::getRuleIndex() const {
  return tlParser::RuleIf_stat;
}

void tlParser::If_statContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stat(this);
}

void tlParser::If_statContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stat(this);
}


antlrcpp::Any tlParser::If_statContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitIf_stat(this);
  else
    return visitor->visitChildren(this);
}

tlParser::If_statContext* tlParser::if_stat() {
  If_statContext *_localctx = _tracker.createInstance<If_statContext>(_ctx, getState());
  enterRule(_localctx, 16, tlParser::RuleIf_stat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(tlParser::If);
    setState(101);
    expression(0);
    setState(102);
    match(tlParser::Do);
    setState(103);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_if_statContext ------------------------------------------------------------------

tlParser::Else_if_statContext::Else_if_statContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::Else_if_statContext::Else() {
  return getToken(tlParser::Else, 0);
}

tree::TerminalNode* tlParser::Else_if_statContext::If() {
  return getToken(tlParser::If, 0);
}

tlParser::ExpressionContext* tlParser::Else_if_statContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tree::TerminalNode* tlParser::Else_if_statContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::Else_if_statContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}


size_t tlParser::Else_if_statContext::getRuleIndex() const {
  return tlParser::RuleElse_if_stat;
}

void tlParser::Else_if_statContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_if_stat(this);
}

void tlParser::Else_if_statContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_if_stat(this);
}


antlrcpp::Any tlParser::Else_if_statContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitElse_if_stat(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Else_if_statContext* tlParser::else_if_stat() {
  Else_if_statContext *_localctx = _tracker.createInstance<Else_if_statContext>(_ctx, getState());
  enterRule(_localctx, 18, tlParser::RuleElse_if_stat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(tlParser::Else);
    setState(106);
    match(tlParser::If);
    setState(107);
    expression(0);
    setState(108);
    match(tlParser::Do);
    setState(109);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Else_statContext ------------------------------------------------------------------

tlParser::Else_statContext::Else_statContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::Else_statContext::Else() {
  return getToken(tlParser::Else, 0);
}

tree::TerminalNode* tlParser::Else_statContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::Else_statContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}


size_t tlParser::Else_statContext::getRuleIndex() const {
  return tlParser::RuleElse_stat;
}

void tlParser::Else_statContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElse_stat(this);
}

void tlParser::Else_statContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElse_stat(this);
}


antlrcpp::Any tlParser::Else_statContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitElse_stat(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Else_statContext* tlParser::else_stat() {
  Else_statContext *_localctx = _tracker.createInstance<Else_statContext>(_ctx, getState());
  enterRule(_localctx, 20, tlParser::RuleElse_stat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(tlParser::Else);
    setState(112);
    match(tlParser::Do);
    setState(113);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declContext ------------------------------------------------------------------

tlParser::Function_declContext::Function_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::Function_declContext::Def() {
  return getToken(tlParser::Def, 0);
}

tree::TerminalNode* tlParser::Function_declContext::Type_identifier() {
  return getToken(tlParser::Type_identifier, 0);
}

tree::TerminalNode* tlParser::Function_declContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::BlockContext* tlParser::Function_declContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}

tree::TerminalNode* tlParser::Function_declContext::End() {
  return getToken(tlParser::End, 0);
}

tlParser::Id_list_declContext* tlParser::Function_declContext::id_list_decl() {
  return getRuleContext<tlParser::Id_list_declContext>(0);
}


size_t tlParser::Function_declContext::getRuleIndex() const {
  return tlParser::RuleFunction_decl;
}

void tlParser::Function_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_decl(this);
}

void tlParser::Function_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_decl(this);
}


antlrcpp::Any tlParser::Function_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitFunction_decl(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Function_declContext* tlParser::function_decl() {
  Function_declContext *_localctx = _tracker.createInstance<Function_declContext>(_ctx, getState());
  enterRule(_localctx, 22, tlParser::RuleFunction_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(tlParser::Def);
    setState(116);
    match(tlParser::Type_identifier);
    setState(117);
    match(tlParser::Identifier);
    setState(118);
    match(tlParser::OParen);
    setState(120);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::Type_identifier) {
      setState(119);
      id_list_decl();
    }
    setState(122);
    match(tlParser::CParen);
    setState(123);
    block();
    setState(124);
    match(tlParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_statementContext ------------------------------------------------------------------

tlParser::While_statementContext::While_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::While_statementContext::While() {
  return getToken(tlParser::While, 0);
}

tlParser::ExpressionContext* tlParser::While_statementContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tree::TerminalNode* tlParser::While_statementContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::While_statementContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}

tree::TerminalNode* tlParser::While_statementContext::End() {
  return getToken(tlParser::End, 0);
}


size_t tlParser::While_statementContext::getRuleIndex() const {
  return tlParser::RuleWhile_statement;
}

void tlParser::While_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_statement(this);
}

void tlParser::While_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_statement(this);
}


antlrcpp::Any tlParser::While_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitWhile_statement(this);
  else
    return visitor->visitChildren(this);
}

tlParser::While_statementContext* tlParser::while_statement() {
  While_statementContext *_localctx = _tracker.createInstance<While_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, tlParser::RuleWhile_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(tlParser::While);
    setState(127);
    expression(0);
    setState(128);
    match(tlParser::Do);
    setState(129);
    block();
    setState(130);
    match(tlParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Id_list_declContext ------------------------------------------------------------------

tlParser::Id_list_declContext::Id_list_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> tlParser::Id_list_declContext::Type_identifier() {
  return getTokens(tlParser::Type_identifier);
}

tree::TerminalNode* tlParser::Id_list_declContext::Type_identifier(size_t i) {
  return getToken(tlParser::Type_identifier, i);
}

std::vector<tree::TerminalNode *> tlParser::Id_list_declContext::Identifier() {
  return getTokens(tlParser::Identifier);
}

tree::TerminalNode* tlParser::Id_list_declContext::Identifier(size_t i) {
  return getToken(tlParser::Identifier, i);
}


size_t tlParser::Id_list_declContext::getRuleIndex() const {
  return tlParser::RuleId_list_decl;
}

void tlParser::Id_list_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId_list_decl(this);
}

void tlParser::Id_list_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId_list_decl(this);
}


antlrcpp::Any tlParser::Id_list_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitId_list_decl(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Id_list_declContext* tlParser::id_list_decl() {
  Id_list_declContext *_localctx = _tracker.createInstance<Id_list_declContext>(_ctx, getState());
  enterRule(_localctx, 26, tlParser::RuleId_list_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(tlParser::Type_identifier);
    setState(133);
    match(tlParser::Identifier);
    setState(139);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == tlParser::Comma) {
      setState(134);
      match(tlParser::Comma);
      setState(135);
      match(tlParser::Type_identifier);
      setState(136);
      match(tlParser::Identifier);
      setState(141);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Expr_listContext ------------------------------------------------------------------

tlParser::Expr_listContext::Expr_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tlParser::ExpressionContext *> tlParser::Expr_listContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::Expr_listContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}


size_t tlParser::Expr_listContext::getRuleIndex() const {
  return tlParser::RuleExpr_list;
}

void tlParser::Expr_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_list(this);
}

void tlParser::Expr_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_list(this);
}


antlrcpp::Any tlParser::Expr_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitExpr_list(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Expr_listContext* tlParser::expr_list() {
  Expr_listContext *_localctx = _tracker.createInstance<Expr_listContext>(_ctx, getState());
  enterRule(_localctx, 28, tlParser::RuleExpr_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    expression(0);
    setState(147);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == tlParser::Comma) {
      setState(143);
      match(tlParser::Comma);
      setState(144);
      expression(0);
      setState(149);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

tlParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t tlParser::ExpressionContext::getRuleIndex() const {
  return tlParser::RuleExpression;
}

void tlParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LtExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::LtExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::LtExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::LtExpressionContext::LtExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::LtExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLtExpression(this);
}
void tlParser::LtExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLtExpression(this);
}

antlrcpp::Any tlParser::LtExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitLtExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GtExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::GtExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::GtExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::GtExpressionContext::GtExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::GtExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGtExpression(this);
}
void tlParser::GtExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGtExpression(this);
}

antlrcpp::Any tlParser::GtExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitGtExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolExpressionContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::BoolExpressionContext::Bool() {
  return getToken(tlParser::Bool, 0);
}

tlParser::BoolExpressionContext::BoolExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::BoolExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolExpression(this);
}
void tlParser::BoolExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolExpression(this);
}

antlrcpp::Any tlParser::BoolExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitBoolExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotEqExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::NotEqExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::NotEqExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::NotEqExpressionContext::NotEqExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::NotEqExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotEqExpression(this);
}
void tlParser::NotEqExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotEqExpression(this);
}

antlrcpp::Any tlParser::NotEqExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitNotEqExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExpressionContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::NumberExpressionContext::Number() {
  return getToken(tlParser::Number, 0);
}

tlParser::NumberExpressionContext::NumberExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::NumberExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumberExpression(this);
}
void tlParser::NumberExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumberExpression(this);
}

antlrcpp::Any tlParser::NumberExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitNumberExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierExpressionContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::IdentifierExpressionContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::IndexContext* tlParser::IdentifierExpressionContext::index() {
  return getRuleContext<tlParser::IndexContext>(0);
}

tlParser::IdentifierExpressionContext::IdentifierExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::IdentifierExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierExpression(this);
}
void tlParser::IdentifierExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierExpression(this);
}

antlrcpp::Any tlParser::IdentifierExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitIdentifierExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModulusExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::ModulusExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::ModulusExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::ModulusExpressionContext::ModulusExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::ModulusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModulusExpression(this);
}
void tlParser::ModulusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModulusExpression(this);
}

antlrcpp::Any tlParser::ModulusExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitModulusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExpressionContext ------------------------------------------------------------------

tlParser::ExpressionContext* tlParser::NotExpressionContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::NotExpressionContext::NotExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::NotExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpression(this);
}
void tlParser::NotExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpression(this);
}

antlrcpp::Any tlParser::NotExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitNotExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiplyExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::MultiplyExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::MultiplyExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::MultiplyExpressionContext::MultiplyExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::MultiplyExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplyExpression(this);
}
void tlParser::MultiplyExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplyExpression(this);
}

antlrcpp::Any tlParser::MultiplyExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitMultiplyExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GtEqExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::GtEqExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::GtEqExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::GtEqExpressionContext::GtEqExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::GtEqExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGtEqExpression(this);
}
void tlParser::GtEqExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGtEqExpression(this);
}

antlrcpp::Any tlParser::GtEqExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitGtEqExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivideExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::DivideExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::DivideExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::DivideExpressionContext::DivideExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::DivideExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivideExpression(this);
}
void tlParser::DivideExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivideExpression(this);
}

antlrcpp::Any tlParser::DivideExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitDivideExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::OrExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::OrExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::OrExpressionContext::OrExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::OrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrExpression(this);
}
void tlParser::OrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrExpression(this);
}

antlrcpp::Any tlParser::OrExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitOrExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryMinusExpressionContext ------------------------------------------------------------------

tlParser::ExpressionContext* tlParser::UnaryMinusExpressionContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::UnaryMinusExpressionContext::UnaryMinusExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::UnaryMinusExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryMinusExpression(this);
}
void tlParser::UnaryMinusExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryMinusExpression(this);
}

antlrcpp::Any tlParser::UnaryMinusExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitUnaryMinusExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::EqExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::EqExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::EqExpressionContext::EqExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::EqExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqExpression(this);
}
void tlParser::EqExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqExpression(this);
}

antlrcpp::Any tlParser::EqExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitEqExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::AndExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::AndExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::AndExpressionContext::AndExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::AndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndExpression(this);
}
void tlParser::AndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndExpression(this);
}

antlrcpp::Any tlParser::AndExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitAndExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringExpressionContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::StringExpressionContext::String() {
  return getToken(tlParser::String, 0);
}

tlParser::StringExpressionContext::StringExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::StringExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringExpression(this);
}
void tlParser::StringExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringExpression(this);
}

antlrcpp::Any tlParser::StringExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitStringExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::AddExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::AddExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::AddExpressionContext::AddExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::AddExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExpression(this);
}
void tlParser::AddExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExpression(this);
}

antlrcpp::Any tlParser::AddExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitAddExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SubtractExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::SubtractExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::SubtractExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::SubtractExpressionContext::SubtractExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::SubtractExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubtractExpression(this);
}
void tlParser::SubtractExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubtractExpression(this);
}

antlrcpp::Any tlParser::SubtractExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitSubtractExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FunctionCallExpressionContext ------------------------------------------------------------------

tlParser::Function_callContext* tlParser::FunctionCallExpressionContext::function_call() {
  return getRuleContext<tlParser::Function_callContext>(0);
}

tlParser::IndexContext* tlParser::FunctionCallExpressionContext::index() {
  return getRuleContext<tlParser::IndexContext>(0);
}

tlParser::FunctionCallExpressionContext::FunctionCallExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::FunctionCallExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpression(this);
}
void tlParser::FunctionCallExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpression(this);
}

antlrcpp::Any tlParser::FunctionCallExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtEqExpressionContext ------------------------------------------------------------------

std::vector<tlParser::ExpressionContext *> tlParser::LtEqExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::LtEqExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::LtEqExpressionContext::LtEqExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::LtEqExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLtEqExpression(this);
}
void tlParser::LtEqExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLtEqExpression(this);
}

antlrcpp::Any tlParser::LtEqExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitLtEqExpression(this);
  else
    return visitor->visitChildren(this);
}

tlParser::ExpressionContext* tlParser::expression() {
   return expression(0);
}

tlParser::ExpressionContext* tlParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  tlParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  tlParser::ExpressionContext *previousContext = _localctx;
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, tlParser::RuleExpression, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(166);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryMinusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(151);
      match(tlParser::Subtract);
      setState(152);
      expression(20);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(153);
      match(tlParser::Excl);
      setState(154);
      expression(19);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumberExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(155);
      match(tlParser::Number);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BoolExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(156);
      match(tlParser::Bool);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(157);
      function_call();
      setState(159);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(158);
        index();
        break;
      }

      }
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(161);
      match(tlParser::Identifier);
      setState(163);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
      case 1: {
        setState(162);
        index();
        break;
      }

      }
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<StringExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(165);
      match(tlParser::String);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(209);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(207);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplyExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(168);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(169);
          match(tlParser::Multiply);
          setState(170);
          expression(19);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivideExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(171);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(172);
          match(tlParser::Divide);
          setState(173);
          expression(18);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModulusExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(174);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(175);
          match(tlParser::Modulus);
          setState(176);
          expression(17);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(177);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(178);
          match(tlParser::Add);
          setState(179);
          expression(16);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubtractExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(180);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(181);
          match(tlParser::Subtract);
          setState(182);
          expression(15);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<GtEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(183);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(184);
          match(tlParser::GTEquals);
          setState(185);
          expression(14);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LtEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(186);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(187);
          match(tlParser::LTEquals);
          setState(188);
          expression(13);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<GtExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(189);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(190);
          match(tlParser::GT);
          setState(191);
          expression(12);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<LtExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(192);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(193);
          match(tlParser::LT);
          setState(194);
          expression(11);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<EqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(195);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(196);
          match(tlParser::Equals);
          setState(197);
          expression(10);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<NotEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(198);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(199);
          match(tlParser::NEquals);
          setState(200);
          expression(9);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<AndExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(201);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(202);
          match(tlParser::And);
          setState(203);
          expression(8);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<OrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(204);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(205);
          match(tlParser::Or);
          setState(206);
          expression(7);
          break;
        }

        } 
      }
      setState(211);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IndexContext ------------------------------------------------------------------

tlParser::IndexContext::IndexContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tlParser::ExpressionContext* tlParser::IndexContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}


size_t tlParser::IndexContext::getRuleIndex() const {
  return tlParser::RuleIndex;
}

void tlParser::IndexContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndex(this);
}

void tlParser::IndexContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndex(this);
}


antlrcpp::Any tlParser::IndexContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitIndex(this);
  else
    return visitor->visitChildren(this);
}

tlParser::IndexContext* tlParser::index() {
  IndexContext *_localctx = _tracker.createInstance<IndexContext>(_ctx, getState());
  enterRule(_localctx, 32, tlParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(212);
    match(tlParser::OBracket);
    setState(213);
    expression(0);
    setState(214);
    match(tlParser::CBracket);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool tlParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool tlParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 18);
    case 1: return precpred(_ctx, 17);
    case 2: return precpred(_ctx, 16);
    case 3: return precpred(_ctx, 15);
    case 4: return precpred(_ctx, 14);
    case 5: return precpred(_ctx, 13);
    case 6: return precpred(_ctx, 12);
    case 7: return precpred(_ctx, 11);
    case 8: return precpred(_ctx, 10);
    case 9: return precpred(_ctx, 9);
    case 10: return precpred(_ctx, 8);
    case 11: return precpred(_ctx, 7);
    case 12: return precpred(_ctx, 6);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> tlParser::_decisionToDFA;
atn::PredictionContextCache tlParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN tlParser::_atn;
std::vector<uint16_t> tlParser::_serializedATN;

std::vector<std::string> tlParser::_ruleNames = {
  "parse", "top_block", "block", "statement", "assignment", "variable_def", 
  "function_call", "if_statement", "if_stat", "else_if_stat", "else_stat", 
  "function_decl", "while_statement", "id_list_decl", "expr_list", "expression", 
  "index"
};

std::vector<std::string> tlParser::_literalNames = {
  "", "'def'", "'if'", "'else'", "'return'", "'while'", "'to'", "'do'", 
  "'end'", "'||'", "'&&'", "'=='", "'!='", "'>='", "'<='", "'^'", "'!'", 
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'{'", "'}'", "'['", 
  "']'", "'('", "')'", "';'", "'='", "','", "'?'", "':'"
};

std::vector<std::string> tlParser::_symbolicNames = {
  "", "Def", "If", "Else", "Return", "While", "To", "Do", "End", "Or", "And", 
  "Equals", "NEquals", "GTEquals", "LTEquals", "Pow", "Excl", "GT", "LT", 
  "Add", "Subtract", "Multiply", "Divide", "Modulus", "OBrace", "CBrace", 
  "OBracket", "CBracket", "OParen", "CParen", "SColon", "Assign", "Comma", 
  "QMark", "Colon", "Type_identifier", "Bool", "Number", "Identifier", "String", 
  "Comment", "Space"
};

dfa::Vocabulary tlParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> tlParser::_tokenNames;

tlParser::Initializer::Initializer() {
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
    0x3, 0x2b, 0xdb, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 
    0x2a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x2d, 0xb, 0x3, 0x3, 0x4, 0x7, 0x4, 
    0x30, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x33, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x39, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x5, 0x5, 0x46, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 
    0x4a, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0x52, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 
    0x57, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x5d, 
    0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x60, 0xb, 0x9, 0x3, 0x9, 0x5, 0x9, 0x63, 
    0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x7b, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x8c, 
    0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0x8f, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0x94, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0x97, 0xb, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xa2, 0xa, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x5, 0x11, 0xa6, 0xa, 0x11, 0x3, 0x11, 0x5, 0x11, 0xa9, 0xa, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x7, 0x11, 0xd2, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xd5, 0xb, 0x11, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x2, 0x3, 0x20, 
    0x13, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x2, 0x2, 0x2, 0xee, 0x2, 0x24, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x45, 0x3, 0x2, 0x2, 0x2, 0xa, 0x47, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4e, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x53, 0x3, 0x2, 0x2, 0x2, 0x10, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x66, 0x3, 0x2, 0x2, 0x2, 0x14, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x71, 0x3, 0x2, 0x2, 0x2, 0x18, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x80, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x86, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x90, 0x3, 0x2, 0x2, 0x2, 0x20, 0xa8, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0xd6, 0x3, 0x2, 0x2, 0x2, 0x24, 0x25, 0x5, 0x4, 0x3, 0x2, 0x25, 0x26, 
    0x7, 0x2, 0x2, 0x3, 0x26, 0x3, 0x3, 0x2, 0x2, 0x2, 0x27, 0x2a, 0x5, 
    0x8, 0x5, 0x2, 0x28, 0x2a, 0x5, 0x18, 0xd, 0x2, 0x29, 0x27, 0x3, 0x2, 
    0x2, 0x2, 0x29, 0x28, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2d, 0x3, 0x2, 0x2, 
    0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x3, 0x2, 0x2, 0x2, 
    0x2c, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0x30, 0x5, 0x8, 0x5, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0x38, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x35, 0x7, 0x6, 0x2, 0x2, 0x35, 0x36, 0x5, 0x20, 0x11, 
    0x2, 0x36, 0x37, 0x7, 0x20, 0x2, 0x2, 0x37, 0x39, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0x34, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0xc, 0x7, 0x2, 0x3b, 0x3c, 
    0x7, 0x20, 0x2, 0x2, 0x3c, 0x46, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x5, 
    0xa, 0x6, 0x2, 0x3e, 0x3f, 0x7, 0x20, 0x2, 0x2, 0x3f, 0x46, 0x3, 0x2, 
    0x2, 0x2, 0x40, 0x41, 0x5, 0xe, 0x8, 0x2, 0x41, 0x42, 0x7, 0x20, 0x2, 
    0x2, 0x42, 0x46, 0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x5, 0x10, 0x9, 0x2, 
    0x44, 0x46, 0x5, 0x1a, 0xe, 0x2, 0x45, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x45, 0x40, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x9, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x49, 0x7, 0x28, 0x2, 0x2, 0x48, 0x4a, 0x5, 0x22, 
    0x12, 0x2, 0x49, 0x48, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4a, 0x3, 0x2, 0x2, 
    0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x21, 0x2, 0x2, 
    0x4c, 0x4d, 0x5, 0x20, 0x11, 0x2, 0x4d, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4e, 
    0x4f, 0x7, 0x25, 0x2, 0x2, 0x4f, 0x51, 0x7, 0x28, 0x2, 0x2, 0x50, 0x52, 
    0x5, 0x22, 0x12, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x52, 0xd, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x28, 
    0x2, 0x2, 0x54, 0x56, 0x7, 0x1e, 0x2, 0x2, 0x55, 0x57, 0x5, 0x1e, 0x10, 
    0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x57, 0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x7, 0x1f, 0x2, 0x2, 0x59, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5e, 0x5, 0x12, 0xa, 0x2, 0x5b, 0x5d, 
    0x5, 0x14, 0xb, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x60, 0x3, 
    0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5f, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x62, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x63, 0x5, 0x16, 0xc, 0x2, 0x62, 0x61, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x63, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 
    0x65, 0x7, 0xa, 0x2, 0x2, 0x65, 0x11, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 
    0x7, 0x4, 0x2, 0x2, 0x67, 0x68, 0x5, 0x20, 0x11, 0x2, 0x68, 0x69, 0x7, 
    0x9, 0x2, 0x2, 0x69, 0x6a, 0x5, 0x6, 0x4, 0x2, 0x6a, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x6b, 0x6c, 0x7, 0x5, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x4, 0x2, 
    0x2, 0x6d, 0x6e, 0x5, 0x20, 0x11, 0x2, 0x6e, 0x6f, 0x7, 0x9, 0x2, 0x2, 
    0x6f, 0x70, 0x5, 0x6, 0x4, 0x2, 0x70, 0x15, 0x3, 0x2, 0x2, 0x2, 0x71, 
    0x72, 0x7, 0x5, 0x2, 0x2, 0x72, 0x73, 0x7, 0x9, 0x2, 0x2, 0x73, 0x74, 
    0x5, 0x6, 0x4, 0x2, 0x74, 0x17, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 
    0x3, 0x2, 0x2, 0x76, 0x77, 0x7, 0x25, 0x2, 0x2, 0x77, 0x78, 0x7, 0x28, 
    0x2, 0x2, 0x78, 0x7a, 0x7, 0x1e, 0x2, 0x2, 0x79, 0x7b, 0x5, 0x1c, 0xf, 
    0x2, 0x7a, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 
    0x7b, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x1f, 0x2, 0x2, 0x7d, 
    0x7e, 0x5, 0x6, 0x4, 0x2, 0x7e, 0x7f, 0x7, 0xa, 0x2, 0x2, 0x7f, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0x7, 0x2, 0x2, 0x81, 0x82, 0x5, 
    0x20, 0x11, 0x2, 0x82, 0x83, 0x7, 0x9, 0x2, 0x2, 0x83, 0x84, 0x5, 0x6, 
    0x4, 0x2, 0x84, 0x85, 0x7, 0xa, 0x2, 0x2, 0x85, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x86, 0x87, 0x7, 0x25, 0x2, 0x2, 0x87, 0x8d, 0x7, 0x28, 0x2, 0x2, 
    0x88, 0x89, 0x7, 0x22, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x25, 0x2, 0x2, 0x8a, 
    0x8c, 0x7, 0x28, 0x2, 0x2, 0x8b, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x95, 0x5, 0x20, 0x11, 0x2, 0x91, 0x92, 0x7, 0x22, 0x2, 
    0x2, 0x92, 0x94, 0x5, 0x20, 0x11, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x97, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 
    0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x97, 0x95, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x8, 0x11, 0x1, 0x2, 0x99, 0x9a, 0x7, 
    0x16, 0x2, 0x2, 0x9a, 0xa9, 0x5, 0x20, 0x11, 0x16, 0x9b, 0x9c, 0x7, 
    0x12, 0x2, 0x2, 0x9c, 0xa9, 0x5, 0x20, 0x11, 0x15, 0x9d, 0xa9, 0x7, 
    0x27, 0x2, 0x2, 0x9e, 0xa9, 0x7, 0x26, 0x2, 0x2, 0x9f, 0xa1, 0x5, 0xe, 
    0x8, 0x2, 0xa0, 0xa2, 0x5, 0x22, 0x12, 0x2, 0xa1, 0xa0, 0x3, 0x2, 0x2, 
    0x2, 0xa1, 0xa2, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0xa3, 0xa5, 0x7, 0x28, 0x2, 0x2, 0xa4, 0xa6, 0x5, 0x22, 0x12, 0x2, 0xa5, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 
    0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x7, 0x29, 0x2, 0x2, 0xa8, 0x98, 0x3, 
    0x2, 0x2, 0x2, 0xa8, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x9d, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa8, 0x9f, 0x3, 0x2, 0x2, 
    0x2, 0xa8, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa7, 0x3, 0x2, 0x2, 0x2, 
    0xa9, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xab, 0xc, 0x14, 0x2, 0x2, 0xab, 
    0xac, 0x7, 0x17, 0x2, 0x2, 0xac, 0xd2, 0x5, 0x20, 0x11, 0x15, 0xad, 
    0xae, 0xc, 0x13, 0x2, 0x2, 0xae, 0xaf, 0x7, 0x18, 0x2, 0x2, 0xaf, 0xd2, 
    0x5, 0x20, 0x11, 0x14, 0xb0, 0xb1, 0xc, 0x12, 0x2, 0x2, 0xb1, 0xb2, 
    0x7, 0x19, 0x2, 0x2, 0xb2, 0xd2, 0x5, 0x20, 0x11, 0x13, 0xb3, 0xb4, 
    0xc, 0x11, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x15, 0x2, 0x2, 0xb5, 0xd2, 0x5, 
    0x20, 0x11, 0x12, 0xb6, 0xb7, 0xc, 0x10, 0x2, 0x2, 0xb7, 0xb8, 0x7, 
    0x16, 0x2, 0x2, 0xb8, 0xd2, 0x5, 0x20, 0x11, 0x11, 0xb9, 0xba, 0xc, 
    0xf, 0x2, 0x2, 0xba, 0xbb, 0x7, 0xf, 0x2, 0x2, 0xbb, 0xd2, 0x5, 0x20, 
    0x11, 0x10, 0xbc, 0xbd, 0xc, 0xe, 0x2, 0x2, 0xbd, 0xbe, 0x7, 0x10, 0x2, 
    0x2, 0xbe, 0xd2, 0x5, 0x20, 0x11, 0xf, 0xbf, 0xc0, 0xc, 0xd, 0x2, 0x2, 
    0xc0, 0xc1, 0x7, 0x13, 0x2, 0x2, 0xc1, 0xd2, 0x5, 0x20, 0x11, 0xe, 0xc2, 
    0xc3, 0xc, 0xc, 0x2, 0x2, 0xc3, 0xc4, 0x7, 0x14, 0x2, 0x2, 0xc4, 0xd2, 
    0x5, 0x20, 0x11, 0xd, 0xc5, 0xc6, 0xc, 0xb, 0x2, 0x2, 0xc6, 0xc7, 0x7, 
    0xd, 0x2, 0x2, 0xc7, 0xd2, 0x5, 0x20, 0x11, 0xc, 0xc8, 0xc9, 0xc, 0xa, 
    0x2, 0x2, 0xc9, 0xca, 0x7, 0xe, 0x2, 0x2, 0xca, 0xd2, 0x5, 0x20, 0x11, 
    0xb, 0xcb, 0xcc, 0xc, 0x9, 0x2, 0x2, 0xcc, 0xcd, 0x7, 0xc, 0x2, 0x2, 
    0xcd, 0xd2, 0x5, 0x20, 0x11, 0xa, 0xce, 0xcf, 0xc, 0x8, 0x2, 0x2, 0xcf, 
    0xd0, 0x7, 0xb, 0x2, 0x2, 0xd0, 0xd2, 0x5, 0x20, 0x11, 0x9, 0xd1, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xd1, 0xad, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xb0, 0x3, 
    0x2, 0x2, 0x2, 0xd1, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xb6, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xbc, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xc2, 0x3, 0x2, 0x2, 0x2, 
    0xd1, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xd1, 
    0xcb, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xce, 0x3, 0x2, 0x2, 0x2, 0xd2, 0xd5, 
    0x3, 0x2, 0x2, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 
    0x2, 0x2, 0x2, 0xd4, 0x21, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd7, 0x7, 0x1c, 0x2, 0x2, 0xd7, 0xd8, 0x5, 0x20, 0x11, 
    0x2, 0xd8, 0xd9, 0x7, 0x1d, 0x2, 0x2, 0xd9, 0x23, 0x3, 0x2, 0x2, 0x2, 
    0x14, 0x29, 0x2b, 0x31, 0x38, 0x45, 0x49, 0x51, 0x56, 0x5e, 0x62, 0x7a, 
    0x8d, 0x95, 0xa1, 0xa5, 0xa8, 0xd1, 0xd3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

tlParser::Initializer tlParser::_init;
