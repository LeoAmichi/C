#include <stdio.h>
#include <stdlib.h>


float mult (float a, float b)
{
    return (a * b);
}
float soma (float a, float b)
{
    return (a + b);
}
float subt (float a, float b)
{
    return (a - b);
}
float divi (float a, float b)
{
    return (a / b);
}
float quadrado (float a)
{
    return (a * a);
}
int main()
{
    printf("\n------>CALCULADORA<------\n");
    float num1, num2;
    char operador;
    printf("\nDigite numero1: ");
    scanf("%f", &num1);
    printf("Digite numero2: ");
    scanf("%f", &num2);
    printf("Digite o operador + * / - ^: ");
    scanf("%s", &operador);
    if (operador == '+')
    {
        printf("\nSOMA: %0.3f\n", soma(num1, num2));
    }
    if (operador == '-')
    {
        printf("\nSUBTRACAO: %0.3f\n", subt(num1, num2));
    }
    if (operador == '/')
    {
       printf("\nDIVISAO: %0.3f\n", divi(num1, num2));
    }
    if (operador == '*')
    {
        printf("\nMULTIPLICACAO: %0.3f\n", mult(num1, num2));
    }
    if (operador == '^')
    {
      printf("\nQUADRADO: %0.3f\n", quadrado(num1));
    }
    return 0;
}