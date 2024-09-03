#include <stdio.h>
#include <stdlib.h>

float Irrf(float salBase, float bonus){
    int salBruto = salBase + bonus;
    salBruto -= (salBruto * 15/100);
    return salBruto;
}

float SalLiquido(float salBruto, float descontos){
    int salLiquido = salBruto - descontos;
    return salLiquido;
}

void Relatorio(char nome[50], float bonus, float descontos, float salLiquido, float salBruto, float salBase){
    float irrf = (salBase + bonus) * 15/100;

    printf("\nNome: %s\n", nome);
    printf("Bonus: %.2f\n", bonus);
    printf("Descontos: %.2f\n", descontos);
    printf("IRRF: %.2f\n", irrf);
    printf("Salario Liquido: %.2f\n", salLiquido);
    printf("Salario Bruto: %.2f\n\n", salBruto);
}

int main(){
    int funcionarios, i;
    float salBase, bonus, descontos, salBruto, salLiquido;
    char nome[50];
    i = 0;

    printf("Digite a quantidade de funcionarios: ");
    scanf("%d", &funcionarios);

    while(i < funcionarios){

        //Entrada de Dados
        printf("Digite o nome do funcionario: ");
        scanf("%s", nome);
        printf("Digite seu salario base: ");
        scanf("%f", &salBase);
        printf("Digite seu bonus: ");
        scanf("%f", &bonus);
        printf("Digite seu desconto: ");
        scanf("%f", &descontos);

        //Cálculo
        salBruto = Irrf(salBase, bonus);
        salLiquido = SalLiquido(salBruto, descontos);

        //Exibir Relatório
        Relatorio(nome, bonus, descontos, salLiquido, salBruto, salBase);
        i++;
    }
    return 0;
}