#include <stdio.h>

int precoUnitario(int quantidade, int preco_unitario){
    return quantidade * preco_unitario;
}

int desconto(int quantidade, int preco_unitario){
    int total = precoUnitario(quantidade, preco_unitario);
    if(quantidade > 10){
        total = total - total * 1/10;
    }
    else if(quantidade > 5 && quantidade <= 10){
        total = total - total * 5/100;
    }
    return total;
}



int main(){
    int quantidade, preco_unitario;
    printf("Digite a quantidade de produtos comprados: ");
    scanf("%d", &quantidade);
    printf("Digite o preco unitario de cada produto: ");
    scanf("%d", &preco_unitario);
    printf("%d", desconto(quantidade, preco_unitario));
}