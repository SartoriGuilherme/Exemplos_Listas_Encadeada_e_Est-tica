#include <stdio.h>

int main() {
    char letra;
    letra = 'a';

    char palavra[40] = "análise e desenvolvimento de sistemas";

    printf("%c \n", letra);
    printf("%s \n", palavra);

    char *nome = "Guilherme Sartori";
    printf("%s \n", nome);

    char frase[100];
    printf("Informe uma frase: ");
    fgets(frase, 100, stdin);

    printf("Sua frase foi %tes. \n", frase);

    return 0;
}
