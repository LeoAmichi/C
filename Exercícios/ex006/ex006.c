#include <stdio.h>

int main()
{
    int n, contador, resto;
    contador = 0;
    printf("Digite um numero para encontrar os numeros impares: ");
    scanf("%d", &n);
    while (contador < n)
    {
      resto = contador % 2;
      if (resto == 1)
      {
        printf("%d\n", contador);
      }
      contador++;
    }
    return 0;
}