#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); // Para aceitar acentos.

    int i, j;
    char disciplinas[3][250];
    float notas[3][2];
    float media[3]; 
    float somaNotas;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome da %dº disciplina: ", i + 1);
        gets(disciplinas[i]);

        for (j = 0; j < 2; j++)
        {
            printf("Digite o valor da %dª nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            somaNotas += notas[i][j];
        }

        media[i] = somaNotas / j; // j sai do laço com valor 2.

        printf("\n");
        fflush(stdin);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("%dº nome: %s \n", i + 1, disciplinas[i]);

        for (j = 0; j < 2; j++)
        {
            printf("%dª nota: %1.f \n", j + 1, notas[i][j]);
        }

        printf("Média: %1.f \n", media[i]);

        printf("\n");
    }

    return 0;
}