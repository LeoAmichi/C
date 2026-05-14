#include <stdio.h>

int troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int numX = 10, numY = 30;
    troca(&numX, &numY);
    printf("%d", numY);
}