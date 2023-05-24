#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    float primeiraNota, segundaNota, media=5;

    if (media >= 7) {
        printf("Aprovado.");
    } else if (media >= 5) {
        printf("Recuperação.");
    } else {
        printf("Reprovado.");
    }

    return 0;
}