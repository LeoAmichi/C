#include <stdio.h>

int main(){
    int x[3] = {1,2,3};
    int *p[3];

    p[0] = &x[1];
    *p[0] = 1;

    printf("%d", x[0]);
}