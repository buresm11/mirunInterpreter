
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  tlLexer : public antlr4::Lexer {
public:
  enum {
    Def = 1, If = 2, Else = 3, Return = 4, While = 5, To = 6, Do = 7, End = 8, 
    Or = 9, And = 10, Equals = 11, NEquals = 12, GTEquals = 13, LTEquals = 14, 
    Pow = 15, Excl = 16, GT = 17, LT = 18, Add = 19, Subtract = 20, Multiply = 21, 
    Divide = 22, Modulus = 23, OBrace = 24, CBrace = 25, OBracket = 26, 
    CBracket = 27, OParen = 28, CParen = 29, SColon = 30, Assign = 31, Comma = 32, 
    QMark = 33, Colon = 34, Type_identifier = 35, Bool = 36, Number = 37, 
    Identifier = 38, String = 39, Comment = 40, Space = 41
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

