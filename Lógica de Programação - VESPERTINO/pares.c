#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    int numero;

    // Solicitar dados para o usu�rio.
    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    // Verificando os n�meros pares.
    if (numero % 2 == 0) {
        printf("Este n�mero � par.");
    } else {
        printf("Este n�mero � impar.");
    }
    

    return 0;
}
