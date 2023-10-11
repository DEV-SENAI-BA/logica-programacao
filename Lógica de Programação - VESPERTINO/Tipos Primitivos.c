#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarando variáveis.
    int idade = 20;  // Inteiro
    float peso = 89.2; // Real
    char sexo = 'F'; // Apenas um caracter
    char nome [250] = "Marta"; // Uma cadeia de caracteres
    float altura = 1.70;
    char sobrenome [250] = "Silva";

    // Exibindo dados para o usuário.
    printf("Idade: %i anos. \n", idade);
    printf("Peso: %.3f Kg. \n", peso);
    printf("Sexo: %c  \n", sexo);
    printf("Nome: %s  \n", nome);
    printf("Sobrenome: %s  \n", sobrenome);
    printf("Altura: %.2f  \n", altura);

    return 0;
}