
#ifndef PARSER_H
#define PARSER_H

#include "token.h"
#include "lexer.h"
#include "ast.h"

typedef struct PARSER_STRUCT
{
	lexer_T* lexer;
	token_T* current_token;
} parser_T;

parser_T* init_parser(lexer_T* lexer);

void  parser_eat(parser_T* parser, int token_type);

AST_T* parser_parse(parser_T* parser); //main parser from token to ast

AST_T* parser_parse_onestatement(parser_T* parser);

AST_T* parser_parse_multistatement(parser_T* parser);

AST_T* parser_parse_expr(parser_T* parser);

AST_T* parser_parse_factor(parser_T* parser);

AST_T* parser_parse_term(parser_T* parser);

AST_T* parser_parse_function_call(parser_T* parser);

AST_T* parser_parse_variable(parser_T* parser);

AST_T* parser_parse_str(parser_T* parser);

AST_T* parser_parse_variable_definition(parser_T *parser);

AST_T* parser_parse_id(parser_T* parser);
#endif
