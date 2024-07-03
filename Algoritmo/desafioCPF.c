#include <stdio.h>

int main()
{
    int cpf[11], digito1, digito2, digito3, digito4, digito5, digito6, digito7, digito8, digito9, resto;

    printf("Digite seu cpf: ");
    for (int i = 1; i <= 9; i++)
    {
        scanf("%1d", &cpf[i]);
    }

    digito1 = cpf[9] * 2;
    digito2 = cpf[8] * 3;
    digito3 = cpf[7] * 4;
    digito4 = cpf[6] * 5;
    digito5 = cpf[5] * 6;
    digito6 = cpf[4] * 7;
    digito7 = cpf[3] * 8;
    digito8 = cpf[2] * 9;
    digito9 = cpf[1] * 10;

    int total = digito1 + digito2 + digito3 + digito4 + digito5 + digito6 + digito7 + digito8 + digito9;

    if (total % 11 == 1 || total % 11 == 0)
    {
        cpf[10] = 0;
    }
    else
    {
        resto = total % 11;
        cpf[10] = 11 - resto;
    }

    int digito10 = cpf[10] * 2;
    digito1 = cpf[9] * 3;
    digito2 = cpf[8] * 4;
    digito3 = cpf[7] * 5;
    digito4 = cpf[6] * 6;
    digito5 = cpf[5] * 7;
    digito6 = cpf[4] * 8;
    digito7 = cpf[3] * 9;
    digito8 = cpf[2] * 10;
    digito9 = cpf[1] * 11;

    total = digito10 + digito1 + digito2 + digito3 + digito4 + digito5 + digito6 + digito7 + digito8 + digito9;

    if (total % 11 == 0 || total % 11 == 1)
    {
        cpf[11] = 0;
    }
    else
    {
        resto = total % 11;
        cpf[11] = 11 - resto;
    }

    for (int i = 1; i <= 11; i++)
    {
        printf("%1d", cpf[i]);
    }
}