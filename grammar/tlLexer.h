
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  tlLexer : public antlr4::Lexer {
public:
  enum {
    Def = 1, If = 2, Else = 3, Return = 4, While = 5, To = 6, Do = 7, End = 8, 
    Print = 9, Scan = 10, Or = 11, And = 12, Equals = 13, NEquals = 14, 
    GTEquals = 15, LTEquals = 16, Pow = 17, Excl = 18, GT = 19, LT = 20, 
    Add = 21, Subtract = 22, Multiply = 23, Divide = 24, Modulus = 25, OBrace = 26, 
    CBrace = 27, OBracket = 28, CBracket = 29, OParen = 30, CParen = 31, 
    SColon = 32, Assign = 33, Comma = 34, QMark = 35, Colon = 36, Type_identifier = 37, 
    Bool = 38, Number = 39, Identifier = 40, String = 41, Comment = 42, 
    Space = 43
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

