grammar tl;

parse
 : top_block EOF
 ;

top_block
 : (statement | function_decl)*
 ;

block
 : statement* 
 ;

statement
 : variable_def ';'
 | assignment ';'
 | function_call ';'
 | if_statement
 | while_statement
 | return_statement ';'
 ;

 return_statement
 : Return expression
 ;

assignment
 : Identifier index? '=' expression
 ;

 variable_def
 : Type_identifier Identifier index?
 ;

function_call
 : Identifier '(' (expression (',' expression)*)? ')' #identifierFunctionCall
 | Print '(' expression ')'							  #printFunctionCall
 | Scan '(' Identifier index? ')'					  #scanFunctionCall
 | PrintLn '(' expression ')'						  #printLnFunctionCall
 ;

if_statement
 : if_stat else_if_stat* else_stat? End
 ;

if_stat
 : If expression Do block
 ;

else_if_stat
 : Else If expression Do block
 ;

else_stat
 : Else Do block
 ;

 while_statement
 : While expression Do block End
 ;

function_decl
 : Def func_decl_type '(' func_decl_type_list? ')' block End
 ;

func_decl_type_list
 : func_decl_type_arg (',' func_decl_type_arg)*
 ;

func_decl_type_arg
 : (func_decl_type | func_decl_array_type)
 ;

func_decl_type
: Type_identifier Identifier
;

func_decl_array_type
: Type_identifier Identifier AraryDeclSign
;

expression
 : '-' expression                           #unaryMinusExpression
 | '!' expression                           #notExpression
 | expression '*' expression                #multiplyExpression
 | expression '/' expression                #divideExpression
 | expression '%' expression                #modulusExpression
 | expression '+' expression                #addExpression
 | expression '-' expression                #subtractExpression
 | expression '>=' expression               #gtEqExpression
 | expression '<=' expression               #ltEqExpression
 | expression '>' expression                #gtExpression
 | expression '<' expression                #ltExpression
 | expression '==' expression               #eqExpression
 | expression '!=' expression               #notEqExpression
 | expression '&&' expression               #andExpression
 | expression '||' expression               #orExpression
 | Number                                   #numberExpression
 | Bool                                     #boolExpression
 | Identifier '(' (expression (',' expression)*)? ')'                     #functionCallExpression
 | Identifier index?                        #identifierExpression
 | String                                   #stringExpression
 ;

index
 : '[' expression ']'
 ;

Def       : 'def';
If        : 'if';
Else      : 'else';
Return    : 'return';
While     : 'while';
To        : 'to';
Do        : 'do';
End       : 'end';
Print     : 'print';
Scan      : 'scan';
PrintLn   : 'println';
AraryDeclSign : '[]';

Or       : '||';
And      : '&&';
Equals   : '==';
NEquals  : '!=';
GTEquals : '>=';
LTEquals : '<=';
Pow      : '^';
Excl     : '!';
GT       : '>';
LT       : '<';
Add      : '+';
Subtract : '-';
Multiply : '*';
Divide   : '/';
Modulus  : '%';
OBrace   : '{';
CBrace   : '}';
OBracket : '[';
CBracket : ']';
OParen   : '(';
CParen   : ')';
SColon   : ';';
Assign   : '=';
Comma    : ',';
QMark    : '?';
Colon    : ':';

Type_identifier
 : 'int'
 | 'string'
 | 'bool'
 ;

Bool
 : 'true' 
 | 'false'
 ;

Number
 : Int
 ;

Identifier
 : [a-zA-Z_] [a-zA-Z_0-9]*
 ;

String
 : ["] (~["\r\n] | '\\\\' | '\\"')* ["]
 | ['] (~['\r\n] | '\\\\' | '\\\'')* [']
 ;

Comment
 : ('//' ~[\r\n]* | '/*' .*? '*/') -> skip
 ;

 Space
 : [ \t\r\n\u000C] -> skip
 ;

fragment Int
 : [1-9] Digit*
 | '0'
 ;
  
fragment Digit 
 : [0-9]
 ;