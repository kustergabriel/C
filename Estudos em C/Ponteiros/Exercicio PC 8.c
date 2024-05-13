#include <stdio.h>


int main () {

    int linhas,colunas, **matriz;

    printf("Digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);
    //aloca memoria para as linhas
    matriz = (int **) malloc (linhas * sizeof(int*));
        if (matriz == NULL) {
            printf("Erro ao alocar memória para as linhas da matriz.\n");
        return 1;
        }
    // aloca memoria para as colunas
    for (int i = 0; i < linhas; i++) {
    matriz[i] = (int **) malloc (colunas * sizeof(int*));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para as colunas da matriz.\n");
        return 1;
        }
    }
    // percorre a matriz
    printf ("Insira valores para a matriz![%d]x[%d]\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf ("Insira o valor do [%d] [%d]:\n", i,j);
            scanf ("%d", &matriz[i][j]);
        }
    }
    // imprimir usando ponteiros

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf ("[%d]", *(*(matriz + i)+j));
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

return 0;
}
