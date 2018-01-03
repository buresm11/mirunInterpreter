
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

tlParser::TopBlockContext* tlParser::ParseContext::topBlock() {
  return getRuleContext<tlParser::TopBlockContext>(0);
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
    setState(38);
    topBlock();
    setState(39);
    match(tlParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TopBlockContext ------------------------------------------------------------------

tlParser::TopBlockContext::TopBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tlParser::StatementContext *> tlParser::TopBlockContext::statement() {
  return getRuleContexts<tlParser::StatementContext>();
}

tlParser::StatementContext* tlParser::TopBlockContext::statement(size_t i) {
  return getRuleContext<tlParser::StatementContext>(i);
}

std::vector<tlParser::FunctionDeclContext *> tlParser::TopBlockContext::functionDecl() {
  return getRuleContexts<tlParser::FunctionDeclContext>();
}

tlParser::FunctionDeclContext* tlParser::TopBlockContext::functionDecl(size_t i) {
  return getRuleContext<tlParser::FunctionDeclContext>(i);
}


size_t tlParser::TopBlockContext::getRuleIndex() const {
  return tlParser::RuleTopBlock;
}

void tlParser::TopBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTopBlock(this);
}

void tlParser::TopBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTopBlock(this);
}


antlrcpp::Any tlParser::TopBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitTopBlock(this);
  else
    return visitor->visitChildren(this);
}

tlParser::TopBlockContext* tlParser::topBlock() {
  TopBlockContext *_localctx = _tracker.createInstance<TopBlockContext>(_ctx, getState());
  enterRule(_localctx, 2, tlParser::RuleTopBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tlParser::Println)
      | (1ULL << tlParser::Print)
      | (1ULL << tlParser::Assert)
      | (1ULL << tlParser::Size)
      | (1ULL << tlParser::Def)
      | (1ULL << tlParser::If)
      | (1ULL << tlParser::For)
      | (1ULL << tlParser::While)
      | (1ULL << tlParser::TypeIdentifier)
      | (1ULL << tlParser::Identifier))) != 0)) {
      setState(43);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case tlParser::Println:
        case tlParser::Print:
        case tlParser::Assert:
        case tlParser::Size:
        case tlParser::If:
        case tlParser::For:
        case tlParser::While:
        case tlParser::TypeIdentifier:
        case tlParser::Identifier: {
          setState(41);
          statement();
          break;
        }

        case tlParser::Def: {
          setState(42);
          functionDecl();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(47);
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
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tlParser::Println)
      | (1ULL << tlParser::Print)
      | (1ULL << tlParser::Assert)
      | (1ULL << tlParser::Size)
      | (1ULL << tlParser::If)
      | (1ULL << tlParser::For)
      | (1ULL << tlParser::While)
      | (1ULL << tlParser::TypeIdentifier)
      | (1ULL << tlParser::Identifier))) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(58);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::Return) {
      setState(54);
      match(tlParser::Return);
      setState(55);
      expression(0);
      setState(56);
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

tlParser::VariableDefContext* tlParser::StatementContext::variableDef() {
  return getRuleContext<tlParser::VariableDefContext>(0);
}

tlParser::AssignmentContext* tlParser::StatementContext::assignment() {
  return getRuleContext<tlParser::AssignmentContext>(0);
}

tlParser::FunctionCallContext* tlParser::StatementContext::functionCall() {
  return getRuleContext<tlParser::FunctionCallContext>(0);
}

tlParser::IfStatementContext* tlParser::StatementContext::ifStatement() {
  return getRuleContext<tlParser::IfStatementContext>(0);
}

tlParser::ForStatementContext* tlParser::StatementContext::forStatement() {
  return getRuleContext<tlParser::ForStatementContext>(0);
}

tlParser::WhileStatementContext* tlParser::StatementContext::whileStatement() {
  return getRuleContext<tlParser::WhileStatementContext>(0);
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
    setState(72);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(60);
      variableDef();
      setState(61);
      match(tlParser::SColon);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(63);
      assignment();
      setState(64);
      match(tlParser::SColon);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(66);
      functionCall();
      setState(67);
      match(tlParser::SColon);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(69);
      ifStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(70);
      forStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(71);
      whileStatement();
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
    setState(74);
    match(tlParser::Identifier);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::OBracket) {
      setState(75);
      index();
    }
    setState(78);
    match(tlParser::Assign);
    setState(79);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDefContext ------------------------------------------------------------------

tlParser::VariableDefContext::VariableDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::VariableDefContext::TypeIdentifier() {
  return getToken(tlParser::TypeIdentifier, 0);
}

tree::TerminalNode* tlParser::VariableDefContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::IndexContext* tlParser::VariableDefContext::index() {
  return getRuleContext<tlParser::IndexContext>(0);
}


size_t tlParser::VariableDefContext::getRuleIndex() const {
  return tlParser::RuleVariableDef;
}

void tlParser::VariableDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDef(this);
}

void tlParser::VariableDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDef(this);
}


antlrcpp::Any tlParser::VariableDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitVariableDef(this);
  else
    return visitor->visitChildren(this);
}

