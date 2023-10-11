#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
    int numero;

    // Solicitar dados para o usuário.
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verificando os números pares.
    if (numero % 2 == 0) {
        printf("Este número é par.");
    } else {
        printf("Este número é impar.");
    }
    

    return 0;
}
