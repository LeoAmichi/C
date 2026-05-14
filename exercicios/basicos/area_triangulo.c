#include <stdio.h>

int main() {
    int alunos, notas[alunos];
    float total, media;
    total = 0;
    printf("Digite o numero de alunos na sala: ");
    scanf("%d", &alunos);
    for(int i = 1; i <= alunos; i++){
        printf("Digite a nota do aluno %d: ", i);
        scanf("%d", &notas[i]);
        total = total + notas[i];
    }
    media = total / alunos;
    printf("A media das notas: %f", media);
}