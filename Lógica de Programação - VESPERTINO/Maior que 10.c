#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando vari�veis.
    int numero;

    // Solicitando dados para o usu�rio.
    printf("Digite um n�mero:");
    scanf("%i",&numero);

    // Exibindo dados do usu�rio.
   if (numero == 10) {
        printf("� IGUAL A 10!");
   } else if (numero > 10) {
        printf("� MAIOR QUE 10!");
    } else {
        printf("N�O � MAIOR QUE 10!");
    }

    return 0;
}
