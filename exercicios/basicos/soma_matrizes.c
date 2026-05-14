#include <stdio.h>
#include <stdlib.h>
#define ELEMENTOS 10

int main()
{
    int matriz[ELEMENTOS][ELEMENTOS];

    for (int i = 0; i < ELEMENTOS; i++)
    {
        for (int j = 0; j < ELEMENTOS; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < ELEMENTOS; i++)
    {
        for (int j = 0; j < ELEMENTOS; j++)
        {
            if (i == j)
            {
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}