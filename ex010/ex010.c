#include <stdio.h>
#include <stdlib.h>
#define estudantes 4

int main()
{
    int i, total, nota[estudantes];
    char nome[20];
    for (i = 0; i < estudantes; i++)
    {
        printf("\nNome do aluno: ");
        scanf("%s", &nome);
        printf("Nota do aluno %s: ", nome);
        scanf("%d", &nota[i], "\n");
    }
    printf("\nNotas: ");
    i = 0;
    while (i < estudantes)
    {
        printf("%d ", nota[i]);
        total += nota[i];
        i++;
    }
    printf("\nA media foi de: %d", total / estudantes);
    return 0;
}
