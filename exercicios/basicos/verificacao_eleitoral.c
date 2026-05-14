#include <stdio.h>

int main(){
    int salFixo, vendasCarros;
    char nome[20];
    float total, vendaTotal;
    salFixo = 500;

    printf("Digite o nome do vendedor: ");
    scanf("%s", nome);
    printf("Digite a quantidade de carros vendidos pelo vendedor %s: ", nome);
    scanf("%d", &vendasCarros);
    printf("Digite o valor total de vendas do vendedor %s: ", nome);
    scanf("%f", &vendaTotal);

    vendasCarros *= 50;
    vendaTotal *= (5.0 / 100);
    total = salFixo + vendasCarros + vendaTotal;

    printf("O salario do vendedor %s: %0.3f", nome, total);
    return 0;
}