tlParser::VariableDefContext* tlParser::variableDef() {
  VariableDefContext *_localctx = _tracker.createInstance<VariableDefContext>(_ctx, getState());
  enterRule(_localctx, 10, tlParser::RuleVariableDef);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(tlParser::TypeIdentifier);
    setState(82);
    match(tlParser::Identifier);
    setState(84);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::OBracket) {
      setState(83);
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

//----------------- FunctionCallContext ------------------------------------------------------------------

tlParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t tlParser::FunctionCallContext::getRuleIndex() const {
  return tlParser::RuleFunctionCall;
}

void tlParser::FunctionCallContext::copyFrom(FunctionCallContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AssertFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::AssertFunctionCallContext::Assert() {
  return getToken(tlParser::Assert, 0);
}

tlParser::ExpressionContext* tlParser::AssertFunctionCallContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::AssertFunctionCallContext::AssertFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void tlParser::AssertFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssertFunctionCall(this);
}
void tlParser::AssertFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssertFunctionCall(this);
}

antlrcpp::Any tlParser::AssertFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitAssertFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SizeFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::SizeFunctionCallContext::Size() {
  return getToken(tlParser::Size, 0);
}

tlParser::ExpressionContext* tlParser::SizeFunctionCallContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::SizeFunctionCallContext::SizeFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void tlParser::SizeFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSizeFunctionCall(this);
}
void tlParser::SizeFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSizeFunctionCall(this);
}

antlrcpp::Any tlParser::SizeFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitSizeFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintlnFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::PrintlnFunctionCallContext::Println() {
  return getToken(tlParser::Println, 0);
}

tlParser::ExpressionContext* tlParser::PrintlnFunctionCallContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::PrintlnFunctionCallContext::PrintlnFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

void tlParser::PrintlnFunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrintlnFunctionCall(this);
}
void tlParser::PrintlnFunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrintlnFunctionCall(this);
}

antlrcpp::Any tlParser::PrintlnFunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitPrintlnFunctionCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::IdentifierFunctionCallContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::ExprListContext* tlParser::IdentifierFunctionCallContext::exprList() {
  return getRuleContext<tlParser::ExprListContext>(0);
}

tlParser::IdentifierFunctionCallContext::IdentifierFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

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
//----------------- PrintFunctionCallContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::PrintFunctionCallContext::Print() {
  return getToken(tlParser::Print, 0);
}

tlParser::ExpressionContext* tlParser::PrintFunctionCallContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tlParser::PrintFunctionCallContext::PrintFunctionCallContext(FunctionCallContext *ctx) { copyFrom(ctx); }

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
tlParser::FunctionCallContext* tlParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 12, tlParser::RuleFunctionCall);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(113);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case tlParser::Identifier: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<tlParser::IdentifierFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(86);
        match(tlParser::Identifier);
        setState(87);
        match(tlParser::OParen);
        setState(89);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << tlParser::Println)
          | (1ULL << tlParser::Print)
          | (1ULL << tlParser::Input)
          | (1ULL << tlParser::Assert)
          | (1ULL << tlParser::Size)
          | (1ULL << tlParser::Excl)
          | (1ULL << tlParser::Subtract)
          | (1ULL << tlParser::Bool)
          | (1ULL << tlParser::Number)
          | (1ULL << tlParser::Identifier)
          | (1ULL << tlParser::String))) != 0)) {
          setState(88);
          exprList();
        }
        setState(91);
        match(tlParser::CParen);
        break;
      }

      case tlParser::Println: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<tlParser::PrintlnFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(92);
        match(tlParser::Println);
        setState(93);
        match(tlParser::OParen);
        setState(95);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << tlParser::Println)
          | (1ULL << tlParser::Print)
          | (1ULL << tlParser::Input)
          | (1ULL << tlParser::Assert)
          | (1ULL << tlParser::Size)
          | (1ULL << tlParser::Excl)
          | (1ULL << tlParser::Subtract)
          | (1ULL << tlParser::Bool)
          | (1ULL << tlParser::Number)
          | (1ULL << tlParser::Identifier)
          | (1ULL << tlParser::String))) != 0)) {
          setState(94);
          expression(0);
        }
        setState(97);
        match(tlParser::CParen);
        break;
      }

      case tlParser::Print: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<tlParser::PrintFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(98);
        match(tlParser::Print);
        setState(99);
        match(tlParser::OParen);
        setState(100);
        expression(0);
        setState(101);
        match(tlParser::CParen);
        break;
      }

      case tlParser::Assert: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<tlParser::AssertFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(103);
        match(tlParser::Assert);
        setState(104);
        match(tlParser::OParen);
        setState(105);
        expression(0);
        setState(106);
        match(tlParser::CParen);
        break;
      }

      case tlParser::Size: {
        _localctx = dynamic_cast<FunctionCallContext *>(_tracker.createInstance<tlParser::SizeFunctionCallContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(108);
        match(tlParser::Size);
        setState(109);
        match(tlParser::OParen);
        setState(110);
        expression(0);
        setState(111);
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

//----------------- IfStatementContext ------------------------------------------------------------------

tlParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tlParser::IfStatContext* tlParser::IfStatementContext::ifStat() {
  return getRuleContext<tlParser::IfStatContext>(0);
}

tree::TerminalNode* tlParser::IfStatementContext::End() {
  return getToken(tlParser::End, 0);
}

std::vector<tlParser::ElseIfStatContext *> tlParser::IfStatementContext::elseIfStat() {
  return getRuleContexts<tlParser::ElseIfStatContext>();
}

tlParser::ElseIfStatContext* tlParser::IfStatementContext::elseIfStat(size_t i) {
  return getRuleContext<tlParser::ElseIfStatContext>(i);
}

tlParser::ElseStatContext* tlParser::IfStatementContext::elseStat() {
  return getRuleContext<tlParser::ElseStatContext>(0);
}


size_t tlParser::IfStatementContext::getRuleIndex() const {
  return tlParser::RuleIfStatement;
}

void tlParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void tlParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


antlrcpp::Any tlParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

tlParser::IfStatementContext* tlParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, tlParser::RuleIfStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(115);
    ifStat();
    setState(119);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(116);
        elseIfStat(); 
      }
      setState(121);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(123);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::Else) {
      setState(122);
      elseStat();
    }
    setState(125);
    match(tlParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatContext ------------------------------------------------------------------

tlParser::IfStatContext::IfStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::IfStatContext::If() {
  return getToken(tlParser::If, 0);
}

tlParser::ExpressionContext* tlParser::IfStatContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tree::TerminalNode* tlParser::IfStatContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::IfStatContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}


