#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Versão 1.0
int main(){
    setlocale(LC_ALL, "portuguese");

   int opcao;

   printf("\n-------------- MENU --------------\n");
   printf("Código \t Prato \t\t Preço \n" );
   printf("1 \t Picanha \t R$ 25,00\n");
   printf("2 \t Lasanha \t R$ 20,00\n");
   printf("3 \t Strogonoff \t R$ 18,00\n");
   printf("4 \t Bife Acebolado  R$ 15,00\n");
   printf("5 \t Pão com ovo \t R$ 5,00\n");
   printf("\n-------------- FIM --------------\n");
   
   printf("Digite a opção desejada: ");
   scanf("%d",&opcao);

    switch (opcao) {
    case 1:
        printf("Código: 1 \n");
        printf("Prato: Picanha \n");
        printf("Preço: R$ 25,00 \n");
        break;
    case 2:
        printf("Código: 2 \n");
        printf("Prato: Lasanha \n");
        printf("Preço: R$ 20,00 \n");
        break;
    case 3:
        printf("Código: 3 \n");
        printf("Prato: Strogonoff \n");
        printf("Preço: R$ 18,00 \n");
        break;       
    case 4:
        printf("Código: 4 \n");
        printf("Prato: Bife Acebolado \n");
        printf("Preço: R$ 15,00 \n");
        break;       
    case 5:
        printf("Código: 5 \n");
        printf("Prato: Pão com ovo \n");
        printf("Preço: R$ 5,00 \n");
        break;       
    default:
        printf("Opção inválida!");
    }

    return 0;
}