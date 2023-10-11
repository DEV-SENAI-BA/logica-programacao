#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    float primeiraNota;
    float segundaNota;
    float terceiraNota;
    float media;
    char situacao[200];
    char nome [200];
    int idade;

    // Solicitar dados para o usu�rio.
    printf("Digite seu nome: ");
    gets(nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &terceiraNota);

    // Calculando a m�dia.
    media = (primeiraNota + segundaNota + terceiraNota) / 3;

    // Situa��o do aluno.
    if (media >= 7) {
        strcpy(situacao,"Aprovado!");
    } else {
        strcpy(situacao,"Reprovado!");
    }

    // Exibir dados para o usu�rio.
    printf("Nome: %s \n\n", nome);
    printf("Idade: %d \n\n", idade);
    printf("M�dia: %.1f \n\n", media);
    printf("Situa��o: %s \n\n", situacao);


    return 0;
}
