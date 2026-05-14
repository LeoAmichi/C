#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int peguePosicao(int num, int pos){
    int valor = 0, pot;
    pot = pow(10,pos);
    valor = num % pot;
    if(pos != 1){
        valor = valor / (pot / 10);
    }
    return valor;
}

int main(){
    printf("%d", peguePosicao(123456789, 4));
    return 0;
}

