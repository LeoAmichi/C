#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    float *v;
    int i, num;

    printf("Informe o numero de componentes do vetor");
    scanf("%d", &num);

    v = (float * ) malloc(num * sizeof(float));

    for(i = 0; i < num; i++){
        scanf("%f", &v[i]);
    }

    for(i = 0; i < num; i++){
        printf("%f\n", v[i]);
    }

    free(v);
    getch();
}