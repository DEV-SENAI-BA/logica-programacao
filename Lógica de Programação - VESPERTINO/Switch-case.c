#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

   float primeiroNumero;
   float segundoNumero;
   float resultado;
   char opcao;

   printf("Digite o primeiro número: \n");
   scanf("%f",&primeiroNumero);

   printf("Digite o segundo número: ");
   scanf("%f",&segundoNumero);
   
    fflush(stdin); // Limpa o cache de input.

   printf("\nDigite + para somar \n");
   printf("Digite - para subtrair \n" );
   printf("Digite * para multiplicar \n");
   printf("Digite / para dividir \n");
   printf("Digite a opção desejada: ");
   scanf("%c",&opcao);

    switch (opcao) {
    case '+':
        resultado = primeiroNumero + segundoNumero;
        break;
    case '-':
        resultado = primeiroNumero - segundoNumero;
        break;
    case '*':
        resultado = primeiroNumero * segundoNumero;
        break;
    case '/':
        resultado = primeiroNumero / segundoNumero;
        break;
    default:
        printf("Opção inválida!");
        break;
    }
    
    printf("\nPrimeiro número: %.1f \n", primeiroNumero);
    printf("Segundo número: %.1f \n", segundoNumero);
    printf("Opção escolhida: %c \n", opcao);
    printf("Resultado: %.1f \n", resultado);

    return 0;
}