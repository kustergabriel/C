/* Declare uma estrutura chamada 'Livro' com campos para título e ano de
publicação. Utilizando alocação dinâmica de memória, preencha os campos da
estrutura através de um ponteiro. Imprima os dados do livro e libere a
memória alocada dinamicamente. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro {
    char titulo[45];
    int anoPublicacao;

}*livros;

int main () {

    livros = (struct livro *) malloc (sizeof(struct livro));
    if (livros == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    printf ("Insira o Nome do livro e seu ano de publicacao\n");
    printf ("Nome: ");
    // deixa usar espaco
    fgets(livros->titulo, sizeof(livros->titulo), stdin);
    //Remove a quebra de linha do final
    livros->titulo[strcspn(livros->titulo, "\n")] = '\0';

    // insere na tela o ano e nome do livro
    printf ("Ano: ");
    scanf("%d", &livros->anoPublicacao);
    printf ("Nome: %s \n", livros->titulo);
    printf ("Ano de Publicacao: %d \n", livros->anoPublicacao);

    free (livros);
    livros = NULL;

    return 0;
}
