#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    char y;
    float z;
    double w;
    printf("O tamanho do int: %d bytes", sizeof(x));
    printf("\nO tamanho do char: %d bytes", sizeof(y));
    printf("\nO tamanho do float: %d bytes", sizeof(z));
    printf("\nO tamanho do double: %d bytes", sizeof(w));
    return 0;
}