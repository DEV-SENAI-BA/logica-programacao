#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando vari�veis.
    int i;
    int numero;
    int pares = 0;
    int impares = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %d� n�mero: ", i);
        scanf("%d",&numero);

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares = impares + 1;
            impares += 1;
            impares++;
        }

        if (numero % 2 == 0) 
            pares++;
        else 
            impares++;

        numero % 2 == 0 ? pares++ : impares++;
        
    }
    
    printf("\nQuantidade de pares: %d \n", pares);
    printf("Quantidade de �mpares: %d \n", impares);

    return 0;
}
