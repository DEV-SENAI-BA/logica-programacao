#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    float primeiraNota;
    float segundaNota;
    float media;

    // Solicitar dados para o usu�rio.
    printf("Digite a primeira nota: ");
    scanf("%f", &primeiraNota);

    printf("Digite a segunda nota: ");
    scanf("%f", &segundaNota);

    // Calculando a m�dia.
    media = (primeiraNota + segundaNota) / 2;

    // Exibir dados para o usu�rio.
    printf("Primeira nota: %.2f \n", primeiraNota);
    printf("Segunda nota: %.2f \n", segundaNota);
    printf("M�dia: %.2f \n", media);

    // Situa��o do aluno.
    if (media >= 7) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }

    return 0;
}
