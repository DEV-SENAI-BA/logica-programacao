#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, ""); // ISO 8859-1
    
    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade < 18 || idade >= 65 ) {
        printf("Não é obrigado a votar.");
    } else {
        printf("Obrigado a votar!");
    }
    
}
