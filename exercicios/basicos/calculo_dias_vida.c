#include <stdio.h>

int main()
{
    int dias, meses, anos;
    printf("Digite o dia do seu aniversario: ");
    scanf("%d", &dias);
    printf("Digite o mes do seu aniversario: ");
    scanf("%d", &meses);
    printf("Digite o ano do seu aniversario: ");
    scanf("%d", &anos);

    anos = 2024 - anos;
    anos = anos * 365;
    meses = meses * 30;
    dias = dias + anos + meses;

    printf("Voce viveu %d dias", dias);
}