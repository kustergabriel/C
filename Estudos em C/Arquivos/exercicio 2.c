#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa em C que leia o conteúdo do arquivo "frase.txt" e
imprima na tela. */


int main () {
    FILE *arquivo = fopen("frase.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Encerrar o programa com erro
    }
    char frase[100];
    fgets (frase, sizeof(frase),arquivo);
    printf("Frase: %s\n", frase);

    fclose(arquivo);

    return 0;
}
