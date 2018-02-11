
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
    setState(40);
    top_block();
    setState(41);
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
    setState(47);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tlParser::Def)
      | (1ULL << tlParser::If)
      | (1ULL << tlParser::Return)
      | (1ULL << tlParser::While)
      | (1ULL << tlParser::Print)
      | (1ULL << tlParser::Scan)
      | (1ULL << tlParser::PrintLn)
      | (1ULL << tlParser::Type_identifier)
      | (1ULL << tlParser::Identifier))) != 0)) {
      setState(45);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case tlParser::If:
        case tlParser::Return:
        case tlParser::While:
        case tlParser::Print:
        case tlParser::Scan:
        case tlParser::PrintLn:
        case tlParser::Type_identifier:
        case tlParser::Identifier: {
          setState(43);
          statement();
          break;
        }

        case tlParser::Def: {
          setState(44);
          function_decl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(49);
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
    setState(53);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tlParser::If)
      | (1ULL << tlParser::Return)
      | (1ULL << tlParser::While)
      | (1ULL << tlParser::Print)
      | (1ULL << tlParser::Scan)
      | (1ULL << tlParser::PrintLn)
      | (1ULL << tlParser::Type_identifier)
      | (1ULL << tlParser::Identifier))) != 0)) {
      setState(50);
      statement();
      setState(55);
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

tlParser::Return_statementContext* tlParser::StatementContext::return_statement() {
  return getRuleContext<tlParser::Return_statementContext>(0);
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
    setState(70);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
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

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(67);
      return_statement();
      setState(68);
      match(tlParser::SColon);
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

//----------------- Return_statementContext ------------------------------------------------------------------

tlParser::Return_statementContext::Return_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::Return_statementContext::Return() {
  return getToken(tlParser::Return, 0);
}

tlParser::ExpressionContext* tlParser::Return_statementContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}


size_t tlParser::Return_statementContext::getRuleIndex() const {
  return tlParser::RuleReturn_statement;
}

void tlParser::Return_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn_statement(this);
}

void tlParser::Return_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn_statement(this);
}


antlrcpp::Any tlParser::Return_statementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitReturn_statement(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Return_statementContext* tlParser::return_statement() {
  Return_statementContext *_localctx = _tracker.createInstance<Return_statementContext>(_ctx, getState());
  enterRule(_localctx, 8, tlParser::RuleReturn_statement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(tlParser::Return);
    setState(73);
    expression(0);
   
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
  enterRule(_localctx, 10, tlParser::RuleAssignment);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(tlParser::Identifier);
    setState(77);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::OBracket) {
      setState(76);
      index();
    }
    setState(79);
    match(tlParser::Assign);
    setState(80);
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
  enterRule(_localctx, 12, tlParser::RuleVariable_def);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(tlParser::Type_identifier);
    setState(83);
    match(tlParser::Identifier);
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::OBracket) {
      setState(84);
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


size_t tlParser::Function_callContext::getRuleIndex() const {
  return tlParser::RuleFunction_call;
}

void tlParser::Function_callContext::copyFrom(Function_callContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ScanFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::ScanFunctionCallContext::Scan() {
  return getToken(tlParser::Scan, 0);
}

tree::TerminalNode* tlParser::ScanFunctionCallContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::IndexContext* tlParser::ScanFunctionCallContext::index() {
  return getRuleContext<tlParser::IndexContext>(0);
}

tlParser::ScanFunctionCallContext::ScanFunctionCallContext(Function_callContext *ctx) { copyFrom(ctx); }

void tlParser::ScanFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScanFunctionCall(this);
}
void tlParser::ScanFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScanFunctionCall(this);
}

antlrcpp::Any tlParser::ScanFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitScanFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::IdentifierFunctionCallContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

std::vector<tlParser::ExpressionContext *> tlParser::IdentifierFunctionCallContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::IdentifierFunctionCallContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tlParser::IdentifierFunctionCallContext::IdentifierFunctionCallContext(Function_callContext *ctx) { copyFrom(ctx); }

void tlParser::IdentifierFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierFunctionCall(this);
}
void tlParser::IdentifierFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierFunctionCall(this);
}

