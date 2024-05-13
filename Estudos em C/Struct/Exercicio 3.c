/* Declare uma estrutura chamada 'Livro' com campos para t�tulo e ano de
publica��o. Utilizando aloca��o din�mica de mem�ria, preencha os campos da
estrutura atrav�s de um ponteiro. Imprima os dados do livro e libere a
mem�ria alocada dinamicamente. */
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
        printf("Erro ao alocar mem�ria.\n");
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
