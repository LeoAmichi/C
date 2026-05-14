#include <stdio.h>

int main(){
    int firstvalue = 5, secondvalue = 15;
    int *p1, *p2;

    p1 = &firstvalue;
    p2 = &secondvalue;

    *p1 = 10;
    *p2 = *p1;
    p1 = p2; //p1 recebe o endereço de p2 (firstvalue recebe o endereço de secondvalue) ou seja p1 recebe o endereço de secondvalue
    *p1 = 20; //secondvalue == 20
    *p2 = 20; //secondvalue == 20 p1 e p2 apontam para o mesmo endereço 


    printf("%d\n", firstvalue);
    printf("%d\n", secondvalue);
}