size_t tlParser::IfStatContext::getRuleIndex() const {
  return tlParser::RuleIfStat;
}

void tlParser::IfStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStat(this);
}

void tlParser::IfStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStat(this);
}


antlrcpp::Any tlParser::IfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitIfStat(this);
  else
    return visitor->visitChildren(this);
}

tlParser::IfStatContext* tlParser::ifStat() {
  IfStatContext *_localctx = _tracker.createInstance<IfStatContext>(_ctx, getState());
  enterRule(_localctx, 16, tlParser::RuleIfStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(tlParser::If);
    setState(128);
    expression(0);
    setState(129);
    match(tlParser::Do);
    setState(130);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseIfStatContext ------------------------------------------------------------------

tlParser::ElseIfStatContext::ElseIfStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::ElseIfStatContext::Else() {
  return getToken(tlParser::Else, 0);
}

tree::TerminalNode* tlParser::ElseIfStatContext::If() {
  return getToken(tlParser::If, 0);
}

tlParser::ExpressionContext* tlParser::ElseIfStatContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tree::TerminalNode* tlParser::ElseIfStatContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::ElseIfStatContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}


size_t tlParser::ElseIfStatContext::getRuleIndex() const {
  return tlParser::RuleElseIfStat;
}

void tlParser::ElseIfStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseIfStat(this);
}

void tlParser::ElseIfStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseIfStat(this);
}


antlrcpp::Any tlParser::ElseIfStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitElseIfStat(this);
  else
    return visitor->visitChildren(this);
}

tlParser::ElseIfStatContext* tlParser::elseIfStat() {
  ElseIfStatContext *_localctx = _tracker.createInstance<ElseIfStatContext>(_ctx, getState());
  enterRule(_localctx, 18, tlParser::RuleElseIfStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(tlParser::Else);
    setState(133);
    match(tlParser::If);
    setState(134);
    expression(0);
    setState(135);
    match(tlParser::Do);
    setState(136);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseStatContext ------------------------------------------------------------------

tlParser::ElseStatContext::ElseStatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::ElseStatContext::Else() {
  return getToken(tlParser::Else, 0);
}

tree::TerminalNode* tlParser::ElseStatContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::ElseStatContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}


size_t tlParser::ElseStatContext::getRuleIndex() const {
  return tlParser::RuleElseStat;
}

void tlParser::ElseStatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseStat(this);
}

void tlParser::ElseStatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseStat(this);
}


antlrcpp::Any tlParser::ElseStatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitElseStat(this);
  else
    return visitor->visitChildren(this);
}

tlParser::ElseStatContext* tlParser::elseStat() {
  ElseStatContext *_localctx = _tracker.createInstance<ElseStatContext>(_ctx, getState());
  enterRule(_localctx, 20, tlParser::RuleElseStat);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    match(tlParser::Else);
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

//----------------- FunctionDeclContext ------------------------------------------------------------------

tlParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::FunctionDeclContext::Def() {
  return getToken(tlParser::Def, 0);
}

tree::TerminalNode* tlParser::FunctionDeclContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

tlParser::BlockContext* tlParser::FunctionDeclContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}

tree::TerminalNode* tlParser::FunctionDeclContext::End() {
  return getToken(tlParser::End, 0);
}

tlParser::IdListContext* tlParser::FunctionDeclContext::idList() {
  return getRuleContext<tlParser::IdListContext>(0);
}


size_t tlParser::FunctionDeclContext::getRuleIndex() const {
  return tlParser::RuleFunctionDecl;
}

void tlParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void tlParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}


antlrcpp::Any tlParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

tlParser::FunctionDeclContext* tlParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 22, tlParser::RuleFunctionDecl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    match(tlParser::Def);
    setState(143);
    match(tlParser::Identifier);
    setState(144);
    match(tlParser::OParen);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == tlParser::Identifier) {
      setState(145);
      idList();
    }
    setState(148);
    match(tlParser::CParen);
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

//----------------- ForStatementContext ------------------------------------------------------------------

tlParser::ForStatementContext::ForStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::ForStatementContext::For() {
  return getToken(tlParser::For, 0);
}

