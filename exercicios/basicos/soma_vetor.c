#include <stdio.h>

void calcula (int num, int n){
    if(num >= n){
        printf("-");
        calcula(num-1, n);
    }
}

int main(){
    int N, n;
    n = 1;
    scanf("%d", &N);
    calcula(N,n);
}