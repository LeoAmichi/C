#include <stdio.h>

void ordemNum(int y, int z, int w){
    if(y <= z && y <= w){
        printf("%d", y);
        if(z<=w){
            printf("%d%d", z, w);
        }
        else{
            printf("%d%d", w,z);
        }
    }
    if(z <= y && z <= w){
        printf("%d",z);
        if(y<= w){
            printf("%d%d",y,w);
        }
        else{
            printf("%d%d",w,y);
        }
    }
    if(w <= y && w <= z){
        printf("%d",w);
        if(z <= y){
            printf("%d%d",z,y);
        }
        else{
            printf("%d%d",y,z);
        }
    }
}



int main(){
    int x, y, z, w;
    scanf("%d%d%d%d", &x, &y, &z, &w);
    if(x <= y && x <= z && x <= w){
        printf("%d", x);
        ordemNum(y,z,w);
    }
    if(y <= x && y <= z && y <= w){
        printf("%d", y);
        ordemNum(x,z,w);
    }
    if(z <= y && z <= x && x <= w){
        printf("%d", z);
        ordemNum(y,x,w);
    }
    if(w <= y && w <= z && w <= x){
        printf("%d", w);
        ordemNum(y,z,x);
    }
}