#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[20];
    int i;

    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++){
        string[i] +=  32;
    }
    string[i] = '\0';

    for(int i = 0; string[i] != '\0'; i++){
        printf("%c", string[i]);
    }
}