#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct item
{
    char nome[50];
    int estoque;
    float preco;
    int nivelSeguranca;
};


int ValorEstoque(int estoque, int preco){
    int valor = estoque * preco;
    return valor;
}

void VerificarSeguranca(int estoque, int nivelSeguranca){
    if(estoque < nivelSeguranca){
        printf("Reposicao necessaria de estoque\n");
    }
}

int main(){

    int i = 0, valorFinal = 0;
    char verificador;
    struct item produto;

    printf("Bem vindo a nossa loja\n");
    printf("Digite o nivel de seguranca para o estoque: ");
    scanf("%d", &produto.nivelSeguranca);

    while(true){

        //Entrada de Dados
        printf("\nDigite o nome do produto %d: ", i + 1);
        scanf("%s", produto.nome);
        printf("Digite a quantidade em estoque desse produto: ");
        scanf("%d", &produto.estoque);
        printf("Digite o preco unitario: ");
        scanf("%f", &produto.preco);

        //Estoque
        valorFinal += ValorEstoque(produto.estoque, produto.preco);

        //Seguranca
        VerificarSeguranca(produto.estoque, produto.nivelSeguranca);
        printf("Deseja continuar adicionando produtos? N/Y: ");

        //Adicionar mais produtos
        scanf(" %c", &verificador);
        if(verificador == 'N'){
            break;
        }
        printf("\n");
    }
    printf("\nO valor total em estoque: %d", valorFinal);
    return 0;
}