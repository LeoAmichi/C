#include <stdio.h>
#define MAX_NOME 60
#define MASCULINO 0
#define CLIENTES 3

struct cliente
{
    int codigo;
    char nome[MAX_NOME];
    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;
    int sexo;
    char cpf[11];
};

void imprimir(struct cliente c)
{
    system("cls");
    printf("\nNome: %s", c.nome);
    if (c.sexo == 0)
        printf("\nSexo: Masculino");
    else
        printf("\nSexo: Feminino");

    printf("\nCpf: %s", c.cpf);
    printf("\nCodigo: %d", c.codigo);
    printf("\nNascimento: %d/%d/%d", c.dia_nascimento, c.mes_nascimento, c.ano_nascimento);
}

int main()
{
    struct cliente c[CLIENTES];
    int n;

    printf("Digite o numero de clientes a serem lidos: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        c[i].codigo = i + 1;

        printf("Digite seu nome: ");
        scanf("%s", c[i].nome);

        printf("Digite seu dia, mes e ano de nascimento: ");
        scanf("%d%d%d", &c[i].dia_nascimento, &c[i].mes_nascimento, &c[i].ano_nascimento);

        printf("Digite seu sexo 0-Masculino 1-Feminino: ");
        scanf("%d", &c[i].sexo);

        printf("Digite seu CPF: ");
        scanf("%s", c[i].cpf);
        system("cls");
    }

    int verificador;
    for (int i = 0; i < n; i++)
    {
        printf("\n%d- %s", i, c[i].nome);
    }
    printf("\nDigite qual usuario: ");
    scanf("%d", &verificador);
    imprimir(c[verificador]);

    return 0;
}
