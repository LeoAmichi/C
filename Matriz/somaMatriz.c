#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int a[3][3], b[3][3], c[3][3];
    int i, j, m, n;
    printf("Digite as dimensões da matriz n m: ");
    scanf("%d%d", &n, &m);

    printf("Digite os elementos de A, linha a linha: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Digite os elementos de B, linha a linha: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // somar na matric C
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("A soma das matrizes e: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}