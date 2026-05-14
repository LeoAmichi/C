#include <stdio.h>

int main()
{
    int nota[2];
    float media, total;
    total = 0;
    for (int i = 1; i <= 2; i++)
    {
        printf("Digite a nota da %d avaliacao: ", i);
        scanf("%d", &nota[i]);
        if (nota[i] > 10 || nota[i] < 0)
        {
            printf("Digite uma nota valida");
            i--;
            continue;
        }
        else
        {
            total = total + nota[i];
        }
    }
    media = total / 2;
    printf("A media das avaliacoes: %f", media);
}