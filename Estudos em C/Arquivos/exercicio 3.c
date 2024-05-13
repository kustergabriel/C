#include <stdio.h>
#include <stdlib.h>


/* Escreva um programa em C que solicite ao usuário que digite um
nome e salve esse nome em um arquivo chamado "nome.txt",
caractere por caractere. */


int main () {

    FILE *arquivo;
    char nome[40];
    int i = 0;

    printf ("Insira um nome: ");
    fgets (nome,sizeof(nome),stdin);
    getchar ();
    // criacao do arquivo
    arquivo = fopen ("caracPcarac.txt","w");
    //verificacao se foi ok abrir o arquivo
     if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (nome[i]!= '\0') {
        fputc (nome[i],arquivo);
        i++;
    }
    // fecha o arquivo!
    fclose(arquivo);

    printf("Nome salvo com sucesso no arquivo \"nome.txt\".\n");

    return 0;
}
