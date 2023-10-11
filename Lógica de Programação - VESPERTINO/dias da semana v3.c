#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
    setlocale(LC_ALL, "portuguese");

   int opcao;
   char diaSemana[200];
   char status[200];

   printf("Digite um número para o dia da semana: \n");
   scanf("%d",&opcao);

    switch (opcao) {
    case 1:
        strcpy(status, "Final de semana");
        strcpy(diaSemana, "Domingo");
        break;
    case 2:
        strcpy(status, "Dia útil");
        strcpy(diaSemana, "Segunda-feira");
        break;
    case 3:
        strcpy(status, "Dia útil");
        strcpy(diaSemana, "Terça-feira");
        break;
    case 4:
        strcpy(status, "Dia útil");
        strcpy(diaSemana, "Quarta-feira");
        break;
    case 5:
        strcpy(status, "Dia útil");
        strcpy(diaSemana, "Quinta-feira");
        break;
    case 6:
        strcpy(status, "Dia útil");
        strcpy(diaSemana, "Sexta-feira");
        break;
    case 7:
        strcpy(status, "Final de semana");
        strcpy(diaSemana, "Sábado");
        break;
    default:
        printf("Opção inválida!");
        break;
    }   

    printf("Dia da semana: %s", diaSemana);
    printf("Status: %s", status);
    return 0;
}