#include <stdio.h>

int main()
{
    int matrx[50][50];
    int *p;
    int count;
    p = matrx[0];
    for (count = 0; count < 2500; count++)
    {
        *p = 2;
        printf("%d ", *p);
        p++;
    }
    return (0);
}