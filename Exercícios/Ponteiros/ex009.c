#include <stdio.h>
#include <stdlib.h>


void retornaValor(float *sal){
    *sal += 10;
}

int main(void){
    float salario;
    scanf("%f", &salario);
    retornaValor(&salario);
    printf("%f", salario);

}