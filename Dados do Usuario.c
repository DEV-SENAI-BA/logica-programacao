#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade; // inteiro
    float peso; // real 
    char nome[100]; // caracter 99
    char sexo; // Somente um caracter

    // == Igual (Números e char)
    // != Diferente (Números e char)
    // >= Maior igual
    // <= Menor igual

    // && and - E
    // || or - OU

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite seu peso: ");
    scanf("%f",&peso);

    fflush(stdin); // Limpa o buffer do teclado.

    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite seu sexo: ");
    scanf("%c",&sexo);

    system("cls"); // Limpa tela.

    printf("Idade: %d \n", idade);
    printf("Peso: %f \n", peso);
    printf("Nome: %s \n", nome);
    printf("Sexo: %c \n", sexo);

    system("pause");

    return 0;
}