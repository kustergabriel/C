#include <stdio.h>

int main () {

    int **matriz, N = 3,soma;
    soma = 0;

    matriz = (int **) malloc (N * sizeof (int *)); // aloca memoria para uma matriz
    for (int i = 0; i < N; i++) {
            matriz[i] = (int *) malloc (N * sizeof (int));
    }

    printf ("Digite os elementos da matriz:\n"); // inserir os elementos da matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("[%d] ", matriz[i][j]); // percorre a matriz e printa os elementos
            soma += matriz [i][j]; // soma a matriz
        }
        printf("\n");
    }
        printf("Soma -> %d ", soma);

    for (int i = 0; i < N; i++) {
        free (matriz[i]); // libera a memoria da matriz
    }
    free (matriz);
    return 0;
}
