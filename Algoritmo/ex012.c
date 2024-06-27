#include <stdio.h>

int main()
{
    int num[5], indiceMaior, indiceMenor;
    indiceMaior = 0;
    indiceMenor = 0;
    printf("Digite o numero 1: ");
    scanf("%d", &num[0]);
    indiceMaior = num[0];
    indiceMenor = num[0];
    for (int i = 1; i <= 4; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &num[i]);
        if (num[i] > indiceMaior)
        {
            indiceMaior = num[i];
        }
        else if (num[i] < indiceMenor)
        {
            indiceMenor = num[i];
        }
    }
    printf("O maior numero da sequencia: %d", indiceMaior);
    printf("\nO menor numero da sequencia: %d", indiceMenor);
}