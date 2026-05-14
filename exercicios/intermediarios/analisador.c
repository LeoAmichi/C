#include <stdio.h>

int main()
{
    char string[20];
    int indice;
    int numero = 1;
    printf("Digite a string: ");
    scanf("%s", string);
    for(int i = 0; i < 20; i++){
        indice = 1;
        numero = 1;
        while(indice < 20){
           if(string[i] == string[i + indice]){
               numero++;
               string[i + indice] = '\0';
           }
           indice++;
       }
        if(string[i] == '\0'){
            break;
        }
    printf("%c: %d\n", string[i], numero);
    }
}