antlrcpp::Any tlParser::IdentifierFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitIdentifierFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintLnFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::PrintLnFunctionCallContext::PrintLn() {
  return getToken(tlParser::PrintLn, 0);
}

tlParser::ExpressionContext* tlParser::PrintLnFunctionCallContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::PrintLnFunctionCallContext::PrintLnFunctionCallContext(Function_callContext *ctx) { copyFrom(ctx); }

void tlParser::PrintLnFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintLnFunctionCall(this);
}
void tlParser::PrintLnFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintLnFunctionCall(this);
}

antlrcpp::Any tlParser::PrintLnFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitPrintLnFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::PrintFunctionCallContext::Print() {
  return getToken(tlParser::Print, 0);
}

tlParser::ExpressionContext* tlParser::PrintFunctionCallContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::PrintFunctionCallContext::PrintFunctionCallContext(Function_callContext *ctx) { copyFrom(ctx); }

void tlParser::PrintFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintFunctionCall(this);
}
void tlParser::PrintFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintFunctionCall(this);
}

antlrcpp::Any tlParser::PrintFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitPrintFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
tlParser::Function_callContext* tlParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 14, tlParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(117);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tlParser::Identifier: {
        _localctx = dynamic_cast<Function_callContext *>(_tracker.createInstance<tlParser::IdentifierFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(87);
        match(tlParser::Identifier);
        setState(88);
        match(tlParser::OParen);
        setState(97);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << tlParser::Excl)
          | (1ULL << tlParser::Subtract)
          | (1ULL << tlParser::Bool)
          | (1ULL << tlParser::Number)
          | (1ULL << tlParser::Identifier)
          | (1ULL << tlParser::String))) != 0)) {
          setState(89);
          expression(0);
          setState(94);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == tlParser::Comma) {
            setState(90);
            match(tlParser::Comma);
            setState(91);
            expression(0);
            setState(96);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(99);
        match(tlParser::CParen);
        break;
      }

      case tlParser::Print: {
        _localctx = dynamic_cast<Function_callContext *>(_tracker.createInstance<tlParser::PrintFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(100);
        match(tlParser::Print);
        setState(101);
        match(tlParser::OParen);
        setState(102);
        expression(0);
        setState(103);
        match(tlParser::CParen);
        break;
      }

      case tlParser::Scan: {
        _localctx = dynamic_cast<Function_callContext *>(_tracker.createInstance<tlParser::ScanFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(105);
        match(tlParser::Scan);
        setState(106);
        match(tlParser::OParen);
        setState(107);
        match(tlParser::Identifier);
        setState(109);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == tlParser::OBracket) {
          setState(108);
          index();
        }
        setState(111);
        match(tlParser::CParen);
        break;
      }

      case tlParser::PrintLn: {
        _localctx = dynamic_cast<Function_callContext *>(_tracker.createInstance<tlParser::PrintLnFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(112);
        match(tlParser::PrintLn);
        setState(113);
        match(tlParser::OParen);
        setState(114);
        expression(0);
        setState(115);
        match(tlParser::CParen);
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
  enterRule(_localctx, 16, tlParser::RuleIf_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(119);
    if_stat();
    setState(123);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(120);
        else_if_stat(); 
      }
      setState(125);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(127);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::Else) {
      setState(126);
      else_stat();
    }
    setState(129);
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
  enterRule(_localctx, 18, tlParser::RuleIf_stat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(tlParser::If);
    setState(132);
    expression(0);
    setState(133);
    match(tlParser::Do);
    setState(134);
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
  enterRule(_localctx, 20, tlParser::RuleElse_if_stat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
    match(tlParser::Else);
    setState(137);
    match(tlParser::If);
    setState(138);
    expression(0);
    setState(139);
    match(tlParser::Do);
    setState(140);
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
  enterRule(_localctx, 22, tlParser::RuleElse_stat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(tlParser::Else);
    setState(143);
    match(tlParser::Do);
    setState(144);
    block();
   
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
    setState(146);
    match(tlParser::While);
    setState(147);
    expression(0);
    setState(148);
    match(tlParser::Do);
    setState(149);
    block();
    setState(150);
    match(tlParser::End);
   
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

tlParser::Func_decl_typeContext* tlParser::Function_declContext::func_decl_type() {
  return getRuleContext<tlParser::Func_decl_typeContext>(0);
}

tlParser::BlockContext* tlParser::Function_declContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}

tree::TerminalNode* tlParser::Function_declContext::End() {
  return getToken(tlParser::End, 0);
}

tlParser::Func_decl_type_listContext* tlParser::Function_declContext::func_decl_type_list() {
  return getRuleContext<tlParser::Func_decl_type_listContext>(0);
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
  enterRule(_localctx, 26, tlParser::RuleFunction_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(tlParser::Def);
    setState(153);
    func_decl_type();
    setState(154);
    match(tlParser::OParen);
    setState(156);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::Type_identifier) {
      setState(155);
      func_decl_type_list();
    }
    setState(158);
    match(tlParser::CParen);
    setState(159);
    block();
    setState(160);
    match(tlParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_decl_type_listContext ------------------------------------------------------------------

tlParser::Func_decl_type_listContext::Func_decl_type_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tlParser::Func_decl_type_argContext *> tlParser::Func_decl_type_listContext::func_decl_type_arg() {
  return getRuleContexts<tlParser::Func_decl_type_argContext>();
}

tlParser::Func_decl_type_argContext* tlParser::Func_decl_type_listContext::func_decl_type_arg(size_t i) {
  return getRuleContext<tlParser::Func_decl_type_argContext>(i);
}


size_t tlParser::Func_decl_type_listContext::getRuleIndex() const {
  return tlParser::RuleFunc_decl_type_list;
}

void tlParser::Func_decl_type_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_decl_type_list(this);
}

void tlParser::Func_decl_type_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_decl_type_list(this);
}


antlrcpp::Any tlParser::Func_decl_type_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitFunc_decl_type_list(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Func_decl_type_listContext* tlParser::func_decl_type_list() {
  Func_decl_type_listContext *_localctx = _tracker.createInstance<Func_decl_type_listContext>(_ctx, getState());
  enterRule(_localctx, 28, tlParser::RuleFunc_decl_type_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    func_decl_type_arg();
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == tlParser::Comma) {
      setState(163);
      match(tlParser::Comma);
      setState(164);
      func_decl_type_arg();
      setState(169);
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

//----------------- Func_decl_type_argContext ------------------------------------------------------------------

tlParser::Func_decl_type_argContext::Func_decl_type_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tlParser::Func_decl_typeContext* tlParser::Func_decl_type_argContext::func_decl_type() {
  return getRuleContext<tlParser::Func_decl_typeContext>(0);
}

tlParser::Func_decl_array_typeContext* tlParser::Func_decl_type_argContext::func_decl_array_type() {
  return getRuleContext<tlParser::Func_decl_array_typeContext>(0);
}


size_t tlParser::Func_decl_type_argContext::getRuleIndex() const {
  return tlParser::RuleFunc_decl_type_arg;
}

void tlParser::Func_decl_type_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_decl_type_arg(this);
}

void tlParser::Func_decl_type_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_decl_type_arg(this);
}


antlrcpp::Any tlParser::Func_decl_type_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitFunc_decl_type_arg(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Func_decl_type_argContext* tlParser::func_decl_type_arg() {
  Func_decl_type_argContext *_localctx = _tracker.createInstance<Func_decl_type_argContext>(_ctx, getState());
  enterRule(_localctx, 30, tlParser::RuleFunc_decl_type_arg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(172);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(170);
      func_decl_type();
      break;
    }

    case 2: {
      setState(171);
      func_decl_array_type();
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

//----------------- Func_decl_typeContext ------------------------------------------------------------------

tlParser::Func_decl_typeContext::Func_decl_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::Func_decl_typeContext::Type_identifier() {
  return getToken(tlParser::Type_identifier, 0);
}

tree::TerminalNode* tlParser::Func_decl_typeContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}


size_t tlParser::Func_decl_typeContext::getRuleIndex() const {
  return tlParser::RuleFunc_decl_type;
}

void tlParser::Func_decl_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_decl_type(this);
}

void tlParser::Func_decl_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_decl_type(this);
}


antlrcpp::Any tlParser::Func_decl_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitFunc_decl_type(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Func_decl_typeContext* tlParser::func_decl_type() {
  Func_decl_typeContext *_localctx = _tracker.createInstance<Func_decl_typeContext>(_ctx, getState());
  enterRule(_localctx, 32, tlParser::RuleFunc_decl_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(174);
    match(tlParser::Type_identifier);
    setState(175);
    match(tlParser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_decl_array_typeContext ------------------------------------------------------------------

tlParser::Func_decl_array_typeContext::Func_decl_array_typeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::Func_decl_array_typeContext::Type_identifier() {
  return getToken(tlParser::Type_identifier, 0);
}

tree::TerminalNode* tlParser::Func_decl_array_typeContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tree::TerminalNode* tlParser::Func_decl_array_typeContext::AraryDeclSign() {
  return getToken(tlParser::AraryDeclSign, 0);
}


size_t tlParser::Func_decl_array_typeContext::getRuleIndex() const {
  return tlParser::RuleFunc_decl_array_type;
}

void tlParser::Func_decl_array_typeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_decl_array_type(this);
}

void tlParser::Func_decl_array_typeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_decl_array_type(this);
}


antlrcpp::Any tlParser::Func_decl_array_typeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitFunc_decl_array_type(this);
  else
    return visitor->visitChildren(this);
}

tlParser::Func_decl_array_typeContext* tlParser::func_decl_array_type() {
  Func_decl_array_typeContext *_localctx = _tracker.createInstance<Func_decl_array_typeContext>(_ctx, getState());
  enterRule(_localctx, 34, tlParser::RuleFunc_decl_array_type);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
    match(tlParser::Type_identifier);
    setState(178);
    match(tlParser::Identifier);
    setState(179);
    match(tlParser::AraryDeclSign);
   
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

tree::TerminalNode* tlParser::FunctionCallExpressionContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

std::vector<tlParser::ExpressionContext *> tlParser::FunctionCallExpressionContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::FunctionCallExpressionContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, tlParser::RuleExpression, precedence);

    size_t _la = 0;

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UnaryMinusExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(182);
      match(tlParser::Subtract);
      setState(183);
      expression(20);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(184);
      match(tlParser::Excl);
      setState(185);
      expression(19);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumberExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(186);
      match(tlParser::Number);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BoolExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(187);
      match(tlParser::Bool);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(188);
      match(tlParser::Identifier);
      setState(189);
      match(tlParser::OParen);
      setState(198);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << tlParser::Excl)
        | (1ULL << tlParser::Subtract)
        | (1ULL << tlParser::Bool)
        | (1ULL << tlParser::Number)
        | (1ULL << tlParser::Identifier)
        | (1ULL << tlParser::String))) != 0)) {
        setState(190);
        expression(0);
        setState(195);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == tlParser::Comma) {
          setState(191);
          match(tlParser::Comma);
          setState(192);
          expression(0);
          setState(197);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
      }
      setState(200);
      match(tlParser::CParen);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<IdentifierExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      match(tlParser::Identifier);
      setState(203);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
      case 1: {
        setState(202);
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
      setState(205);
      match(tlParser::String);
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(249);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(247);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiplyExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(208);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(209);
          match(tlParser::Multiply);
          setState(210);
          expression(19);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivideExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(211);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(212);
          match(tlParser::Divide);
          setState(213);
          expression(18);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModulusExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(214);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(215);
          match(tlParser::Modulus);
          setState(216);
          expression(17);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(217);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(218);
          match(tlParser::Add);
          setState(219);
          expression(16);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubtractExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(220);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(221);
          match(tlParser::Subtract);
          setState(222);
          expression(15);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<GtEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(223);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(224);
          match(tlParser::GTEquals);
          setState(225);
          expression(14);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LtEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(226);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(227);
          match(tlParser::LTEquals);
          setState(228);
          expression(13);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<GtExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(229);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(230);
          match(tlParser::GT);
          setState(231);
          expression(12);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<LtExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(232);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(233);
          match(tlParser::LT);
          setState(234);
          expression(11);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<EqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(235);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(236);
          match(tlParser::Equals);
          setState(237);
          expression(10);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<NotEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(238);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(239);
          match(tlParser::NEquals);
          setState(240);
          expression(9);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<AndExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(241);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(242);
          match(tlParser::And);
          setState(243);
          expression(8);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<OrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(244);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(245);
          match(tlParser::Or);
          setState(246);
          expression(7);
          break;
        }

        } 
      }
      setState(251);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
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
  enterRule(_localctx, 38, tlParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(tlParser::OBracket);
    setState(253);
    expression(0);
    setState(254);
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
    case 18: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

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
  "parse", "top_block", "block", "statement", "return_statement", "assignment", 
  "variable_def", "function_call", "if_statement", "if_stat", "else_if_stat", 
  "else_stat", "while_statement", "function_decl", "func_decl_type_list", 
  "func_decl_type_arg", "func_decl_type", "func_decl_array_type", "expression", 
  "index"
};

