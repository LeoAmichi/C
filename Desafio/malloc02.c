#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numeros, num;
    float media = 0;
    printf("Digite o tamanho do vetor num: ");
    scanf("%d", &num);
    int numeros[num];

    numeros = (int *) malloc(num * sizeof(int));

    for(int i = 0; i < num; i++){
        scanf("%d", &numeros[i]);
        media+= numeros[i];
    }
    media /= num;
    printf("%.2f", media);

    free(numeros);
}