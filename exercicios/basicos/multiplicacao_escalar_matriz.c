#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tabela[5][3]; // linhas = funcionarios || coluna = serviços
    int valor = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Funcionario %d\n\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                printf("Pes:\n");
                printf("Digite quantas vezes realizado: ");
                scanf("%d", &tabela[i][j]);
                valor += tabela[i][j] * 10;
            }
            else if (j == 1)
            {
                printf("Maos:\n");
                printf("Digite quantas vezes realizado: ");
                scanf("%d", &tabela[i][j]);
                valor += tabela[i][j] * 15;
            }
            else if (j == 2)
            {
                printf("Podologia:\n");
                printf("Digite quantas vezes realizado: ");
                scanf("%d", &tabela[i][j]);
                valor += tabela[i][j] * 30;
            }
        }
        valor = valor * 0.5;
        printf("O salario mensal do funcionario %d foi: %d\n\n", i + 1, valor);
    }
}