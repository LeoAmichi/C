#include <stdio.h>
#include <stdlib.h>

void Crescente(int numero[5]){
    int i = 0;
    while(i <= 4){
        for(int j = 0; j <= 4; j++){
            if(numero[i] < numero[j + 1]){
                
            }
        }
    i++;
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
    Crescente(numero);
}