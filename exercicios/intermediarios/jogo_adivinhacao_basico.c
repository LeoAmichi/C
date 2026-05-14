#include <stdio.h>
#define NUMERO_TENTATIVAS 3

int main()
{
    for (int i = 0; i < NUMERO_TENTATIVAS; i++)
    {
    int chute, numerosecreto;
    numerosecreto = 7;
    printf("Qual o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);
        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos\n");
            i--;
            continue;
        }
        int acertou = chute == numerosecreto;
        if (acertou)
        {
            printf("Parabens! Voce acertou!\n");
            break;
        }
        int maior = chute > numerosecreto;
        if (maior)
        {
            printf("Seu chute foi maior do que o numero secreto!\n");
            printf("Qual o seu chute? ");
            scanf("%d", &chute);
            printf("Seu chute foi %d\n", chute);
        }
        else
        {
            printf("Seu chute foi menor do que o numero secreto!\n");
            printf("Qual o seu chute? ");
            scanf("%d", &chute);
            printf("Seu chute foi %d\n", chute);
        }
    }
}

