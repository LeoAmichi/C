#include <stdio.h>

void troca(int *x, int *y){ // possuem o mesmo endereço de memoria que as variáveis A e B
    int aux = *x; //O ponteiro troca o valor dentro do endereço de memoria das variáveis A e B
    *x = *y;
    *y = aux;
}

int main(){
    int a, b;
    a = 5;
    b = 3;
    troca(&a,&b); //Passa o endereço da memoria como parametro para o ponteiro modificar o valor dentro desse endereço
    printf("a=%d, b=%d", a, b);
    return 0;
}