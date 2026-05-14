#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int indice = 0;
    int indice2 = 0;
    int indice3 = 0;
    printf("Digite o valor para N: ");
    scanf("%d", &n);
    while(indice2 < n){
        printf("*");
        indice2++;
    }
    printf("\n");
    while (indice < n - 1)
    {
        for (int i = 0; i < n; i++)
        {
            int caracteres[n];
            if (caracteres[0] == caracteres[i] || caracteres[n - 1] == caracteres[i])
            {
                printf("*");
            }
            else
            {
                printf("+");
            }
        }
        printf("\n");
        indice++;
    }
    while(indice3 < n){
        printf("*");
        indice3++;
    }
}