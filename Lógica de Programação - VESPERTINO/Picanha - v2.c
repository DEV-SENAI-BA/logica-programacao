#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Vers�o 1.0
int main(){
    setlocale(LC_ALL, "portuguese");

   int opcao;
   float preco;
   char prato[200];

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
        strcpy(prato, "Picanha");
        preco = 25.00;
        break;
    case 2:
        strcpy(prato, "Lasanha");
        preco = 20.00;
        break;
    case 3:
        strcpy(prato, "Strogonoff");
        preco = 18.00;
        break;       
    case 4:
        strcpy(prato, "Bife Acebolado");
        preco = 15.00;
        break;       
    case 5:
        strcpy(prato, "P�o com ovo");
        preco = 5.00;
        break;       
    default:
        printf("Op��o inv�lida!");
    }

    printf("C�digo: %d \n", opcao);
    printf("Prato: %s \n", prato);
    printf("Pre�o: R$ %.2f \n", preco);
    return 0;
}