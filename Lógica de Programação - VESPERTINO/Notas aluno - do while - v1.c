#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando vari�veis.
    int primeiraNota;
    int segundaNota;
    float soma;
    float media;

    do {
        printf("Digite a nota do aluno: ");
        scanf("%d",&primeiraNota);

        if (primeiraNota < 0 || primeiraNota > 10) {
            printf("Nota inv�lida. \nDigite a nota novamente... \n\n");
        }
    } while (primeiraNota < 0 || primeiraNota > 10);
   
    do {
        printf("Digite a nota do aluno: ");
        scanf("%d",&segundaNota);

        if (segundaNota < 0 || segundaNota > 10) {
            printf("Nota inv�lida. \nDigite a nota novamente... \n\n");
        }
    } while (segundaNota < 0 || segundaNota > 10);
    
    soma += primeiraNota + segundaNota;
    media = soma / 2;

       
    printf("M�dia: %.2f \n", media);
    return 0;
}
