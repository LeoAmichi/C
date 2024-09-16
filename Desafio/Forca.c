#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

void boneco(int chances)
{
    printf("\n");
    switch (chances)
    {
    case 1:
        // Cabeça
        printf(" O\n");
        break;
    case 2:
        // Cabeça e tronco
        printf(" O\n");
        printf(" |\n");
        break;
    case 3:
        // Cabeça, tronco e braços
        printf(" O\n");
        printf(" |\\\n");
        break;
    case 4:
        // Cabeça, tronco, braços e pernas
        printf("  O\n");
        printf(" /|\\\n");
        break;
    case 5:
        // Cabeça, tronco, braços, pernas e base
        printf("  O\n");
        printf(" /|\\\n");
        printf(" / \n");
        break;
    case 6:
        // Bonequinho completo
        printf("  O\n");
        printf(" /|\\\n");
        printf(" / \\\n");
        break;
    default:
        break;
    }
}

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
    char string[5][40], chute, progresso[5][40], letras_usadas[26];
    int random[5], i, count[5] = {0}, pontosRodada = 0, totalLetras = 0, letrasAcertadas = 0, chances = 0;

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
    for (int i = 0; i < 5; i++)
        layout(string[i], chute, progresso[i]);

    int j = 0;
    while (true)
    {
        pontosRodada = 0;
        if (chances == 6)
        {
            system("cls");
            for (int i = 0; i < 5; i++)
            {
                printf("%s\n", string[i]);
            }
            boneco(chances);
            printf("\nDerrota");
            break;
        }

        printf("\n\nDigite a letra para tentar advinhar: ");
        scanf(" %c", &chute);
        system("cls");
        // imprimir o layout atualizado
        for (int i = 0; i < 5; i++)
            layout(string[i], chute, progresso[i]);

        for (int i = 0; i < 5; i++)
            pontosRodada += pontos(string[i], chute);

        chances++;
        if (pontosRodada > 0)
            chances--;
        boneco(chances);

        letrasAcertadas += pontosRodada;

        letras_usadas[j] = chute;
        letras_usadas[j + 1] = '\0';
        printf("\nLetras usadas: ");
        for (int i = 0; letras_usadas[i] != '\0'; i++)
            printf("%c ", letras_usadas[i]);

        if (letrasAcertadas == totalLetras)
        {
            printf("\n\nVencedor");
            break;
        }

        j++;
    }
    return 0;
}
