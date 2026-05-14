#include <stdio.h>
#define ELEMENTOS 10

int main(){
    int numero[ELEMENTOS], count = 0;

    for(int i = 0; i < ELEMENTOS; i++){
        scanf("%d", &numero[i]);
    }

    for(int i = 0; i < ELEMENTOS; i++){
        for(int j = 0; j < ELEMENTOS - 1; j++){
            if(numero[j] > numero[j + 1]){

                //BUBBLE SORT:
                int auxiliar = numero[j]; // auxiliar == maior
                numero[j] = numero[j + 1]; // maior == menor
                numero[j + 1] = auxiliar; // menor == maior
                count++;
            }
        }
    }

    printf("\n\nOrdem Crescente: ");
    for(int i = 0; i < ELEMENTOS; i++){
        printf("%d ", numero[i]);
    }
    printf("\n\nBubble Sort: %d", count);
}