#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando vari�veis.
    int i;
    int numero;
    int soma = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d",&numero);

        //soma = soma + numero;
        soma += numero;
    }
    
    printf("Soma: %d", soma);

    return 0;
}
