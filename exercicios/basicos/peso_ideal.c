#include <stdio.h>

int main() {
    int hamb, refrig, milk;
    float fritas, chesse, total;
    printf("Digite a quantidade de hamburguer consumido: ");
    scanf("%d", &hamb);
    printf("Digite a quantidade de cheeseburguer consumido: ");
    scanf("%f", &chesse);
    printf("Digite a quantidade de fritas consumido: ");
    scanf("%f", &fritas);
    printf("Digite a quantidade de refrigerante consumido: ");
    scanf("%d", &refrig);
    printf("Digite a quantidade de milkshake consumido: ");
    scanf("%d", &milk);

    hamb *= 3;
    chesse *= 2.5;
    fritas *= 2.5;
    refrig *= 1;
    milk *= 3;

    total = hamb + chesse + fritas + refrig + milk;

    printf("O total da conta final: %0.3f", total);
}