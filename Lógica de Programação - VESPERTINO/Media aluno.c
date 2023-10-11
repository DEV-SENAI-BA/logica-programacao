#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
    float primeiraNota;
    float segundaNota;
    float media;

    // Solicitar dados para o usuário.
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);

    // Calculando a média.
    media = (primeiraNota + segundaNota) / 2;

    // Exibir dados para o usuário.
    printf("Primeira nota: %.2f \n", primeiraNota);
    printf("Segunda nota: %.2f \n", segundaNota);
    printf("Média: %.2f \n", media);

    // Situação do aluno.
    if (media >= 7) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}