tree::TerminalNode* tlParser::ForStatementContext::Identifier() {
  return getToken(tlParser::Identifier, 0);
}

std::vector<tlParser::ExpressionContext *> tlParser::ForStatementContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::ForStatementContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}

tree::TerminalNode* tlParser::ForStatementContext::To() {
  return getToken(tlParser::To, 0);
}

tree::TerminalNode* tlParser::ForStatementContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::ForStatementContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}

tree::TerminalNode* tlParser::ForStatementContext::End() {
  return getToken(tlParser::End, 0);
}


size_t tlParser::ForStatementContext::getRuleIndex() const {
  return tlParser::RuleForStatement;
}

void tlParser::ForStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForStatement(this);
}

void tlParser::ForStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForStatement(this);
}


antlrcpp::Any tlParser::ForStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitForStatement(this);
  else
    return visitor->visitChildren(this);
}

tlParser::ForStatementContext* tlParser::forStatement() {
  ForStatementContext *_localctx = _tracker.createInstance<ForStatementContext>(_ctx, getState());
  enterRule(_localctx, 24, tlParser::RuleForStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(tlParser::For);
    setState(153);
    match(tlParser::Identifier);
    setState(154);
    match(tlParser::Assign);
    setState(155);
    expression(0);
    setState(156);
    match(tlParser::To);
    setState(157);
    expression(0);
    setState(158);
    match(tlParser::Do);
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

//----------------- WhileStatementContext ------------------------------------------------------------------

tlParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* tlParser::WhileStatementContext::While() {
  return getToken(tlParser::While, 0);
}

tlParser::ExpressionContext* tlParser::WhileStatementContext::expression() {
  return getRuleContext<tlParser::ExpressionContext>(0);
}

tree::TerminalNode* tlParser::WhileStatementContext::Do() {
  return getToken(tlParser::Do, 0);
}

tlParser::BlockContext* tlParser::WhileStatementContext::block() {
  return getRuleContext<tlParser::BlockContext>(0);
}

tree::TerminalNode* tlParser::WhileStatementContext::End() {
  return getToken(tlParser::End, 0);
}


size_t tlParser::WhileStatementContext::getRuleIndex() const {
  return tlParser::RuleWhileStatement;
}

void tlParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void tlParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


antlrcpp::Any tlParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

tlParser::WhileStatementContext* tlParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 26, tlParser::RuleWhileStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(tlParser::While);
    setState(163);
    expression(0);
    setState(164);
    match(tlParser::Do);
    setState(165);
    block();
    setState(166);
    match(tlParser::End);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdListContext ------------------------------------------------------------------

tlParser::IdListContext::IdListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> tlParser::IdListContext::Identifier() {
  return getTokens(tlParser::Identifier);
}

tree::TerminalNode* tlParser::IdListContext::Identifier(size_t i) {
  return getToken(tlParser::Identifier, i);
}


size_t tlParser::IdListContext::getRuleIndex() const {
  return tlParser::RuleIdList;
}

void tlParser::IdListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdList(this);
}

void tlParser::IdListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdList(this);
}


antlrcpp::Any tlParser::IdListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitIdList(this);
  else
    return visitor->visitChildren(this);
}

tlParser::IdListContext* tlParser::idList() {
  IdListContext *_localctx = _tracker.createInstance<IdListContext>(_ctx, getState());
  enterRule(_localctx, 28, tlParser::RuleIdList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(tlParser::Identifier);
    setState(173);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == tlParser::Comma) {
      setState(169);
      match(tlParser::Comma);
      setState(170);
      match(tlParser::Identifier);
      setState(175);
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

//----------------- ExprListContext ------------------------------------------------------------------

tlParser::ExprListContext::ExprListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tlParser::ExpressionContext *> tlParser::ExprListContext::expression() {
  return getRuleContexts<tlParser::ExpressionContext>();
}

tlParser::ExpressionContext* tlParser::ExprListContext::expression(size_t i) {
  return getRuleContext<tlParser::ExpressionContext>(i);
}


size_t tlParser::ExprListContext::getRuleIndex() const {
  return tlParser::RuleExprList;
}

void tlParser::ExprListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExprList(this);
}

void tlParser::ExprListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExprList(this);
}


antlrcpp::Any tlParser::ExprListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitExprList(this);
  else
    return visitor->visitChildren(this);
}

