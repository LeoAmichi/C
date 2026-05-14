#include <stdio.h>

int main()
{
    int x = 7;
    int *px;
    px = &x;

    printf("%d\n", x); // O valor de X é 8 pois o ponteiro px que recebeu o endereço de memoria de X recebeu o valor 8
    printf("%p\n", &x);
    printf("%p\n", px);
    printf("%d\n", *px);
}