#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,""); // Para aceitar acentos.

    char resposta[4];
    float media;
    int numero, contador, somaNotas;

    do
    {
        printf("Digite um número: ");
        scanf("%d",&numero);

        if (numero % 2 == 0) {
            printf("Par. \n");
        } else {
            printf("Impar. \n");
        }
        

        fflush(stdin); // Limpa cache.

        printf("Deseja inserir mais uma nota? ");
        gets(resposta);

        //contador = contador + 1;
        contador++;

        //somaNotas = somaNotas + nota;
        somaNotas += (float) numero;

    } while (strcmp(resposta, "sim") == 0);
    
    media = somaNotas / contador;

    return 0;
}