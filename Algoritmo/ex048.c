#include <stdio.h>

int main(){
    int y, *p, x;
    y = 0;
    p = &y;
    x = *p; //X é igual a zero
    x = 4; //X é igual a 4
    (*p)++; //Incrementa o ponteiro que aponta para Y, ou seja, Y vale 1
    (*p) += x; //Soma o ponteiro de Y com X
    printf("%d", y);
}