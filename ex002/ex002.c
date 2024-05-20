#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valor, entrada , retirada;
   printf("qual o valor de entrada no primeiro mes: ");
   scanf("%d", &entrada);
   printf("qual o valor de retirada no primeiro mes: ");
   scanf("%d", &retirada);
   valor = entrada - retirada;
   valor = valor * 1.02;
   printf("O valor final no primeiro mes: %d", valor);
    
   printf("\nqual o valor de entrada no segundo mes: ");
   scanf("%d", &entrada);
   printf("qual o valor de retirada no segundo mes: ");
   scanf("%d", &retirada);
   valor = valor + entrada - retirada;
   valor = valor * 1.02;
   printf("O valor final no primeiro mes: %d", valor);
   
   printf("\nqual o valor de entrada no terceiro mes: ");
   scanf("%d", &entrada);
   printf("qual o valor de retirada no terceiro mes: ");
   scanf("%d", &retirada);
   valor = valor + entrada - retirada;
   valor = valor * 1.02;
   printf("O valor final no inicio do quarto mes: %d", valor); 
   return 0;
}


