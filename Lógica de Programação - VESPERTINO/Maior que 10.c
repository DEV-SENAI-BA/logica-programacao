#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando variáveis.
    int numero;

    // Solicitando dados para o usuário.
    printf("Digite um número:");
    scanf("%i",&numero);

    // Exibindo dados do usuário.
   if (numero == 10) {
        printf("É IGUAL A 10!");
   } else if (numero > 10) {
        printf("É MAIOR QUE 10!");
    } else {
        printf("NÃO É MAIOR QUE 10!");
    }

    return 0;
}
