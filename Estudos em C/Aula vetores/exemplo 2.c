#include <stdio.h>
#define lines 10
#define col 20


int main () {

    float num[3][4]; //posicoes de um vetor (3) linhas (4) colunas
    int i,j;
    for (i = 0; i < 3; i++){ //linhas
            for (j = 0; j < 4; j++) { //colunas
                printf ("insira o valor da linha %d, coluna %d\n", i+1, j+1);
                scanf ("%f", &num[i][j]);
            }
    }

    return 0;
}

