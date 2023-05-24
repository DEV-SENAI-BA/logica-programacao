#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    char sexo;

    do
    {
        printf("Digite seu sexo: (M ou F)");
        fflush(stdin);
        scanf("%c", &sexo);
        
        sexo = toupper(sexo);
        
        // printf("Sexo: %c \n", sexo);

        switch (sexo)
        {
        case 'M':
            printf("Masculino. \n");
            break;
        case 'F':
            printf("Feminino. \n");
            break;
        default:
            printf("Informe novamente.\n");
            break;
        }
    } while (sexo != 'M' && sexo != 'F');

    system("pause");
}