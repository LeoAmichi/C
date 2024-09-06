#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num = 12.45;
    int ganhou = 0;
    int tentativas = 1;
    int chute;
    int numerosecreto = 7;
    int pontos = 100; 
    while (!ganhou)
    {
        printf("\nDigite seu %do chute: ", tentativas);
        scanf("%d", &chute);
        if (chute < 0)
        {
            printf("Nao pode chutar numeros negativos");
            continue;
        }
        int acertou = chute == numerosecreto;
        if (acertou)
        {
            printf("Voce chutou o numero: %d", chute);
            printf("\nParabens voce acertou o numero");
            printf("\nPontos: %d", pontos);
            ganhou = 1;
        }
        else
        {
            if (chute < numerosecreto)
            {
                printf("O numero e menor que o numero secreto");
            }
            if (chute > numerosecreto)
            {
                printf("O numero e maior que o numero secreto");
            }
        }
        int pontosperdidos = abs(chute - numerosecreto) / 2;
        pontos = abs(pontos - pontosperdidos);
        tentativas++;
    }
}