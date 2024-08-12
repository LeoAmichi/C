#include <stdio.h>

int main()
{
    int n, m;
    printf("Digite a quantidade de linha e colunas: ");
    scanf("%d%d", &n, &m);
    int notas[n][m];

    for (int linha = 0; linha < n; linha++)
    {
        for (int coluna = 0; coluna < m; coluna++)
        {
            scanf("%d", &notas[linha][coluna]);
        }
    }
    printf("\n");
    for (int linha = 0; linha < n; linha++)
    {
        for (int coluna = 0; coluna < m; coluna++)
        {
            printf("%d ", notas[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}