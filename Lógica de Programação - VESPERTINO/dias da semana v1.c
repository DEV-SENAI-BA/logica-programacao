#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

   int opcao;

   printf("Digite um n�mero para o dia da semana: \n");
   scanf("%d",&opcao);

    switch (opcao) {
    case 1:
        printf("Final de semana.");
        break;
    case 2:
        printf("Dia �til.");
        break;
    case 3:
        printf("Dia �til.");
        break;
    case 4:
        printf("Dia �til.");
        break;
    case 5:
        printf("Dia �til.");
        break;
    case 6:
        printf("Dia �til.");
        break;
    case 7:
        printf("Final de semana.");
        break;
    default:
        printf("Op��o inv�lida!");
        break;
    }

    return 0;
}