#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int vetor[5];
    char string[50][100] = {"leo", "murilo", "carlos", "Davi", "CEO"};

    for(int i = 0; i < 5; i++){
        vetor[i] = rand() % 5;
    }

}   
