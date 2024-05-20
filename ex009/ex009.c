#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador,num;
    contador = 0;
    printf("Digite o numero para verificar se e primo: ");
    scanf("%d", &num);
    while (contador < num)
    {
        if (contador%2 == 0 || contador%3 == 0)
        {
            printf("Nao: %d \n", contador);
        }      
        else
        {
            printf("Primo: %d \n", contador);
        }
        contador++;
    }   
}