#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando vari�veis.
    int i;

    // Verificando os n�mero �mpares.
    // Vers�o 1.

    for (i = 1; i <= 15; i+=2) {
        printf("%d \n", i);
    }

    // Vers�o 2.
    for (i = 1; i <= 15; i++) {
        if (i % 2 != 0) {
            printf("%d \n", i);
        }
    }
  
    return 0;
}
