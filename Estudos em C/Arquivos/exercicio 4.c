/* Escreva um programa em C que leia o conteúdo, caractere por caractere,
do arquivo "nome.txt" e imprima na tela. */

#include <stdio.h>
#include <stdlib.h>

int main () {

    FILE *arq;
    int i = 0;
    char nome[100];

    arq = fopen ("caracPcarac.txt","r");
    if (arq == NULL) {
        printf ("Erro na abertura de arquivo!");
        return 1;
    }
    int carac;

    while ((carac = fgetc (arq)) != EOF && i < 99) {
        nome[i] = carac;
        i++;
    }

    nome[i] = '\0'; // Adiciona o caractere nulo no final da string

    fclose(arq);
    // Imprime a frase lida do arquivo
    printf("Frase lida do arquivo: %s\n", nome);


return 0;
}
