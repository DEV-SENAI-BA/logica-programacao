#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nomeSalvo[250] = "Aluno", senhaSalva[250] = "Caderno";
    char login[250], senha[250];

    printf("Digite seu login: ");
    gets(login);

    fflush(stdin); // Limpa cache (buffer).

    printf("Digite sua senha: ");
    gets(senha);

    if (strcmp(login, nomeSalvo) == 0 && strcmp(senha, senhaSalva) == 0) {
        printf("Acesso liberado.");
    } else {
        printf("Acesso negado.");
    }

    return 0;
}