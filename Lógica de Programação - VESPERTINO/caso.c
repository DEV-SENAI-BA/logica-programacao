#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "portuguese");

    // Declarando vari�veis.
    char opcao;
    int primeiroNumero;
    int segundoNumero;
    float resultado;

    // Solicitar dados para o usu�rio.
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &segundoNumero);

    fflush(stdin);

    printf("Digite a op��o desejada: ");
    scanf("%c", &opcao);


    // Verificando os n�meros pares.
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
        printf("Op��o incorreta.");
        break;
    }
    
    printf("Resultado: %.1f", resultado);
    
    return 0;
}