tlParser::ExprListContext* tlParser::exprList() {
  ExprListContext *_localctx = _tracker.createInstance<ExprListContext>(_ctx, getState());
  enterRule(_localctx, 30, tlParser::RuleExprList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(176);
    expression(0);
    setState(181);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == tlParser::Comma) {
      setState(177);
      match(tlParser::Comma);
      setState(178);
      expression(0);
      setState(183);
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

tlParser::FunctionCallContext* tlParser::FunctionCallExpressionContext::functionCall() {
  return getRuleContext<tlParser::FunctionCallContext>(0);
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
//----------------- InputExpressionContext ------------------------------------------------------------------

tree::TerminalNode* tlParser::InputExpressionContext::Input() {
  return getToken(tlParser::Input, 0);
}

tree::TerminalNode* tlParser::InputExpressionContext::String() {
  return getToken(tlParser::String, 0);
}

tlParser::InputExpressionContext::InputExpressionContext(ExpressionContext *ctx) { copyFrom(ctx); }

void tlParser::InputExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInputExpression(this);
}
void tlParser::InputExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInputExpression(this);
}

antlrcpp::Any tlParser::InputExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitInputExpression(this);
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
  size_t startState = 32;
  enterRecursionRule(_localctx, 32, tlParser::RuleExpression, precedence);

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

      setState(185);
      match(tlParser::Subtract);
      setState(186);
      expression(21);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NotExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(187);
      match(tlParser::Excl);
      setState(188);
      expression(20);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NumberExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(189);
      match(tlParser::Number);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BoolExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(190);
      match(tlParser::Bool);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<FunctionCallExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(191);
      functionCall();
      setState(193);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(192);
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
      setState(195);
      match(tlParser::Identifier);
      setState(197);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
      case 1: {
        setState(196);
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
      setState(199);
      match(tlParser::String);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<InputExpressionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(200);
      match(tlParser::Input);
      setState(201);
      match(tlParser::OParen);
      setState(203);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == tlParser::String) {
        setState(202);
        match(tlParser::String);
      }
      setState(205);
      match(tlParser::CParen);
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

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(209);
          match(tlParser::Multiply);
          setState(210);
          expression(20);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivideExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(211);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(212);
          match(tlParser::Divide);
          setState(213);
          expression(19);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ModulusExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(214);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(215);
          match(tlParser::Modulus);
          setState(216);
          expression(18);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(217);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(218);
          match(tlParser::Add);
          setState(219);
          expression(17);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<SubtractExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(220);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(221);
          match(tlParser::Subtract);
          setState(222);
          expression(16);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<GtEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(223);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(224);
          match(tlParser::GTEquals);
          setState(225);
          expression(15);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LtEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(226);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(227);
          match(tlParser::LTEquals);
          setState(228);
          expression(14);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<GtExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(229);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(230);
          match(tlParser::GT);
          setState(231);
          expression(13);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<LtExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(232);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(233);
          match(tlParser::LT);
          setState(234);
          expression(12);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<EqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(235);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(236);
          match(tlParser::Equals);
          setState(237);
          expression(11);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<NotEqExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(238);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(239);
          match(tlParser::NEquals);
          setState(240);
          expression(10);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<AndExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(241);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(242);
          match(tlParser::And);
          setState(243);
          expression(9);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<OrExpressionContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpression);
          setState(244);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(245);
          match(tlParser::Or);
          setState(246);
          expression(8);
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

//----------------- ListContext ------------------------------------------------------------------

tlParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tlParser::ExprListContext* tlParser::ListContext::exprList() {
  return getRuleContext<tlParser::ExprListContext>(0);
}


size_t tlParser::ListContext::getRuleIndex() const {
  return tlParser::RuleList;
}

void tlParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void tlParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<tlListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}


antlrcpp::Any tlParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<tlVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}

tlParser::ListContext* tlParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 34, tlParser::RuleList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    match(tlParser::OBracket);
    setState(254);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << tlParser::Println)
      | (1ULL << tlParser::Print)
      | (1ULL << tlParser::Input)
      | (1ULL << tlParser::Assert)
      | (1ULL << tlParser::Size)
      | (1ULL << tlParser::Excl)
      | (1ULL << tlParser::Subtract)
      | (1ULL << tlParser::Bool)
      | (1ULL << tlParser::Number)
      | (1ULL << tlParser::Identifier)
      | (1ULL << tlParser::String))) != 0)) {
      setState(253);
      exprList();
    }
    setState(256);
    match(tlParser::CBracket);
   
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
  enterRule(_localctx, 36, tlParser::RuleIndex);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    match(tlParser::OBracket);
    setState(259);
    expression(0);
    setState(260);
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
    case 16: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool tlParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 19);
    case 1: return precpred(_ctx, 18);
    case 2: return precpred(_ctx, 17);
    case 3: return precpred(_ctx, 16);
    case 4: return precpred(_ctx, 15);
    case 5: return precpred(_ctx, 14);
    case 6: return precpred(_ctx, 13);
    case 7: return precpred(_ctx, 12);
    case 8: return precpred(_ctx, 11);
    case 9: return precpred(_ctx, 10);
    case 10: return precpred(_ctx, 9);
    case 11: return precpred(_ctx, 8);
    case 12: return precpred(_ctx, 7);

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
  "parse", "topBlock", "block", "statement", "assignment", "variableDef", 
  "functionCall", "ifStatement", "ifStat", "elseIfStat", "elseStat", "functionDecl", 
  "forStatement", "whileStatement", "idList", "exprList", "expression", 
  "list", "index"
};

std::vector<std::string> tlParser::_literalNames = {
  "", "'println'", "'print'", "'input'", "'assert'", "'size'", "'def'", 
  "'if'", "'else'", "'return'", "'for'", "'while'", "'to'", "'do'", "'end'", 
  "'||'", "'&&'", "'=='", "'!='", "'>='", "'<='", "'^'", "'!'", "'>'", "'<'", 
  "'+'", "'-'", "'*'", "'/'", "'%'", "'{'", "'}'", "'['", "']'", "'('", 
  "')'", "';'", "'='", "','", "'?'", "':'"
};

