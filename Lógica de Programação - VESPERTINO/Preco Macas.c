#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");

    // Declarando vari�veis.
    int quantidadeMacas;
    float precoUnitario;
    float precoFinal;

    // Solicitando dados para o usu�rio.
    printf("Digite a quantidade de ma��s: ");
    scanf("%i",&quantidadeMacas);

    // Calculando o valor por unidade.
   if (quantidadeMacas < 12) {
        precoUnitario = 1.30;
   } else {
        precoUnitario = 1;
   }

   //precoUnitario = quantidadeMacas < 12 ? 1.30 : 1;
   
   precoFinal = quantidadeMacas * precoUnitario;

    // Exibindo dados do usu�rio.
   printf("Quantidade de ma��s: %d \n", quantidadeMacas);
   printf("Pre�o por unidade: R$ %2.f \n", precoUnitario);
   printf("Total da compra: R$ %2.f \n",precoFinal);

    return 0;
}
