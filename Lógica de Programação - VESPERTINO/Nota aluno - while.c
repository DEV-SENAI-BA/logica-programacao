#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");

    // Declarando vari�veis.
    int nota = 0;

    printf("Digite a nota do aluno: ");
    scanf("%d",&nota);
    
    while (nota < 0 || nota > 10) {
        printf("Digite a nota do aluno: ");
        scanf("%d",&nota);

        if (nota < 0 || nota > 10) {
            printf("Nota inv�lida. \nDigite a nota novamente... \n\n");
        }
    }
    
    printf("Nota: %d \n", nota);
    
    return 0;
}
