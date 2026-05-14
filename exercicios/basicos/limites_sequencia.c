#include <stdio.h>

int main()
{
    int num[100], finalMaior, finalMenor;
    for (int i = 1; i <= 20; i++)
    {
        printf("Digite o numero %d: ", i);
        scanf("%d", &num[i]);
        if (num[1] == num[i])
        {
            finalMaior = num[1];
            finalMenor = num[1];
        }
        if (num[i] > finalMaior)
        {
            finalMaior = num[i];
        }
        else if (num[i] < finalMenor)
        {
            finalMenor = num[i];
        }
    }
    printf("O maior numero da sequencia: %d", finalMaior);
    printf("\nO menor numero da sequencia: %d", finalMenor);
}