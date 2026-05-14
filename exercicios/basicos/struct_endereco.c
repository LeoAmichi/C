#include <stdio.h>

typedef struct cep
{
    char rua[20];
    char cep[20];
    char estado[20];
} tipo_endereco;

typedef struct user
{
    char nome[20];
    int telefone;
    char sexo;
    long int cpf;
    tipo_endereco endereco;
} tipo_cadastro;

int main()
{
    int i = 0, aux = 0;
    printf("Digite o numero de funcionarios: ");
    scanf("%d", &i);
    getchar();
    tipo_cadastro cadastro[i];
    while (aux < i)
    {
        gets(cadastro[i].endereco.cep);
        aux++;
    }

    for(int j = 0; j < i; j++)
        printf("%d: %s\n", j + 1, cadastro[j].endereco.cep);
}