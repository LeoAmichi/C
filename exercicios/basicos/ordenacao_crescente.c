#include <stdio.h>

int main()
{
    char string[100], count = 0, palavra = 1;

    gets(string);

    // Verificar Quantas Letras
    for (int i = 0; string[i] != '\0'; i++)
    {

        // Considerar Espaço
        if (string[i] == ' ')
        {
            count--;
            palavra++;
        }

        // Numeros tabela ASCII
        if ((int)string[i] >= 48 && (int)string[i] <= 57)
        {
            count--;
        }

        // Não Cosniderar Simbolos
        if ((int)string[i] >= 33 && (int)string[i] <= 47)
        {
            count--;
        }

        if((int)string[i] == 0){
            count = 0;
            palavra = 0;
            break;
        }
        count++;
    }

        int total = count / palavra;

        if(total == 0){
            printf("\nDificuldade 0pts");
        }
        else if (total > 0 && total <= 3)
        {
            printf("\nDificuldade: 250pts");
        }

        else if (total == 4 || total == 5)
        {
            printf("\nDificuldade: 500pts");
        }

        else if (total > 6)
        {
            printf("\nDificuldade: 1000pts");
        }

        printf("\n\nTotal: %d\n", total);
        printf("Palavra: %d\n", palavra);
        printf("Count: %d\n", count);
}