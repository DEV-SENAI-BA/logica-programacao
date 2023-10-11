#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando variáveis.
    int i;
    int numero;
    int pares = 0;
    int impares = 0;

    for (i = 1; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
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
    printf("Quantidade de ímpares: %d \n", impares);

    return 0;
}
