#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char string[40];
    fp = fopen("texto.txt", "r");

    if(!fp){
        printf("Erro");
        exit(1);
    }

    gets(string);

    for(int i = 0; string[i] != '\0'; i++){
        putc(string[i], fp);
    }
    fclose(fp);
}
