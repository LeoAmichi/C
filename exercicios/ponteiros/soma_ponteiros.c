#include <stdio.h>

int main(){
    int y, *p, x;
    y = 0; //Váriavel y = 0
    p = &y; //  P aponta para Y e recebe endereço da variável y
    x = *p; // X recebe o valor de Y (é igual ao valor do ponteiro)
    x = 4; // X é igual a 4
    (*p)++; // Y = 0 incrementa == 1
    (*p) += x; // Y = 1 + 4

    printf("y = %d\n", y);
}