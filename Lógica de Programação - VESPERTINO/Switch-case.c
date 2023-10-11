#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

   float primeiroNumero;
   float segundoNumero;
   float resultado;
   char opcao;

   printf("Digite o primeiro n�mero: \n");
   scanf("%f",&primeiroNumero);

   printf("Digite o segundo n�mero: ");
   scanf("%f",&segundoNumero);
   
    fflush(stdin); // Limpa o cache de input.

   printf("\nDigite + para somar \n");
   printf("Digite - para subtrair \n" );
   printf("Digite * para multiplicar \n");
   printf("Digite / para dividir \n");
   printf("Digite a op��o desejada: ");
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
        printf("Op��o inv�lida!");
        break;
    }
    
    printf("\nPrimeiro n�mero: %.1f \n", primeiroNumero);
    printf("Segundo n�mero: %.1f \n", segundoNumero);
    printf("Op��o escolhida: %c \n", opcao);
    printf("Resultado: %.1f \n", resultado);

    return 0;
}