#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int numPokemon, aux = 0;
    printf("Digite o numero de pokemons capturados: ");
    scanf("%d", &numPokemon);

    char pokedex[numPokemon][100];

    for (int i = 0; i < numPokemon; i++)
    {
        scanf("%s", pokedex[i]);
    }

    for (int j = 0; j < numPokemon; j++)
    {
        for (int i = 0; i < numPokemon; i++)
            if (strcmp(pokedex[j], pokedex[j + i]) == 0)
            {
                aux++;
            }
    }
    numPokemon = aux + 151 - numPokemon;

    printf("Falta(m) %d pokemons(s)", numPokemon);
}