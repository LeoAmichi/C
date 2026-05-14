#include <stdio.h>
#define TAMANHO 10

int maior_recursivo(int *vetor, int tamanho){

    if(tamanho == 1){
        return vetor[0];
    }

    int maior_subarray = maior_recursivo(vetor, tamanho - 1);

    if(vetor[tamanho - 1] > maior_subarray)
        return vetor[tamanho - 1];
    else
        return maior_subarray;
}

int main()
{
    int vetor[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
        vetor[i] = i + 1;

    int maior = maior_recursivo(vetor, TAMANHO);
    printf("maior: %d", maior);
}