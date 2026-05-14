#include <stdio.h>

int main()
{
    char string[100];
    int i = 0;
    gets(string);

    while (string[i] != '\0')
    {
        i++;
    }

    for (; (string[i] != string[-1]); i--)
    {
        printf("%c", string[i]);
    }
}