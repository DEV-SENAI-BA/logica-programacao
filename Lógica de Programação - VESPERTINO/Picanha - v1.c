#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Vers�o 1.0
int main(){
    setlocale(LC_ALL, "portuguese");

   int opcao;

   printf("\n-------------- MENU --------------\n");
   printf("C�digo \t Prato \t\t Pre�o \n" );
   printf("1 \t Picanha \t R$ 25,00\n");
   printf("2 \t Lasanha \t R$ 20,00\n");
   printf("3 \t Strogonoff \t R$ 18,00\n");
   printf("4 \t Bife Acebolado  R$ 15,00\n");
   printf("5 \t P�o com ovo \t R$ 5,00\n");
   printf("\n-------------- FIM --------------\n");
   
   printf("Digite a op��o desejada: ");
   scanf("%d",&opcao);

    switch (opcao) {
    case 1:
        printf("C�digo: 1 \n");
        printf("Prato: Picanha \n");
        printf("Pre�o: R$ 25,00 \n");
        break;
    case 2:
        printf("C�digo: 2 \n");
        printf("Prato: Lasanha \n");
        printf("Pre�o: R$ 20,00 \n");
        break;
    case 3:
        printf("C�digo: 3 \n");
        printf("Prato: Strogonoff \n");
        printf("Pre�o: R$ 18,00 \n");
        break;       
    case 4:
        printf("C�digo: 4 \n");
        printf("Prato: Bife Acebolado \n");
        printf("Pre�o: R$ 15,00 \n");
        break;       
    case 5:
        printf("C�digo: 5 \n");
        printf("Prato: P�o com ovo \n");
        printf("Pre�o: R$ 5,00 \n");
        break;       
    default:
        printf("Op��o inv�lida!");
    }

    return 0;
}