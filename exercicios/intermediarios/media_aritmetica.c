#include <stdio.h>

int main()
{
    float salario;
    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    if (salario <= 1000.00)
    {
        salario = salario * 1.15;
        printf("Seu salario final: %f", salario);
    }
    else if (salario <= 2000)
    {
        salario = salario * 1.20;
        printf("Seu salario final: %f", salario);
    }
    else if (salario > 2000 && salario <= 2100)
    {
        salario = salario * 1.18;
        printf("Seu salario final: %f", salario);
    }
    else
    {
        salario = salario * 1.05;
        printf("Seu salario final: %f", salario);
    }
    return 0;
}