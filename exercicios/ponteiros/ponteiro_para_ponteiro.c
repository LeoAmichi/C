#include <stdio.h>

int main(){
    int array[5] = {1,2,3,4,5};
    int *p;

    p = array;

    for(int i = 0; i < 5; i++){
        printf("%d", *p + i);
    }
}