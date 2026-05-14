#include <stdio.h>

 int main ()
{
    char string[5][100];
    int count;

    for(count = 0; count < 5; count++){

        printf("Digite sua string: ");
        gets(string[count]);
    }

    for(count = 0; count < 5; count++){
        printf("%s\n", string[count]);
    }
    return(0);
}