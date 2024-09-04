#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5];
    int frequencia[100] = {0};

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &numeros[i]);
        frequencia[numeros[i]]++;
    }

    for (int i = 0; i < 5; i++)
    {
        if(frequencia[numeros[i]] > 0){
            printf("%d: %d\n", numeros[i], frequencia[numeros[i]]);
            frequencia[numeros[i]] = 0;
        }
    }
}