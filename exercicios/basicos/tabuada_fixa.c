#include <stdio.h>
#include <stdlib.h>

int main (){
    int valor;
    printf("Digite um valor N: ");
    scanf("%d", &valor);
    if(valor >= 1){
        while(valor >= 1){
            printf("\n%d", valor);
            valor--;
        }
    }    
}