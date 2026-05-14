#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fatorial(int num){
    if(num == 1 || num == 0)
        return 1;
    else  
        return num * fatorial(num - 1);
}

int main(){
    puts(setlocale(LC_ALL, "pt_BR.UTF-8"));
    printf("");
    int num;
    scanf("%d", &num);
    printf("%d", fatorial(num));
}