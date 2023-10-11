#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

   int opcao;

   printf("Digite um número para o dia da semana: \n");
   scanf("%d",&opcao);

    switch (opcao) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        printf("Dia útil.");
        break;
    case 1:
    case 7:
        printf("Final de semana.");
        break;
    default:
        printf("Opção inválida!");
        break;
    }

    return 0;
}