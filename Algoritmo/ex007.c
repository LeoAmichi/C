#include <stdio.h>
#define DIAS 3

void menorTemp(int temperatura, int indice, int i)
{
    if (temperatura < indice)
    {
        indice = temperatura;
    }
    if (i == DIAS)
    {
        printf("\nA menor temperatura do ano foi: %d", indice);
    }
}

void maiorTemp(int temperatura, int indice, int i)
{
    if (temperatura > indice)
    {
        indice = temperatura;
    }
    if (i == DIAS)
    {
        printf("\nA maior temperatura do ano foi: %d", indice);
    }
}

float mediaTemp(float total)
{
    float media;
    media = total / DIAS;
    return media;
}

void numDias(int temperatura, int i, float total, int num)
{
    if (temperatura >= mediaTemp(total))
    {
        num++;
    }
    if (i == DIAS)
    {
        printf("\nO numero de dias que ficaram acima da media foram: %d", num);
    }
} 

int main()
{
    int temp[DIAS], indice;
    float total = 0;
    int num = 0;
    for (int i = 1; i <= DIAS; i++)
    {
        printf("Digite a temperatura no dia %d: ", i);
        scanf("%d", &temp[i]);
        if (temp[1] == temp[i])
        {
            indice = temp[1];
        }
        menorTemp(temp[i], indice, i);
        maiorTemp(temp[i], indice, i);
        total = total + temp[i];
        if (i == DIAS)
        {
            float media = mediaTemp(total);
            printf("\nA media das temperaturas foi: %0.2f", media);
        }
        numDias(temp[i], i, total, num);
    }
}