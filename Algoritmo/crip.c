#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100];
    char auxiliar[100];
    int frequencia[256] = {0};
    int soma = 0;
    gets(string);

    for(int i = 0; string[i] != '\0'; i++){
        auxiliar[i] = string[i];
    }

    for(int i = 0; string[i] != '\0'; i++)
    {
        frequencia[(int)string[i]]++;
    }

    for(int i = 0; i < 256; i++)
    {
        if(frequencia[i] > 0)
        {
            printf("%c: %d\n", i, i);
        }
    }

    for(int i = 0; i < 256; i++)
    {
        if(frequencia[i] > 0)
        {
            soma += i * frequencia[i];
        } 
    }

    for(int i = 0;string[i] != '\0' ; i++)
    {
        frequencia[i] += (soma + i);
        printf("%d\n", frequencia[i]);
    }
    return 0;
}