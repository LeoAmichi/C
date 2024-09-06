#include <stdio.h>

int main (){
    int matriz[2][2], i, j, numero[3], totalPrincipal = 1, totalSecundaria = 1;

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(i == j){
                numero[i] = matriz[i][j];
            }
        }
        totalPrincipal *= numero[i];
    }

    
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            if(i + j == 1){
                numero[i] = matriz[i][j];
            }
        }
        totalSecundaria *= numero[i];
    }

    int total = totalPrincipal - totalSecundaria;

    printf("Determinante: %d", total);
    
 }