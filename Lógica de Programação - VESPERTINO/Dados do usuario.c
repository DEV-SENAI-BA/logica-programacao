#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    // Declarando variáveis.
    int idade;
    float peso;
    char sexo;
    char nome[500];
    char sobrenome[500];

    // Solicitando dados do usuário.
    printf("Digite sua idade: ");
    scanf("%i", &idade); // Leia

    printf("Digite seu peso: ");
    scanf("%f", &peso); // Leia

    fflush(stdin); // Limpa o cache de input.

    printf("Informe seu sexo: ");
    scanf("%c", &sexo); // Leia

    fflush(stdin); // Limpa o cache de input.

    printf("Informe seu nome: ");
    gets(nome);

    fflush(stdin); // Limpa o cache de input.

    printf("Informe seu sobrenome: ");
    gets(sobrenome);

    // Limpa tela (limpa o terminal).
    system("cls || clear"); // ou - OR

    // Exibindo dados do usuário.
    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
    printf("Nome: %s \n", nome);
    printf("Sobrenome: %s \n", sobrenome);
    printf("Sexo: %c \n", sexo);

    return 0;
}