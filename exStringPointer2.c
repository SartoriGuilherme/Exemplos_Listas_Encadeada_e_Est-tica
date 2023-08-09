#include <stdio.h>

int main() {
    char *nome;

    printf("Informe o seu nome: ");
    scanf(" %[^\n]", nome);

    printf("Seu nome é %s \n", nome);

    return 0;
}