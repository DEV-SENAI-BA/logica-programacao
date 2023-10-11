#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"portuguese");

    // Declarando variáveis.
    int quantidadeMacas;
    float precoUnitario;
    float precoFinal;

    // Solicitando dados para o usuário.
    printf("Digite a quantidade de maçãs: ");
    scanf("%i",&quantidadeMacas);

    // Calculando o valor por unidade.
   if (quantidadeMacas < 12) {
        precoUnitario = 1.30;
   } else {
        precoUnitario = 1;
   }

   //precoUnitario = quantidadeMacas < 12 ? 1.30 : 1;
   
   precoFinal = quantidadeMacas * precoUnitario;

    // Exibindo dados do usuário.
   printf("Quantidade de maçãs: %d \n", quantidadeMacas);
   printf("Preço por unidade: R$ %2.f \n", precoUnitario);
   printf("Total da compra: R$ %2.f \n",precoFinal);

    return 0;
}
