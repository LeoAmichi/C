#include <stdio.h>

int main(){
    int x[3] = {1, 2, 3};
    int *p;
    p = x;

    for(int i = 0; i < 3; i++){
        printf("%d ", *p);
        p++;
    }

    FILE *fp; /* Declaração da estrutura
fp=fopen ("exemplo.bin","wb");
/* o arquivo se chama exemplo.bin e está
localizado no diretório corrente */
if (!fp)
printf ("Erro na abertura do arquivo.");
}