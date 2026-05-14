#include <stdio.h>

int main(){
    char palavra[30], verificador;
    int count = 0;

    printf("Digite a palavra: ");
    gets(palavra);

    printf("Digite a letra para verificar sua frequencia na palavra: ");
    scanf("%c", &verificador);

    for(int i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == verificador){
            count++;
        }
    }

    printf("\nA letra %c apareceu %d vez(es)", verificador, count);
}