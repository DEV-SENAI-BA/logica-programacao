#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); // Para aceitar acentos.

    int i, j;
    char bandas[3][250];
    char nomes[3][2][250];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o %d� nome da banda: ", i + 1);
        gets(bandas[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite o %d� nome do integrante: ", j + 1);
            gets(nomes[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%d� nome da banda: %s \n", i + 1, bandas[i]);

        for (j = 0; j < 2; j++)
        {
            printf("%d� integrante da banda: %s \n", j + 1, nomes[i][j]);
        }
        printf("\n");
    }

    return 0;
}