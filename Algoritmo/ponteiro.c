
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int var = 15;
	int *ptr;

	ptr = &var;
	display(var, ptr);
	*ptr = 73;
	display(var, ptr);

	return 0;
}

void display(int var, int *ptr)
{
	printf("\n\n");
	printf("conteudo de var = %d\n", var);
	printf("endereco de var = %p\n", &var);
	printf("conteudo apontado por ptr = %d\n", *ptr);
	printf("endereco apontado por ptr = %p\n", ptr);
	printf("endereco do ptr           = %p\n", &ptr);
}

// Ponteiros:
// *ptr : o apontado por, conteúdo do enredeço da variável que o ptr aponta
// ptr : o endereço da variável
// &ptr : o endereço do ponteiro
