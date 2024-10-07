#include <stdio.h>
#define TAMANHO 10

int procurar(int *vetor, int tamanho, int numero, int indice){
    if(indice >= tamanho)
        return 0;
    else if(vetor[indice] == numero){
        return indice;
    }
    else{
        return procurar(vetor, tamanho, numero, indice + 1);
    }
}

int main()
{
    int numero, vetor[TAMANHO];

    for (int i = 0; i < TAMANHO; i++)
        vetor[i] = i + 1;

    scanf("%d", &numero);
    printf("O indice achado foi: %d", procurar(vetor, TAMANHO, numero, 0));
}