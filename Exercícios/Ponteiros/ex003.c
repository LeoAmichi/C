#include <stdio.h>

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main(){
    int x,y,z;
    scanf("%d%d%d", &x, &y, &z);

    if(x > y || x > z){
        if(y < z){
            troca(&x, &y);
        }
        else{
            troca(&x, &z);
        }
    }
    if(y > z){
        troca(&y, &z);
    }
    printf("\n%d\n%d\n%d\n", x, y, z);
}