
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  tlLexer : public antlr4::Lexer {
public:
  enum {
    Println = 1, Print = 2, Input = 3, Assert = 4, Size = 5, Def = 6, If = 7, 
    Else = 8, Return = 9, For = 10, While = 11, To = 12, Do = 13, End = 14, 
    In = 15, Null = 16, Or = 17, And = 18, Equals = 19, NEquals = 20, GTEquals = 21, 
    LTEquals = 22, Pow = 23, Excl = 24, GT = 25, LT = 26, Add = 27, Subtract = 28, 
    Multiply = 29, Divide = 30, Modulus = 31, OBrace = 32, CBrace = 33, 
    OBracket = 34, CBracket = 35, OParen = 36, CParen = 37, SColon = 38, 
    Assign = 39, Comma = 40, QMark = 41, Colon = 42, TypeIdentifier = 43, 
    Bool = 44, Number = 45, Identifier = 46, String = 47, Comment = 48, 
    Space = 49
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

