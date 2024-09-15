#include <stdio.h>

struct cliente
{
    int codigo;
    char nome[50];
    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;
    int sexo;
};

void imprimir(struct cliente c){
    printf("%d....", c.codigo);
}

int main(){
    struct cliente c;
    scanf("%d", &c.codigo);
    imprimir(c);
}