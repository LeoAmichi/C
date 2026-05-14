#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10], soma = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    printf("O somatorio do vetor: %d", soma);

    printf("\nO vetor esta alterado e o resultado e: \n");
    for(int i = 0; i < 10; i++){
        vetor[i] += soma;
        printf("%d\n", vetor[i]);
    }

    int verificador = 0;
    printf("Se deseja voltar ao vetor normal digite 1: ");
    scanf("%d", &verificador);

    if(verificador == 1){
        for(int i = 0; i < 10; i++){
        vetor[i] -= soma;
        printf("%d\n", vetor[i]);
        }
    }
}