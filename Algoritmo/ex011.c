#include <stdio.h>

int calculo(int valor)
{
    float final;
    if (valor <= 1500)
    {
        final = (valor * 3) / 100;
    }
    else if (valor > 1500){
        final = (valor * 5) / 100;
    }
    return final;
}

int main()
{
    int salFixo, valorVendas[3], resultado;
    printf("Digite o salario fixo dos vendedores: ");
    scanf("%d", &salFixo);
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o valor das vendas do vendendor %d: ", i);
        scanf("%d", &valorVendas[i]);
        resultado = calculo(valorVendas[i]) + salFixo;
        printf("O salario total do vendendor %d: %d",i, resultado);
        printf("\n");
    }
}