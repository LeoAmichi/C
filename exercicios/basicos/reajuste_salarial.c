#include <stdio.h>

int main()
{
    int horas, minutos, segundos;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);
    if (segundos < 0 || minutos < 0 || horas < 0)
    {
        printf("Insira numeros validos!");
    }
    else
    {

        if (minutos > 60)
        {
            horas = horas + (minutos / 60);
            minutos = minutos % 60;
        }
        if (segundos > 60)
        {
            minutos = minutos + (segundos / 60);
            segundos = segundos % 60;
        }
        printf("%dh%dm%ds = ", horas, minutos, segundos);

        horas *= 3600;
        minutos *= 60;
        segundos = horas + minutos + segundos;

        printf("%ds", segundos);
    }
}