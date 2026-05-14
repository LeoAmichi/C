#include <stdio.h>

float votoBranco(int votosTotais, int votos)
{
    float resultado;
    resultado = (votos * 100) / votosTotais;
    return resultado;
}

int main()
{
    int votosTotais, branco, nulos, validos;
    printf("Digite o numero total de votos: ");
    scanf("%d", &votosTotais);
    printf("Digite o numero de votos brancos: ");
    scanf("%d", &branco);
    printf("Digite o numero de votos nulos: ");
    scanf("%d", &nulos);
    printf("Digite o numero de votos validos: ");
    scanf("%d", &validos);

    printf("O total em porcentagem de votos brancos: %0.2f", votoBranco(votosTotais, branco));
    printf("\nO total em porcentagem de votos nulos: %0.2f", votoBranco(votosTotais, nulos));
    printf("\nO total em porcentagem de votos validos: %0.2f", votoBranco(votosTotais, validos));
}