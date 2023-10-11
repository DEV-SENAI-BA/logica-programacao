#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando variáveis.
    int i;

    // Verificando os número ímpares.
    // Versão 1.

    for (i = 1; i <= 15; i+=2) {
        printf("%d \n", i);
    }

    // Versão 2.
    for (i = 1; i <= 15; i++) {
        if (i % 2 != 0) {
            printf("%d \n", i);
        }
    }
  
    return 0;
}
