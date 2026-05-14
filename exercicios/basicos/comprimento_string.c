#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[5];

    for(int i = 0; i < 5; i++){
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if(num[j] < num[j + 1]){
                int auxiliar = num[j];
                num[j] = num[j + 1];
                num[j + 1] = auxiliar;
            }
        }
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", num[i]);
    }
}