#include <stdio.h>
#include <stdlib.h>

void Design(char layout[3][3])
{

    printf("  %c | %c | %c \n", layout[0][0], layout[0][1], layout[0][2]);
    printf("----|---|----\n");
    printf("  %c | %c | %c \n", layout[1][0], layout[1][1], layout[1][2]);
    printf("----|---|----\n");
    printf("  %c | %c | %c \n", layout[2][0], layout[2][1], layout[2][2]);
    printf("----|---|----\n");
}

void Jogador1(char layout[3][3], int numero)
{

    switch (numero)
    {
    case 1:
        if (layout[0][0] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[0][0] = 'O';
        break;
    case 2:
        if (layout[0][1] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[0][1] = 'O';
        break;
    case 3:
        if (layout[0][2] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[0][2] = 'O';
        break;
    case 4:
        if (layout[1][0] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[1][0] = 'O';
        break;
    case 5:
        if (layout[1][1] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[1][1] = 'O';
        break;
    case 6:
        if (layout[1][2] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[1][2] = 'O';
        break;
    case 7:
        if (layout[2][0] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[2][0] = 'O';
        break;
    case 8:
        if (layout[2][1] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[2][1] = 'O';
        break;
    case 9:
        if (layout[2][2] == 'X')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[2][2] = 'O';
        break;
    }
}

void Jogador2(char layout[3][3], int numero)
{
    switch (numero)
    {
    case 1:
        if (layout[0][0] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[0][0] = 'X';
        break;
    case 2:
        if (layout[0][1] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[0][1] = 'X';
        break;
    case 3:
        if (layout[0][2] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[0][2] = 'X';
        break;
    case 4:
        if (layout[1][0] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[1][0] = 'X';
        break;
    case 5:
        if (layout[1][1] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[1][1] = 'X';
        break;
    case 6:
        if (layout[1][2] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[1][2] = 'X';
        break;
    case 7:
        if (layout[2][0] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[2][0] = 'X';
        break;
    case 8:
        if (layout[2][1] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[2][1] = 'X';
        break;
    case 9:
        if (layout[2][2] == 'O')
        {
            printf("Jogada Invalida");
            break;
        }
        layout[2][2] = 'X';
        break;
    }
}

int vencedor(char layout[3][3])
{

    int auxiliar = 0;

    // Diagonal Principal
    if (layout[0][0] == layout[1][1] && layout[0][0] == layout[2][2])
    {
        auxiliar = 1;
    }

    // Diagonal Secundaria
    if (layout[0][2] == layout[1][1] && layout[0][2] == layout[2][0])
    {
        auxiliar = 1;
    }

    // Horizontal
    else if (layout[0][0] == layout[0][1] && layout[0][0] == layout[0][2])
    {
        auxiliar = 1;
    }
    else if (layout[1][0] == layout[1][1] && layout[1][0] == layout[1][2])
    {
        auxiliar = 1;
    }
    else if (layout[2][0] == layout[2][1] && layout[2][0] == layout[2][2])
    {
        auxiliar = 1;
    }

    // Vertical
    else if (layout[0][0] == layout[1][0] && layout[0][0] == layout[2][0])
    {
        auxiliar = 1;
    }
    else if (layout[0][1] == layout[1][1] && layout[0][1] == layout[2][1])
    {
        auxiliar = 1;
    }
    else if (layout[0][2] == layout[1][2] && layout[0][2] == layout[2][2])
    {
        auxiliar = 1;
    }
    return auxiliar;
}

void sobrescrever(char layout[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (layout[i][j] == 'X' || layout[i][j] == 'O')
            {
                printf("Escolha outra casa");
            }
        }
    }
}
int main()
{
    char layout[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int numero;
    int i = 1;

    Design(layout);

    while (i <= 8)
    {

        printf("Escreva sua Jogada J1: ");
        scanf("%d", &numero);
        Jogador1(layout, numero);

        if (vencedor(layout) == 1)
        {
            printf("Jogador 1 Vencedor\n\n");
            Design(layout);
            break;
        }

        system("cls");
        Design(layout);
        i++;

        printf("Escreva sua Jogada J2: ");
        scanf("%d", &numero);
        Jogador2(layout, numero);

        if (vencedor(layout) == 1)
        {
            printf("Jogador 2 Vencedor\n\n");
            Design(layout);
            break;
        }
        system("cls");
        Design(layout);
        i++;
    }
    if (vencedor(layout) == 0)
    {
        printf("Empate!");
    }
}