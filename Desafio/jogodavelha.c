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

int Jogador1(char layout[3][3], int numero, int i)
{

    switch (numero)
    {
    case 1:
        if (layout[0][0] == 'X')
        {
            i--;
        }
        else
        {
            layout[0][0] = 'O';
        }
        break;
    case 2:
        if (layout[0][1] == 'X')
        {
            i--;
        }
        else
        {
            layout[0][1] = 'O';
        }
        break;
    case 3:
        if (layout[0][2] == 'X')
        {
            i--;
        }
        else
        {
            layout[0][2] = 'O';
        }
        break;
    case 4:
        if (layout[1][0] == 'X')
        {
            i--;
        }
        else
        {
            layout[1][0] = 'O';
        }
        break;
    case 5:
        if (layout[1][1] == 'X')
        {
            i--;
        }
        else
        {
            layout[1][1] = 'O';
        }
        break;
    case 6:
        if (layout[1][2] == 'X')
        {
            i--;
        }
        else
        {
            layout[1][2] = 'O';
        }
        break;
    case 7:
        if (layout[2][0] == 'X')
        {
            i--;
        }
        else
        {
            layout[2][0] = 'O';
        }
        break;
    case 8:
        if (layout[2][1] == 'X')
        {
            i--;
        }
        else
        {
            layout[2][1] = 'O';
        }
        break;
    case 9:
        if (layout[2][2] == 'X')
        {
            i--;
        }
        else
        {
            layout[2][2] = 'O';
        }
        break;
    }
    i++;
    return i;
}

int Jogador2(char layout[3][3], int numero, int i)
{
    switch (numero)
    {
    case 1:
        if (layout[0][0] == 'O')
        {
            i--;
        }
        else
        {
            layout[0][0] = 'X';
        }
        break;
    case 2:
        if (layout[0][1] == 'O')
        {
            i--;
        }
        else
        {
            layout[0][1] = 'X';
        }
        break;
    case 3:
        if (layout[0][2] == 'O')
        {
            i--;
        }
        else
        {
            layout[0][2] = 'X';
        }
        break;
    case 4:
        if (layout[1][0] == 'O')
        {
            i--;
        }
        else
        {
            layout[1][0] = 'X';
        }
        break;
    case 5:
        if (layout[1][1] == 'O')
        {
            i--;
        }
        else
        {
            layout[1][1] = 'X';
        }
        break;
    case 6:
        if (layout[1][2] == 'O')
        {
            i--;
        }
        else
        {
            layout[1][2] = 'X';
        }
        break;
    case 7:
        if (layout[2][0] == 'O')
        {
            i--;
        }
        else
        {
            layout[2][0] = 'X';
        }
        break;
    case 8:
        if (layout[2][1] == 'O')
        {
            i--;
        }
        else
        {
            layout[2][1] = 'X';
        }
        break;
    case 9:
        if (layout[2][2] == 'O')
        {
            i--;
        }
        else
        {
            layout[2][2] = 'X';
        }
        break;
    }
    i++;
    return i;
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

int main()
{
    char layout[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int numero;
    int i = 0;

    Design(layout);

    while (i < 9)
    {

        printf("Escreva sua jogada J1: ");
        scanf("%d", &numero);

        i = Jogador1(layout, numero, i);

        system("cls");
        Design(layout);

        if (vencedor(layout) == 1)
        {
            system("cls");
            printf("\nJogador 1 Vencedor\n\n");
            Design(layout);
            break;
        }

        // Quem termina é o jogador 1 então quando i == 9 finaliza o loop principal
        if (i == 9)
        {
            Design(layout);
            break;
        }

        printf("Escreva sua jogada J2: ");
        scanf("%d", &numero);

        i = Jogador2(layout, numero, i);

        if (vencedor(layout) == 1)
        {
            system("cls");
            printf("\nJogador 2 Vencedor\n\n");
            Design(layout);
            break;
        }

        system("cls");
        Design(layout);
    }
    
    if (vencedor(layout) == 0)
    {
        system("cls");
        printf(" Empate!\n\n");
        Design(layout);
    }
}