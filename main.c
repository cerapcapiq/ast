

#include <stdio.h>
#include "lexer.h"
#include "parser.h"

int main(int ac, char *av[])
{
	printf("HELOkk\n");
	lexer_T* lexer = init_lexer(
			"var name = \"john doe\";\n"
			"print(name);\n"
			);

	parser_T* parser = init_parser(lexer);
	AST_T* root = parser_parse(parser);
	
	printf("%d\n", root->type);
	printf("%d\n", root->compound_size);
	return 0;
}

