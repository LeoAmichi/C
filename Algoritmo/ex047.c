#include <stdio.h>

int main(){
    int firstvalue, secondvalue;
    int *mypointer;
    mypointer = &firstvalue;
    *mypointer = 10; //firstvalue value é igual a 10
    mypointer = &secondvalue;
    *mypointer = 20; //firstvalue value é igual a 20
    printf("%d\n", firstvalue);
    printf("%d", secondvalue);
}