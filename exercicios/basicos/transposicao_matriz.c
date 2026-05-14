#include <stdio.h>
#include <stdlib.h>
#define LINHAS 5
#define COLUNAS 5

int main(){
    int matriz[LINHAS][COLUNAS];

    for(int i = 0; i < 1; i++){
        for(int j = 0; j < COLUNAS; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 1; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            matriz[i][j] = i + matriz[i - i][j];
        }
    }

    printf("\nMatriz Resultante: \n");
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}