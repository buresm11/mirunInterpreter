grammar clike;

program : statement_top+ ;

statement_top : s_var_def |
				s_var_assign |
                s_var_expression |
                s_if |
                s_while |
                s_fdef |
                s_call ;

statement_if :  s_var_def |
				s_var_assign |
                s_var_expression |
                s_if |
                s_while |
                s_call |
                s_return ;

statement_while :  s_var_def |
				s_var_assign |
                s_var_expression |
                s_if |
                s_while |
                s_break |
                s_call |
                s_return ;

statement_function :  s_var_def |
				s_var_assign |
                s_var_expression |
                s_if |
                s_while |
                s_call |
                s_return ;

s_var_def : type_identifier identifier Semicolon ;
s_var_assign : identifier Equals value Semicolon ;
s_var_expression : identifier Equals value op value Semicolon ;

s_if : 'if' LeftParen logical RightParen LeftBrace statement_if+ RightBrace ;
s_while : 'while' LeftParen logical RightParen LeftBrace statement_while+ RightBrace ;
s_fdef : 'fdef' function_type_identifier var_identifier LeftParen parametrs RightParen LeftBrace statement_function+ RightBrace ;

s_break : 'break' Semicolon ;
s_call : 'call' identifier LeftParen call_parametrs RightParen Semicolon ;

s_return : 'return' value ; 

call_parametrs : call_parametr+ ;
call_parametr : value ',' ;
 
parametrs : parametr+ ;
parametr : type_identifier var_identifier ',' ;

logical : value compare value ;

type_identifier : 'int' |
				  'string' ;

function_type_identifier : type_identifier | 'void' ;

value : identifierLiteral | s_call ;

identifier: var_identifier | array_identifier ;
identifierLiteral: identifier | literal ;

array_identifier : Name LeftBracket value RightBracket ;
var_identifier : Name ;

literal : string | Number ;

string
    : Single_string
    | Double_string
    ;

op : Op_plus | Op_minus | Op_multiplication | Op_div | Op_mod ;
compare : Compare_equals | Compare_lower | Compare_lowere | Compare_greater | Compare_greatere ;

/*Lexer*/

Name : ('a'..'z')+ ;
Number : ('0'..'9')+ ;

Single_string
    : '\'' ~('\'')+ '\''
    ;

Double_string
    : '"' ~('"')+ '"'
    ;

Colon : ':' ;
Semicolon : ';' ;
Equals : '=' ;

LeftParen : '(';
RightParen : ')';

LeftBracket : '[';
RightBracket : ']';

LeftBrace : '{';
RightBrace : '}';

Op_plus : '+' ;
Op_minus : '-' ;
Op_multiplication : '*' ;
Op_div : '/' ;
Op_mod : '%' ;

Compare_equals : '==' ;
Compare_lower : '<' ;
Compare_lowere : '<=' ;
Compare_greater : '>' ;
Compare_greatere : '>=' ;

Whitespace
    :   [ \t]+
        -> skip
    ;

Newline
    :   (   '\r' '\n'?
        |   '\n'
        )
        -> skip
    ;

BlockComment
    :   '/*' .*? '*/'
        -> skip
    ;

LineComment
    :   '//' ~[\r\n]*
        -> skip
    ;