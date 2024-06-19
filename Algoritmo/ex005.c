#include <stdio.h>
#include <stdlib.h>
#define PRODUTOS 15

int main()
{
    int preco[15], codigo[15], total, comp, comp_codigo;
    float media;
    total = 0;
    for (int i = 1; i <= PRODUTOS; i++)
    {
        printf("Digite o valor do produto %d: ", i);
        scanf("%d", &preco[i]);
        printf("Digite o codigo do produto %d: ", i);
        scanf("%d", &codigo[i]);
        comp = preco[1];
        comp_codigo = codigo[1];
        if (preco[i] > comp)
        {
            comp = preco[i];
            comp_codigo = codigo[i];
        }
        total = total + preco[i];
    }
    media = total / PRODUTOS;
    printf("%d\n", comp_codigo);
    printf("%0.2f", media);
}