#include <stdio.h>
#include <string.h>

int main()
{

    char string1[200], string2[200], string3[200], string4[200];
    
    gets(string1);
    gets(string2);
    gets(string3);
    gets(string4);

    strcat(string1, string2);
    strcat(string1, string3);
    strcat(string1, string4);
    puts(string1);

}