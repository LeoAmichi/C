#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int resto (int a)
{
    a = a % 2;
    return(0);
}

int main()
{
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d%d", &x, &y);
    if (resto(x) == 0)
    {
        printf("Par");
    }
    if (resto(y) == 0)
    {
        printf("\nPar");
    }
    else
    {
        printf("\nImpar");
    }
}
