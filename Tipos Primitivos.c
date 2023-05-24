#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = 10; // inteiro
    float peso = 60.2; // real 
    char nome[100] = "Marta"; // caracter 99
    char sexo = 'F'; // Somente um caracter

    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Nome: %s \n", nome);
    printf("Sexo: %c \n", sexo);

    return 0;
}
