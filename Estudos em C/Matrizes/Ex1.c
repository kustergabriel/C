#include <stdio.h>
#define TAM1 3
#define TAM2 3

/*Ler uma tabela de 10 linhas e 3 colunas armazenando-as em uma matriz TAB*/


int main () {

    int TAB [TAM1][TAM2],i,j;

    for (i = 0; i < TAM1; i++) {
            for (j = 0; j < TAM2; j++){
            printf ("Insira o elemento [%d] [%d]:  ", i,j);
            scanf ("%d", &TAB[i][j]);
        }
    }

return 0;
}