std::vector<std::string> tlParser::_symbolicNames = {
  "", "Println", "Print", "Input", "Assert", "Size", "Def", "If", "Else", 
  "Return", "For", "While", "To", "Do", "End", "Or", "And", "Equals", "NEquals", 
  "GTEquals", "LTEquals", "Pow", "Excl", "GT", "LT", "Add", "Subtract", 
  "Multiply", "Divide", "Modulus", "OBrace", "CBrace", "OBracket", "CBracket", 
  "OParen", "CParen", "SColon", "Assign", "Comma", "QMark", "Colon", "TypeIdentifier", 
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
    0x3, 0x31, 0x109, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x3, 0x2, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x2e, 0xa, 0x3, 0xc, 
    0x3, 0xe, 0x3, 0x31, 0xb, 0x3, 0x3, 0x4, 0x7, 0x4, 0x34, 0xa, 0x4, 0xc, 
    0x4, 0xe, 0x4, 0x37, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x5, 0x4, 0x3d, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x5, 0x5, 0x4b, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0x4f, 0xa, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x5, 
    0x7, 0x57, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x5c, 0xa, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x62, 0xa, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x74, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x7, 
    0x9, 0x78, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x7b, 0xb, 0x9, 0x3, 0x9, 0x5, 
    0x9, 0x7e, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x95, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x7, 0x10, 0xae, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xb1, 0xb, 0x10, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xb6, 0xa, 0x11, 0xc, 0x11, 0xe, 
    0x11, 0xb9, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xc4, 0xa, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xc8, 0xa, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0xce, 0xa, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xd1, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x7, 0x12, 0xfa, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0xfd, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x101, 0xa, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x2, 0x3, 0x22, 0x15, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x2, 
    0x2, 0x2, 0x123, 0x2, 0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x35, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x53, 0x3, 0x2, 0x2, 0x2, 0xe, 0x73, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x75, 0x3, 0x2, 0x2, 0x2, 0x12, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x86, 0x3, 0x2, 0x2, 0x2, 0x16, 0x8c, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x90, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x9a, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0xa4, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd0, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0xfe, 0x3, 0x2, 0x2, 0x2, 0x26, 0x104, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 
    0x5, 0x4, 0x3, 0x2, 0x29, 0x2a, 0x7, 0x2, 0x2, 0x3, 0x2a, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x2b, 0x2e, 0x5, 0x8, 0x5, 0x2, 0x2c, 0x2e, 0x5, 0x18, 
    0xd, 0x2, 0x2d, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2f, 0x30, 0x3, 0x2, 0x2, 0x2, 0x30, 0x5, 0x3, 0x2, 0x2, 0x2, 0x31, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0x32, 0x34, 0x5, 0x8, 0x5, 0x2, 0x33, 0x32, 
    0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 0x2, 0x36, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0xb, 0x2, 
    0x2, 0x39, 0x3a, 0x5, 0x22, 0x12, 0x2, 0x3a, 0x3b, 0x7, 0x26, 0x2, 0x2, 
    0x3b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 
    0x5, 0xc, 0x7, 0x2, 0x3f, 0x40, 0x7, 0x26, 0x2, 0x2, 0x40, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x41, 0x42, 0x5, 0xa, 0x6, 0x2, 0x42, 0x43, 0x7, 0x26, 
    0x2, 0x2, 0x43, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x44, 0x45, 0x5, 0xe, 0x8, 
    0x2, 0x45, 0x46, 0x7, 0x26, 0x2, 0x2, 0x46, 0x4b, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x4b, 0x5, 0x10, 0x9, 0x2, 0x48, 0x4b, 0x5, 0x1a, 0xe, 0x2, 0x49, 
    0x4b, 0x5, 0x1c, 0xf, 0x2, 0x4a, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x4a, 0x44, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x47, 0x3, 
    0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x49, 0x3, 0x2, 
    0x2, 0x2, 0x4b, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x7, 0x2e, 0x2, 
    0x2, 0x4d, 0x4f, 0x5, 0x26, 0x14, 0x2, 0x4e, 0x4d, 0x3, 0x2, 0x2, 0x2, 
    0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x51, 0x7, 0x27, 0x2, 0x2, 0x51, 0x52, 0x5, 0x22, 0x12, 0x2, 0x52, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x2b, 0x2, 0x2, 0x54, 0x56, 0x7, 
    0x2e, 0x2, 0x2, 0x55, 0x57, 0x5, 0x26, 0x14, 0x2, 0x56, 0x55, 0x3, 0x2, 
    0x2, 0x2, 0x56, 0x57, 0x3, 0x2, 0x2, 0x2, 0x57, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x59, 0x7, 0x2e, 0x2, 0x2, 0x59, 0x5b, 0x7, 0x24, 0x2, 0x2, 
    0x5a, 0x5c, 0x5, 0x20, 0x11, 0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5b, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x74, 
    0x7, 0x25, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x3, 0x2, 0x2, 0x5f, 0x61, 0x7, 
    0x24, 0x2, 0x2, 0x60, 0x62, 0x5, 0x22, 0x12, 0x2, 0x61, 0x60, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x3, 0x2, 0x2, 
    0x2, 0x63, 0x74, 0x7, 0x25, 0x2, 0x2, 0x64, 0x65, 0x7, 0x4, 0x2, 0x2, 
    0x65, 0x66, 0x7, 0x24, 0x2, 0x2, 0x66, 0x67, 0x5, 0x22, 0x12, 0x2, 0x67, 
    0x68, 0x7, 0x25, 0x2, 0x2, 0x68, 0x74, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 
    0x7, 0x6, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x24, 0x2, 0x2, 0x6b, 0x6c, 0x5, 
    0x22, 0x12, 0x2, 0x6c, 0x6d, 0x7, 0x25, 0x2, 0x2, 0x6d, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6f, 0x7, 0x7, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x24, 0x2, 
    0x2, 0x70, 0x71, 0x5, 0x22, 0x12, 0x2, 0x71, 0x72, 0x7, 0x25, 0x2, 0x2, 
    0x72, 0x74, 0x3, 0x2, 0x2, 0x2, 0x73, 0x58, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x73, 0x64, 0x3, 0x2, 0x2, 0x2, 0x73, 0x69, 
    0x3, 0x2, 0x2, 0x2, 0x73, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x74, 0xf, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x79, 0x5, 0x12, 0xa, 0x2, 0x76, 0x78, 0x5, 0x14, 
    0xb, 0x2, 0x77, 0x76, 0x3, 0x2, 0x2, 0x2, 0x78, 0x7b, 0x3, 0x2, 0x2, 
    0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7c, 
    0x7e, 0x5, 0x16, 0xc, 0x2, 0x7d, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x7, 
    0x10, 0x2, 0x2, 0x80, 0x11, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x9, 
    0x2, 0x2, 0x82, 0x83, 0x5, 0x22, 0x12, 0x2, 0x83, 0x84, 0x7, 0xf, 0x2, 
    0x2, 0x84, 0x85, 0x5, 0x6, 0x4, 0x2, 0x85, 0x13, 0x3, 0x2, 0x2, 0x2, 
    0x86, 0x87, 0x7, 0xa, 0x2, 0x2, 0x87, 0x88, 0x7, 0x9, 0x2, 0x2, 0x88, 
    0x89, 0x5, 0x22, 0x12, 0x2, 0x89, 0x8a, 0x7, 0xf, 0x2, 0x2, 0x8a, 0x8b, 
    0x5, 0x6, 0x4, 0x2, 0x8b, 0x15, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x7, 
    0xa, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0xf, 0x2, 0x2, 0x8e, 0x8f, 0x5, 0x6, 
    0x4, 0x2, 0x8f, 0x17, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x8, 0x2, 
    0x2, 0x91, 0x92, 0x7, 0x2e, 0x2, 0x2, 0x92, 0x94, 0x7, 0x24, 0x2, 0x2, 
    0x93, 0x95, 0x5, 0x1e, 0x10, 0x2, 0x94, 0x93, 0x3, 0x2, 0x2, 0x2, 0x94, 
    0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 
    0x7, 0x25, 0x2, 0x2, 0x97, 0x98, 0x5, 0x6, 0x4, 0x2, 0x98, 0x99, 0x7, 
    0x10, 0x2, 0x2, 0x99, 0x19, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0xc, 
    0x2, 0x2, 0x9b, 0x9c, 0x7, 0x2e, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x27, 0x2, 
    0x2, 0x9d, 0x9e, 0x5, 0x22, 0x12, 0x2, 0x9e, 0x9f, 0x7, 0xe, 0x2, 0x2, 
    0x9f, 0xa0, 0x5, 0x22, 0x12, 0x2, 0xa0, 0xa1, 0x7, 0xf, 0x2, 0x2, 0xa1, 
    0xa2, 0x5, 0x6, 0x4, 0x2, 0xa2, 0xa3, 0x7, 0x10, 0x2, 0x2, 0xa3, 0x1b, 
    0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0xd, 0x2, 0x2, 0xa5, 0xa6, 0x5, 
    0x22, 0x12, 0x2, 0xa6, 0xa7, 0x7, 0xf, 0x2, 0x2, 0xa7, 0xa8, 0x5, 0x6, 
    0x4, 0x2, 0xa8, 0xa9, 0x7, 0x10, 0x2, 0x2, 0xa9, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xaf, 0x7, 0x2e, 0x2, 0x2, 0xab, 0xac, 0x7, 0x28, 0x2, 0x2, 
    0xac, 0xae, 0x7, 0x2e, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xae, 
    0xb1, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 
    0x2, 0x2, 0x2, 0xb2, 0xb7, 0x5, 0x22, 0x12, 0x2, 0xb3, 0xb4, 0x7, 0x28, 
    0x2, 0x2, 0xb4, 0xb6, 0x5, 0x22, 0x12, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xb6, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x21, 0x3, 0x2, 0x2, 0x2, 0xb9, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x8, 0x12, 0x1, 0x2, 0xbb, 0xbc, 
    0x7, 0x1c, 0x2, 0x2, 0xbc, 0xd1, 0x5, 0x22, 0x12, 0x17, 0xbd, 0xbe, 
    0x7, 0x18, 0x2, 0x2, 0xbe, 0xd1, 0x5, 0x22, 0x12, 0x16, 0xbf, 0xd1, 
    0x7, 0x2d, 0x2, 0x2, 0xc0, 0xd1, 0x7, 0x2c, 0x2, 0x2, 0xc1, 0xc3, 0x5, 
    0xe, 0x8, 0x2, 0xc2, 0xc4, 0x5, 0x26, 0x14, 0x2, 0xc3, 0xc2, 0x3, 0x2, 
    0x2, 0x2, 0xc3, 0xc4, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xc5, 0xc7, 0x7, 0x2e, 0x2, 0x2, 0xc6, 0xc8, 0x5, 0x26, 0x14, 0x2, 
    0xc7, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xd1, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xd1, 0x7, 0x2f, 0x2, 0x2, 0xca, 0xcb, 
    0x7, 0x5, 0x2, 0x2, 0xcb, 0xcd, 0x7, 0x24, 0x2, 0x2, 0xcc, 0xce, 0x7, 
    0x2f, 0x2, 0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd1, 0x7, 0x25, 0x2, 
    0x2, 0xd0, 0xba, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xd0, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xd0, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xd0, 0xca, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xfb, 0x3, 
    0x2, 0x2, 0x2, 0xd2, 0xd3, 0xc, 0x15, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0x1d, 
    0x2, 0x2, 0xd4, 0xfa, 0x5, 0x22, 0x12, 0x16, 0xd5, 0xd6, 0xc, 0x14, 
    0x2, 0x2, 0xd6, 0xd7, 0x7, 0x1e, 0x2, 0x2, 0xd7, 0xfa, 0x5, 0x22, 0x12, 
    0x15, 0xd8, 0xd9, 0xc, 0x13, 0x2, 0x2, 0xd9, 0xda, 0x7, 0x1f, 0x2, 0x2, 
    0xda, 0xfa, 0x5, 0x22, 0x12, 0x14, 0xdb, 0xdc, 0xc, 0x12, 0x2, 0x2, 
    0xdc, 0xdd, 0x7, 0x1b, 0x2, 0x2, 0xdd, 0xfa, 0x5, 0x22, 0x12, 0x13, 
    0xde, 0xdf, 0xc, 0x11, 0x2, 0x2, 0xdf, 0xe0, 0x7, 0x1c, 0x2, 0x2, 0xe0, 
    0xfa, 0x5, 0x22, 0x12, 0x12, 0xe1, 0xe2, 0xc, 0x10, 0x2, 0x2, 0xe2, 
    0xe3, 0x7, 0x15, 0x2, 0x2, 0xe3, 0xfa, 0x5, 0x22, 0x12, 0x11, 0xe4, 
    0xe5, 0xc, 0xf, 0x2, 0x2, 0xe5, 0xe6, 0x7, 0x16, 0x2, 0x2, 0xe6, 0xfa, 
    0x5, 0x22, 0x12, 0x10, 0xe7, 0xe8, 0xc, 0xe, 0x2, 0x2, 0xe8, 0xe9, 0x7, 
    0x19, 0x2, 0x2, 0xe9, 0xfa, 0x5, 0x22, 0x12, 0xf, 0xea, 0xeb, 0xc, 0xd, 
    0x2, 0x2, 0xeb, 0xec, 0x7, 0x1a, 0x2, 0x2, 0xec, 0xfa, 0x5, 0x22, 0x12, 
    0xe, 0xed, 0xee, 0xc, 0xc, 0x2, 0x2, 0xee, 0xef, 0x7, 0x13, 0x2, 0x2, 
    0xef, 0xfa, 0x5, 0x22, 0x12, 0xd, 0xf0, 0xf1, 0xc, 0xb, 0x2, 0x2, 0xf1, 
    0xf2, 0x7, 0x14, 0x2, 0x2, 0xf2, 0xfa, 0x5, 0x22, 0x12, 0xc, 0xf3, 0xf4, 
    0xc, 0xa, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x12, 0x2, 0x2, 0xf5, 0xfa, 0x5, 
    0x22, 0x12, 0xb, 0xf6, 0xf7, 0xc, 0x9, 0x2, 0x2, 0xf7, 0xf8, 0x7, 0x11, 
    0x2, 0x2, 0xf8, 0xfa, 0x5, 0x22, 0x12, 0xa, 0xf9, 0xd2, 0x3, 0x2, 0x2, 
    0x2, 0xf9, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xd8, 0x3, 0x2, 0x2, 0x2, 
    0xf9, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xde, 0x3, 0x2, 0x2, 0x2, 0xf9, 
    0xe1, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xe7, 
    0x3, 0x2, 0x2, 0x2, 0xf9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0xf9, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xf9, 0xf3, 0x3, 0x2, 
    0x2, 0x2, 0xf9, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xfa, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0xfb, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0xfc, 0x23, 0x3, 0x2, 0x2, 0x2, 0xfd, 0xfb, 0x3, 0x2, 0x2, 0x2, 0xfe, 
    0x100, 0x7, 0x22, 0x2, 0x2, 0xff, 0x101, 0x5, 0x20, 0x11, 0x2, 0x100, 
    0xff, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x7, 0x23, 0x2, 0x2, 0x103, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x104, 0x105, 0x7, 0x22, 0x2, 0x2, 0x105, 0x106, 
    0x5, 0x22, 0x12, 0x2, 0x106, 0x107, 0x7, 0x23, 0x2, 0x2, 0x107, 0x27, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x2d, 0x2f, 0x35, 0x3c, 0x4a, 0x4e, 0x56, 
    0x5b, 0x61, 0x73, 0x79, 0x7d, 0x94, 0xaf, 0xb7, 0xc3, 0xc7, 0xcd, 0xd0, 
    0xf9, 0xfb, 0x100, 
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
