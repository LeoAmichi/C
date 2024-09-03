#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#define ELEMENTOS 5

int main(){
    int vetor[ELEMENTOS];
    srand(time(NULL));

    scanf("%d", &vetor[4]);

    for(int i = 0; i < ELEMENTOS - 1; i++){
        vetor[i] = rand() % 11;

        while(vetor[i] == vetor[i - 1]){
            vetor[i] = rand() % 11;
        }
    }

    for(int i = 0; i < ELEMENTOS; i++){
        for(int j = 0; j < ELEMENTOS - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                int auxiliar = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = auxiliar;
            }
        }
    }

    printf("\nOrdem Crescente: ");
    for(int i = 0; i < ELEMENTOS; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}