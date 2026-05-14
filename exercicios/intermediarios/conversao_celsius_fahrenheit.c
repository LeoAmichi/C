#include <stdio.h>
#include <stdlib.h>

int main()
{
    int operador, num;
    operador = 0;
    printf("Digite quantas vezes para aparecer: ");
    scanf("%d", &num);
    while (operador<num)
    {
        printf("Te amo\n");
        operador++;    
    }   
}