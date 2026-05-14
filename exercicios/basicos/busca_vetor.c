#include <stdio.h>
#include <stdlib.h>

int Crescente(int numero, int verificador){
    
    if(numero > verificador){
        int aux = numero;
        numero = verificador;
        verificador = aux;
    }

}

int main(){
    int numero[5], verificador;
    
    for(int i = 0; i < 4; i++){
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numero[i]);
    }
    printf("O numero verificador: ");
    scanf("%d", &verificador);
    numero[4] = verificador;
    for(int i = 0; i < 4; i++){
        numero[i] = Crescente(numero);
    }
    
}