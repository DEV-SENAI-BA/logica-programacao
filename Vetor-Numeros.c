#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); // Para aceitar acentos.

    int i, numeros[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%dº número: %d \n", i+1, numeros[i]);
    }

    return 0;
}