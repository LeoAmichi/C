#include <stdio.h>

int main(){
    int x = 3;
    char c  ='a';
    int y[3] = {1, 2, 3};
    int * p;

    p = &x; // recebe o endereço da variável X 
    printf("%d", *p);
    return 0;
}