#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somaHorizontal[3], somaVertical[3], somaPrincipal, somaSecundaria = 0;
    int matriz[3][3] = {8, 0, 7, 4, 5, 6, 3, 10, 2};

     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Verificar Horizontal
    for (int i = 0; i < 3; i++)
    {
        somaHorizontal[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            somaHorizontal[i] += matriz[i][j];
        }
    }

    // Verificar Vertical
    for (int j = 0; j < 3; j++)
    {
        somaVertical[j] = 0;
        for (int i = 0; i < 3; i++)
        {
            somaVertical[j] += matriz[i][j];
        }
    }

    // Verificar Diagonal Principal
    somaPrincipal = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                somaPrincipal += matriz[i][j];
        }
    }

    // Verificar Diagonal Secundaria
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2)
                somaSecundaria += matriz[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        if (somaVertical[i] == somaHorizontal[i] && somaVertical[i] == somaPrincipal && somaPrincipal == somaSecundaria)
            count++;
    }

    if (count == 3)
        printf("\nMatriz Magica");
    else
        printf("\nNao e matriz Magica");
}