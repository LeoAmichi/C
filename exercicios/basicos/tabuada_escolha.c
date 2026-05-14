#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicial = 1;
    while (inicial <= 10)
    {
        if (inicial % 2 == 0)
        {
            for (int i = 1; i <= 10; i++)
            {
                int multiplicador = i;
                int total = inicial * multiplicador;
                printf("\n%dx%d = %d", inicial, multiplicador, total);
            }
        }
        inicial++;
    }
}