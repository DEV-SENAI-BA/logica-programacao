#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando vari�veis.
    int nota;

    do {
        printf("Digite a nota do aluno: ");
        scanf("%d",&nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inv�lida. \nDigite a nota novamente... \n\n");
        }
    } while (nota < 0 || nota > 10);
    
    printf("Nota: %d \n", nota);
    
    return 0;
}