std::vector<std::string> tlParser::_literalNames = {
  "", "'def'", "'if'", "'else'", "'return'", "'while'", "'to'", "'do'", 
  "'end'", "'print'", "'scan'", "'println'", "'[]'", "'||'", "'&&'", "'=='", 
  "'!='", "'>='", "'<='", "'^'", "'!'", "'>'", "'<'", "'+'", "'-'", "'*'", 
  "'/'", "'%'", "'{'", "'}'", "'['", "']'", "'('", "')'", "';'", "'='", 
  "','", "'?'", "':'"
};

std::vector<std::string> tlParser::_symbolicNames = {
  "", "Def", "If", "Else", "Return", "While", "To", "Do", "End", "Print", 
  "Scan", "PrintLn", "AraryDeclSign", "Or", "And", "Equals", "NEquals", 
  "GTEquals", "LTEquals", "Pow", "Excl", "GT", "LT", "Add", "Subtract", 
  "Multiply", "Divide", "Modulus", "OBrace", "CBrace", "OBracket", "CBracket", 
  "OParen", "CParen", "SColon", "Assign", "Comma", "QMark", "Colon", "Type_identifier", 
  "Bool", "Number", "Identifier", "String", "Comment", "Space"
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
    0x3, 0x2f, 0x103, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 
    0x30, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x33, 0xb, 0x3, 0x3, 0x4, 0x7, 0x4, 
    0x36, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x39, 0xb, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x49, 0xa, 
    0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x5, 0x7, 0x50, 
    0xa, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0x58, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x7, 0x9, 0x5f, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x62, 0xb, 0x9, 0x5, 
    0x9, 0x64, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x70, 0xa, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x78, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7c, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0x7f, 0xb, 0xa, 0x3, 0xa, 0x5, 0xa, 0x82, 0xa, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x9f, 
    0xa, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x7, 0x10, 0xa8, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xab, 0xb, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xaf, 0xa, 0x11, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xc4, 0xa, 
    0x14, 0xc, 0x14, 0xe, 0x14, 0xc7, 0xb, 0x14, 0x5, 0x14, 0xc9, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xce, 0xa, 0x14, 0x3, 0x14, 
    0x5, 0x14, 0xd1, 0xa, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xfa, 0xa, 0x14, 0xc, 0x14, 0xe, 
    0x14, 0xfd, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 
    0x15, 0x2, 0x3, 0x26, 0x16, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2, 0x2, 0x2, 0x119, 0x2, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x31, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x37, 0x3, 0x2, 0x2, 0x2, 0x8, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x4a, 0x3, 0x2, 0x2, 0x2, 0xc, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x54, 0x3, 0x2, 0x2, 0x2, 0x10, 0x77, 0x3, 0x2, 0x2, 0x2, 0x12, 0x79, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x85, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8a, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x90, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xae, 0x3, 0x2, 0x2, 0x2, 0x22, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x26, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2b, 0x5, 0x4, 0x3, 0x2, 0x2b, 0x2c, 
    0x7, 0x2, 0x2, 0x3, 0x2c, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x5, 
    0x8, 0x5, 0x2, 0x2e, 0x30, 0x5, 0x1c, 0xf, 0x2, 0x2f, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0x2f, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x30, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x31, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x5, 0x3, 0x2, 0x2, 0x2, 0x33, 0x31, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x36, 0x5, 0x8, 0x5, 0x2, 0x35, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x7, 0x3, 0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x5, 0xe, 0x8, 0x2, 0x3b, 0x3c, 0x7, 0x24, 0x2, 
    0x2, 0x3c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x5, 0xc, 0x7, 0x2, 
    0x3e, 0x3f, 0x7, 0x24, 0x2, 0x2, 0x3f, 0x49, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x41, 0x5, 0x10, 0x9, 0x2, 0x41, 0x42, 0x7, 0x24, 0x2, 0x2, 0x42, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0x49, 0x5, 0x12, 0xa, 0x2, 0x44, 0x49, 0x5, 
    0x1a, 0xe, 0x2, 0x45, 0x46, 0x5, 0xa, 0x6, 0x2, 0x46, 0x47, 0x7, 0x24, 
    0x2, 0x2, 0x47, 0x49, 0x3, 0x2, 0x2, 0x2, 0x48, 0x3a, 0x3, 0x2, 0x2, 
    0x2, 0x48, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x48, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x48, 0x43, 0x3, 0x2, 0x2, 0x2, 0x48, 0x44, 0x3, 0x2, 0x2, 0x2, 0x48, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x49, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4b, 
    0x7, 0x6, 0x2, 0x2, 0x4b, 0x4c, 0x5, 0x26, 0x14, 0x2, 0x4c, 0xb, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4f, 0x7, 0x2c, 0x2, 0x2, 0x4e, 0x50, 0x5, 0x28, 
    0x15, 0x2, 0x4f, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0x25, 0x2, 0x2, 
    0x52, 0x53, 0x5, 0x26, 0x14, 0x2, 0x53, 0xd, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x55, 0x7, 0x29, 0x2, 0x2, 0x55, 0x57, 0x7, 0x2c, 0x2, 0x2, 0x56, 0x58, 
    0x5, 0x28, 0x15, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x3, 
    0x2, 0x2, 0x2, 0x58, 0xf, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x2c, 
    0x2, 0x2, 0x5a, 0x63, 0x7, 0x22, 0x2, 0x2, 0x5b, 0x60, 0x5, 0x26, 0x14, 
    0x2, 0x5c, 0x5d, 0x7, 0x26, 0x2, 0x2, 0x5d, 0x5f, 0x5, 0x26, 0x14, 0x2, 
    0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x62, 0x3, 0x2, 0x2, 0x2, 0x60, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x62, 0x60, 0x3, 0x2, 0x2, 0x2, 0x63, 0x5b, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x65, 0x78, 0x7, 0x23, 0x2, 0x2, 0x66, 0x67, 0x7, 0xb, 0x2, 
    0x2, 0x67, 0x68, 0x7, 0x22, 0x2, 0x2, 0x68, 0x69, 0x5, 0x26, 0x14, 0x2, 
    0x69, 0x6a, 0x7, 0x23, 0x2, 0x2, 0x6a, 0x78, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6c, 0x7, 0xc, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0x22, 0x2, 0x2, 0x6d, 0x6f, 
    0x7, 0x2c, 0x2, 0x2, 0x6e, 0x70, 0x5, 0x28, 0x15, 0x2, 0x6f, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x78, 0x7, 0x23, 0x2, 0x2, 0x72, 0x73, 0x7, 0xd, 0x2, 
    0x2, 0x73, 0x74, 0x7, 0x22, 0x2, 0x2, 0x74, 0x75, 0x5, 0x26, 0x14, 0x2, 
    0x75, 0x76, 0x7, 0x23, 0x2, 0x2, 0x76, 0x78, 0x3, 0x2, 0x2, 0x2, 0x77, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x77, 0x66, 0x3, 0x2, 0x2, 0x2, 0x77, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x77, 0x72, 0x3, 0x2, 0x2, 0x2, 0x78, 0x11, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x7d, 0x5, 0x14, 0xb, 0x2, 0x7a, 0x7c, 0x5, 0x16, 
    0xc, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7f, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 
    0x7e, 0x81, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x80, 
    0x82, 0x5, 0x18, 0xd, 0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 
    0x3, 0x2, 0x2, 0x2, 0x82, 0x83, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 
    0xa, 0x2, 0x2, 0x84, 0x13, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x4, 
    0x2, 0x2, 0x86, 0x87, 0x5, 0x26, 0x14, 0x2, 0x87, 0x88, 0x7, 0x9, 0x2, 
    0x2, 0x88, 0x89, 0x5, 0x6, 0x4, 0x2, 0x89, 0x15, 0x3, 0x2, 0x2, 0x2, 
    0x8a, 0x8b, 0x7, 0x5, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x4, 0x2, 0x2, 0x8c, 
    0x8d, 0x5, 0x26, 0x14, 0x2, 0x8d, 0x8e, 0x7, 0x9, 0x2, 0x2, 0x8e, 0x8f, 
    0x5, 0x6, 0x4, 0x2, 0x8f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 
    0x5, 0x2, 0x2, 0x91, 0x92, 0x7, 0x9, 0x2, 0x2, 0x92, 0x93, 0x5, 0x6, 
    0x4, 0x2, 0x93, 0x19, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x7, 0x7, 0x2, 
    0x2, 0x95, 0x96, 0x5, 0x26, 0x14, 0x2, 0x96, 0x97, 0x7, 0x9, 0x2, 0x2, 
    0x97, 0x98, 0x5, 0x6, 0x4, 0x2, 0x98, 0x99, 0x7, 0xa, 0x2, 0x2, 0x99, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x3, 0x2, 0x2, 0x9b, 0x9c, 
    0x5, 0x22, 0x12, 0x2, 0x9c, 0x9e, 0x7, 0x22, 0x2, 0x2, 0x9d, 0x9f, 0x5, 
    0x1e, 0x10, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0x9f, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 0x23, 0x2, 
    0x2, 0xa1, 0xa2, 0x5, 0x6, 0x4, 0x2, 0xa2, 0xa3, 0x7, 0xa, 0x2, 0x2, 
    0xa3, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa9, 0x5, 0x20, 0x11, 0x2, 0xa5, 
    0xa6, 0x7, 0x26, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0x20, 0x11, 0x2, 0xa7, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 0x5, 0x22, 0x12, 
    0x2, 0xad, 0xaf, 0x5, 0x24, 0x13, 0x2, 0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb0, 
    0xb1, 0x7, 0x29, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x2c, 0x2, 0x2, 0xb2, 0x23, 
    0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x7, 0x29, 0x2, 0x2, 0xb4, 0xb5, 0x7, 
    0x2c, 0x2, 0x2, 0xb5, 0xb6, 0x7, 0xe, 0x2, 0x2, 0xb6, 0x25, 0x3, 0x2, 
    0x2, 0x2, 0xb7, 0xb8, 0x8, 0x14, 0x1, 0x2, 0xb8, 0xb9, 0x7, 0x1a, 0x2, 
    0x2, 0xb9, 0xd1, 0x5, 0x26, 0x14, 0x16, 0xba, 0xbb, 0x7, 0x16, 0x2, 
    0x2, 0xbb, 0xd1, 0x5, 0x26, 0x14, 0x15, 0xbc, 0xd1, 0x7, 0x2b, 0x2, 
    0x2, 0xbd, 0xd1, 0x7, 0x2a, 0x2, 0x2, 0xbe, 0xbf, 0x7, 0x2c, 0x2, 0x2, 
    0xbf, 0xc8, 0x7, 0x22, 0x2, 0x2, 0xc0, 0xc5, 0x5, 0x26, 0x14, 0x2, 0xc1, 
    0xc2, 0x7, 0x26, 0x2, 0x2, 0xc2, 0xc4, 0x5, 0x26, 0x14, 0x2, 0xc3, 0xc1, 
    0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc3, 0x3, 
    0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc0, 0x3, 0x2, 0x2, 
    0x2, 0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xca, 0x3, 0x2, 0x2, 0x2, 
    0xca, 0xd1, 0x7, 0x23, 0x2, 0x2, 0xcb, 0xcd, 0x7, 0x2c, 0x2, 0x2, 0xcc, 
    0xce, 0x5, 0x28, 0x15, 0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x7, 
    0x2d, 0x2, 0x2, 0xd0, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xba, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xbd, 0x3, 0x2, 0x2, 
    0x2, 0xd0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xcb, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xd2, 
    0xd3, 0xc, 0x14, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x1b, 0x2, 0x2, 0xd4, 0xfa, 
    0x5, 0x26, 0x14, 0x15, 0xd5, 0xd6, 0xc, 0x13, 0x2, 0x2, 0xd6, 0xd7, 
    0x7, 0x1c, 0x2, 0x2, 0xd7, 0xfa, 0x5, 0x26, 0x14, 0x14, 0xd8, 0xd9, 
    0xc, 0x12, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x1d, 0x2, 0x2, 0xda, 0xfa, 0x5, 
    0x26, 0x14, 0x13, 0xdb, 0xdc, 0xc, 0x11, 0x2, 0x2, 0xdc, 0xdd, 0x7, 
    0x19, 0x2, 0x2, 0xdd, 0xfa, 0x5, 0x26, 0x14, 0x12, 0xde, 0xdf, 0xc, 
    0x10, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x1a, 0x2, 0x2, 0xe0, 0xfa, 0x5, 0x26, 
    0x14, 0x11, 0xe1, 0xe2, 0xc, 0xf, 0x2, 0x2, 0xe2, 0xe3, 0x7, 0x13, 0x2, 
    0x2, 0xe3, 0xfa, 0x5, 0x26, 0x14, 0x10, 0xe4, 0xe5, 0xc, 0xe, 0x2, 0x2, 
    0xe5, 0xe6, 0x7, 0x14, 0x2, 0x2, 0xe6, 0xfa, 0x5, 0x26, 0x14, 0xf, 0xe7, 
    0xe8, 0xc, 0xd, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x17, 0x2, 0x2, 0xe9, 0xfa, 
    0x5, 0x26, 0x14, 0xe, 0xea, 0xeb, 0xc, 0xc, 0x2, 0x2, 0xeb, 0xec, 0x7, 
    0x18, 0x2, 0x2, 0xec, 0xfa, 0x5, 0x26, 0x14, 0xd, 0xed, 0xee, 0xc, 0xb, 
    0x2, 0x2, 0xee, 0xef, 0x7, 0x11, 0x2, 0x2, 0xef, 0xfa, 0x5, 0x26, 0x14, 
    0xc, 0xf0, 0xf1, 0xc, 0xa, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x12, 0x2, 0x2, 
    0xf2, 0xfa, 0x5, 0x26, 0x14, 0xb, 0xf3, 0xf4, 0xc, 0x9, 0x2, 0x2, 0xf4, 
    0xf5, 0x7, 0x10, 0x2, 0x2, 0xf5, 0xfa, 0x5, 0x26, 0x14, 0xa, 0xf6, 0xf7, 
    0xc, 0x8, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0xf, 0x2, 0x2, 0xf8, 0xfa, 0x5, 
    0x26, 0x14, 0x9, 0xf9, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xd5, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xdb, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xde, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0xea, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xed, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf0, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf6, 0x3, 
    0x2, 0x2, 0x2, 0xfa, 0xfd, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xf9, 0x3, 0x2, 
    0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 0x2, 0x2, 0xfc, 0x27, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x20, 0x2, 0x2, 
    0xff, 0x100, 0x5, 0x26, 0x14, 0x2, 0x100, 0x101, 0x7, 0x21, 0x2, 0x2, 
    0x101, 0x29, 0x3, 0x2, 0x2, 0x2, 0x17, 0x2f, 0x31, 0x37, 0x48, 0x4f, 
    0x57, 0x60, 0x63, 0x6f, 0x77, 0x7d, 0x81, 0x9e, 0xa9, 0xae, 0xc5, 0xc8, 
    0xcd, 0xd0, 0xf9, 0xfb, 
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
