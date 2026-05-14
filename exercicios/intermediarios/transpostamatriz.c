#include <stdio.h>

int main(){
    int m, n;
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d%d", &n, &m);
    int a[n][m];

    //ler a matriz A
    for(int linha = 0; linha < n; linha++){
        for(int coluna = 0; coluna < m; coluna++){
            scanf("%d", &a[linha][coluna]);
        }
    }

    //transformar numero de linha em numero de coluna vice versa
    int b[m][n];
     for(int coluna = 0; coluna < n; coluna++){
        for(int linha = 0; linha < m; linha++){
            printf("%d ", b[coluna][linha]);
        }
    }
}