#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); // Para aceitar acentos.

    int i;
    char nomes [3][250];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o %dº nome: ", i+1);
        gets(nomes[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%dº nome: %s \n", i+1, nomes[i]);
    }

    return 0;
}