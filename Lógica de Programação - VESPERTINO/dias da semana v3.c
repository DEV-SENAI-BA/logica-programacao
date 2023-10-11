#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

   int opcao;
   char diaSemana[200];
   char status[200];

   printf("Digite um n�mero para o dia da semana: \n");
   scanf("%d",&opcao);

    switch (opcao) {
    case 1:
        strcpy(status, "Final de semana");
        strcpy(diaSemana, "Domingo");
        break;
    case 2:
        strcpy(status, "Dia �til");
        strcpy(diaSemana, "Segunda-feira");
        break;
    case 3:
        strcpy(status, "Dia �til");
        strcpy(diaSemana, "Ter�a-feira");
        break;
    case 4:
        strcpy(status, "Dia �til");
        strcpy(diaSemana, "Quarta-feira");
        break;
    case 5:
        strcpy(status, "Dia �til");
        strcpy(diaSemana, "Quinta-feira");
        break;
    case 6:
        strcpy(status, "Dia �til");
        strcpy(diaSemana, "Sexta-feira");
        break;
    case 7:
        strcpy(status, "Final de semana");
        strcpy(diaSemana, "S�bado");
        break;
    default:
        printf("Op��o inv�lida!");
        break;
    }   

    printf("Dia da semana: %s", diaSemana);
    printf("Status: %s", status);
    return 0;
}