#include <stdio.h>

//Soma Recursiva

int soma_recursiva(int *s, int indice)
{
    if(indice < 0)
        return 0;
    return s[indice] + soma_recursiva(s, indice - 1);
}
int main()
{
    int tamanho;
    scanf("%d", &tamanho);
    int soma[tamanho];

    for(int i = 0; i < tamanho; i++){
        soma[i] = i + 1;
    }

    printf("A soma recursiva: %d", soma_recursiva(soma, 9));
}