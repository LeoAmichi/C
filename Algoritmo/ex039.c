#include <stdio.h>

int main()
{
    char palavras[6][30];
    int somador[6] = {0};

    for (int i = 0; i < 6; i++)
    {
        gets(palavras[i]);
    }

    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            if (palavras[0][j] == palavras[i][j] && palavras[0][j] != '\0')
                somador[i]++;
        }
    }

    int maior = 1;
    for (int i = 2; i < 6; i++)
    {
       if(somador[i] > somador[maior])
            maior = i;
    }
    printf("%d", maior);
}