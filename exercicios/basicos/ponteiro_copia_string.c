#include <stdio.h>

void strCopy(char *origem, char *destino)
{
    while(*origem){
        *origem = *destino;
        origem++;
        destino++;
    }
    *destino = '\0';
}

int main()
{
    char string1[20], string2[20];
    gets(string1);
    gets(string2);
    strCopy(string1, string2);
    printf("%s", string1);
}