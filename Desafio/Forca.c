#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

int pontos(char *string, int chute)
{
    int pontos = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (chute == string[i])
        {
            pontos++;
        }
    }
    return pontos;
}

void layout(char *string, char chute, char *progresso)
{

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (chute == string[i])
        {
            progresso[i] = chute; // Atualiza com o chute correto
        }
    }

    printf("%s\n", progresso);
}

char *sortear(int random)
{
    // Array de palavras
    static char palavra[50][40] = {
        "repolho", "rabanete", "amora", "ovo", "alface", "queijo", "aveia", "peixe", "cereja", "mirtilo",
        "polvo", "rinoceronte", "vaca", "gorila", "crocodilo", "foca", "lobo", "coelho", "rato", "girafa",
        "laranja", "preto", "violeta", "branco", "rosa", "verde", "vermelho", "amarelo", "laranja", "cinza",
        "praia", "cinema", "ferida", "quarto", "martelo", "lagartixa", "coruja", "cachorro", "pedra", "lata",
        "sogra", "primo", "cunhado", "unha", "corpo", "dente", "osso", "costas", "pele", "olhos"};
    return palavra[random];
}

int main()
{
    srand(time(NULL));
    char string[5][40], chute, progresso[5][40];
    int random[5], i, count[5] = {0}, pontosRodada = 0, totalLetras = 0, letrasAcertadas = 0;

    // sortear um número inteiro para buscar no array de palavras
    for (i = 0; i < 5; i++)
    {
        random[i] = rand() % 50;
    }

    // verificação para nao repetir palavras no jogo
    for (i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            while (random[i] == random[j])
            {
                random[i] = rand() % 10;
            }
        }
    }

    // usando os numeros aleatorios como parametros da função sortear para retornar uma palavra aleatoria e copiar para as palavras do jogo
    for (int i = 0; i < 5; i++)
        strcpy(string[i], sortear(random[i]));

    for (int i = 0; i < 5; i++)
    {
        int j = 0;
        while (string[i][j] != '\0')
        {
            progresso[i][j] = '-';
            j++;
        }
        progresso[i][j] = '\0'; // Adiciona o terminador nulo ao final
    }

    // contador de caracteres de cada palavra sorteada
    for (int i = 0; i < 5; i++)
    {
        int j = 0;
        while (string[i][j] != '\0')
        {
            count[i]++;
            j++;
        }
        totalLetras += count[i]++;
    }

    printf("\nBem-Vindo ao Jogo da Forca");
    printf("\nAqui abaixo estao as palavras ocultadas \n");
    for(int i = 0; i < 5; i++)
        layout(string[i], chute, progresso[i]);

    while (true)
    {
        pontosRodada = 0;
        printf("\nDigite a letra para tentar advinhar: ");
        scanf(" %c", &chute);
        system("cls");
        //imprimir o layout atualizado
        for (int i = 0; i < 5; i++)
            layout(string[i], chute, progresso[i]);

        for (int i = 0; i < 5; i++)
            pontosRodada += pontos(string[i], chute);
        
        letrasAcertadas += pontosRodada;
        printf("%d\n", letrasAcertadas);
        printf("%d", totalLetras);
        
        if (letrasAcertadas == totalLetras){
            printf("Você Venceu");
            break;
        }
           
    }
    return 0;
}
