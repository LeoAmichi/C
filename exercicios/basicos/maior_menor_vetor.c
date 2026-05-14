#include <stdio.h>
#include <stdlib.h>

int Busca(int verificador, int numero[5]){
    int total = 0;
     for(int i = 0; i < 5; i++){
        if(verificador == numero[i]){
            total++;
        }
    }
    return total;
}

int main(){
    //Entrada de Dados
    int numero[5], verificador;

    //Leitura
    for(int i = 0; i < 5; i++){
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numero[i]);
    }
    printf("Digite o valor para verificar quantas vezes ele aparece: ");
    scanf("%d", &verificador);
    
    printf("O numero %d aparece %d vez(es)", verificador, Busca(verificador, numero));
    return 0;
}
