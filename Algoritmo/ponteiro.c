
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int *ptr;
	int **pptr;

	int valor;

	ptr = &valor;
	pptr = &ptr;

	scanf("%d", ptr);

	printf("\nEndereco de ptr = %x", &ptr);
	printf("\nEndereco de pptr = %x", &pptr);

	printf("\nValor ptr = %d", *ptr);
	printf("\nValor pptr = %d", **pptr);

	return EXIT_SUCCESS;
}
