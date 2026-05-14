#include <stdio.h>

int main() {
    int var = 15;
    int *ptr;

    ptr = &var;

    printf("Endereço de var: %p\n", &var);
    printf("Valor de ptr: %p\n", ptr);
    printf("Endereço de ptr: %p\n", &ptr);
    printf("Valor de var: %d\n", var);
    printf("Valor apontado por ptr: %d\n", *ptr);
    scanf("%d", ptr);

    return 0;
}
