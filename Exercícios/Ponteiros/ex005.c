#include <stdio.h>

void funcao(int *p){
    if(p == NULL){
        printf("Valor nao atribuido!");
    }
    else{
        printf("Valor atribuido %d", *p);
    }
}

int main(){
    int *p = NULL;
    int x = 5;
    p = &x;
    funcao(p);
}