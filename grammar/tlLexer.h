
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  tlLexer : public antlr4::Lexer {
public:
  enum {
    Def = 1, If = 2, Else = 3, Return = 4, While = 5, To = 6, Do = 7, End = 8, 
    Print = 9, Scan = 10, PrintLn = 11, AraryDeclSign = 12, Or = 13, And = 14, 
    Equals = 15, NEquals = 16, GTEquals = 17, LTEquals = 18, Pow = 19, Excl = 20, 
    GT = 21, LT = 22, Add = 23, Subtract = 24, Multiply = 25, Divide = 26, 
    Modulus = 27, OBrace = 28, CBrace = 29, OBracket = 30, CBracket = 31, 
    OParen = 32, CParen = 33, SColon = 34, Assign = 35, Comma = 36, QMark = 37, 
    Colon = 38, Type_identifier = 39, Bool = 40, Number = 41, Identifier = 42, 
    String = 43, Comment = 44, Space = 45
  };

  tlLexer(antlr4::CharStream *input);
  ~tlLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

