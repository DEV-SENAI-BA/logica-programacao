#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando variáveis.
    int i;
    float nota;
    float soma = 0;
    float media;

    for (i = 1; i <= 5; i++) {
        do {
            printf("Digite a %dª nota do aluno: \n", i);
            scanf("%f",&nota);

        } while (nota < 0 || nota > 10);
        
        soma += nota;
        media = soma / i; // i = 2
    }
       
    printf("Média: %.2f \n", media);

    return 0;
}
