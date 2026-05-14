#include <stdio.h>
#define FUNCIONARIOS 5

int main() {
    int matriz[2][3];
    float final[2] = {0};

    for (int i = 0; i < FUNCIONARIOS; i++) {
        printf("Digite os servicos do funcionario %d\n", i + 1);

        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                printf("\nDigite os servicos de maos: ");
                scanf("%d", &matriz[i][j]);
                final[i] += matriz[i][j] * 15;
            } else if (j == 1) {
                printf("Digite os servicos de pes: ");
                scanf("%d", &matriz[i][j]);
                final[i] += matriz[i][j] * 10;
            } else if (j == 2) {
                printf("Digite os servicos de podologia: ");
                scanf("%d", &matriz[i][j]);
                final[i] += matriz[i][j] * 30;
            }
        }
        final[i] *= 0.5; 
        printf("Salario do funcionario %d: %.2f\n", i + 1, final[i]);
    }
    return 0;
}

