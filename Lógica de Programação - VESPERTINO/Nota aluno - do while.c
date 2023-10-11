#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando variáveis.
    int nota;

    do {
        printf("Digite a nota do aluno: ");
        scanf("%d",&nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inválida. \nDigite a nota novamente... \n\n");
        }
    } while (nota < 0 || nota > 10);
    
    printf("Nota: %d \n", nota);
    
    return 0;
}
