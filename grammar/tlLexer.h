
// Generated from ../grammar/tl.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  tlLexer : public antlr4::Lexer {
public:
  enum {
    Println = 1, Print = 2, Input = 3, Assert = 4, Size = 5, Def = 6, If = 7, 
    Else = 8, Return = 9, For = 10, While = 11, To = 12, Do = 13, End = 14, 
    Or = 15, And = 16, Equals = 17, NEquals = 18, GTEquals = 19, LTEquals = 20, 
    Pow = 21, Excl = 22, GT = 23, LT = 24, Add = 25, Subtract = 26, Multiply = 27, 
    Divide = 28, Modulus = 29, OBrace = 30, CBrace = 31, OBracket = 32, 
    CBracket = 33, OParen = 34, CParen = 35, SColon = 36, Assign = 37, Comma = 38, 
    QMark = 39, Colon = 40, TypeIdentifier = 41, Bool = 42, Number = 43, 
    Identifier = 44, String = 45, Comment = 46, Space = 47
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

