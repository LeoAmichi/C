#include <stdio.h>

int verificador(int num)
{
    int memoria = 0;
    if (num % 2 == 0)
    {
        memoria = 1;
    }
    return memoria;
}

int main()
{
    int num;
    printf("Digite o valor do numero: ");
    scanf("%d", &num);
    if (verificador(num) == 1)
    {
        printf("O numero digitado e par");
    }
    else
    {
        printf("O numero digitado e impar");
    }
}
