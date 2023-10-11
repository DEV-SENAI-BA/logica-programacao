#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

   int opcao;

   printf("Digite um número para o dia da semana: \n");
   scanf("%d",&opcao);

    switch (opcao) {
    case 1:
        printf("Final de semana.");
        break;
    case 2:
        printf("Dia útil.");
        break;
    case 3:
        printf("Dia útil.");
        break;
    case 4:
        printf("Dia útil.");
        break;
    case 5:
        printf("Dia útil.");
        break;
    case 6:
        printf("Dia útil.");
        break;
    case 7:
        printf("Final de semana.");
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}