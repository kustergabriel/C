#include <stdio.h>
#include <stdlib.h>
/* Escreva um programa em C que solicite ao usuário que digite
uma frase e salve essa frase em um arquivo chamado "frase.txt". */


int main () {
    FILE *arquivo;
    char frase[100];

    printf ("Insira uma frase: ");
    fgets (frase,sizeof(frase),stdin);

    //abrindo o arquivo
    arquivo = fopen("frase.txt", "w");
    // verifica se o arq foi aberto corretamente
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // escrevendo a frase
    fprintf (arquivo, "%s", frase);

    fclose (arquivo);

    printf ("Salvo!!");

    return 0;
}
