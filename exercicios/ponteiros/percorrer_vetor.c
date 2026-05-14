#include <stdio.h>

int main(){
    int firstvalue, secondvalue;
    int *p;

    p = &firstvalue;
    *p = 10;

    p = &secondvalue;
    *p = 20;

    printf("%d", firstvalue);
    printf("\n%d", secondvalue);
}