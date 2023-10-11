#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "portuguese");

    // Declarando variáveis.
    char opcao;
    int primeiroNumero;
    int segundoNumero;
    float resultado;

    // Solicitar dados para o usuário.
    printf("Digite o primeiro número: ");
    scanf("%d", &primeiroNumero);

    printf("Digite o segundo número: ");
    scanf("%d", &segundoNumero);

    fflush(stdin);

    printf("Digite a opçâo desejada: ");
    scanf("%c", &opcao);


    // Verificando os números pares.
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
        printf("Opção incorreta.");
        break;
    }
    
    printf("Resultado: %.1f", resultado);
    
    return 0;
}
