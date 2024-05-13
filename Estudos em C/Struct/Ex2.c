#include <stdio.h>
#define MAX 100
#include <stdlib.h>

struct end {
    char nome [100];
    char rua[100];
    char cidade[100];
    char estado[100];
    unsigned long int cep;
}info [MAX];

    void cria_lista(void);
    void insere (void);
    void apaga (void);
    void imprime (void);
    void menu (void);
    void livre (void);
    void ler_string (char palavra[100], int tamanho);

int main () {

    int escolha;

    cria_lista ();
    for (;;) {
        escolha = menu ();
        switch (escolha) {
        case 1:
            insere ();
            break;
        case 2:
            apaga ();
            break;
        case 3:
            imprime ();
            break;
        case 4:
            exit (0);
            break;
        }
    }

    return 0;
}



void cria_lista (void) {

    for (int i = 0; i < TAM; i++) {
        info[i].nome[0] = '\n';
    }
}

int menu (void) {

    int c = 0;
    do {
        printf ("-- MENU:\n");
        printf ("\t 1. Inserir um nome\n");
        printf ("\t 2. Excluir um nome\n");
        printf ("\t 3. Listar o arquivo\n");
        printf ("\t 4. Sair\n");
        printf ("-- Digite sua escolha\n");
        scanf ("%d", &c):
    }while (c <= 0 || c > 4);
    getchar (); // para ler o enter
    return c;
}
