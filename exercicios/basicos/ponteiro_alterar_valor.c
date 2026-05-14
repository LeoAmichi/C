#include <stdio.h>

int contador_string(char *string, int indice){
    if(string[indice] == '\0')
        return 0;
    return 1 + contador_string(string, indice + 1);
}

int main()
{
    char string[40];
    gets(string);
    printf("%d", contador_string(string, 0));
}