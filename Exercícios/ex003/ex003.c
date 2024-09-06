#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int horas;
    printf("Digite o horario: ");
    scanf("%d", &horas);
    if (horas >= 18 && horas <= 24 || horas <= 5 && horas >= 0)
    {
        printf("Noite");
    }
    else
    {
        printf("Dia");
    }
}
