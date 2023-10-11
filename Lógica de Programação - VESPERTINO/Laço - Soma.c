#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando variáveis.
    int i;
    int numero;
    int soma = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d",&numero);

        //soma = soma + numero;
        soma += numero;
    }
    
    printf("Soma: %d", soma);

    return 0;
}
