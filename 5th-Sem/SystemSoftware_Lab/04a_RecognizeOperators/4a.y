%{
	#include <stdio.h>
	#include <stdlib.h>
%}

%token NUMBER ID
%left '+''-''*''/'

%%
exp:exp'+'exp
|exp'-'exp
|exp'*'exp
|exp'/'exp
|NUMBER
|ID;
%%

int main() {
	printf("Enter the expression\n");
	yyparse();
	printf("Valid expression\n");
	return 0;
}

yyerror() {
	printf("Invalid expression\n");
	exit(0);
}
