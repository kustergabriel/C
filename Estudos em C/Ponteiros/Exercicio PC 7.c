#include <stdio.h>


int main () {

    int *array1,*array2,*soma,tamanho,i;
    i = 0;

    printf("Digite o tamanho dos arrays: ");
    scanf("%d", &tamanho);

    // alocando memoria para o arr1
    array1 = (int *)malloc (tamanho * sizeof(int));
    if (array1 == NULL){
        printf("Erro ao alocar memória para array1\n");
        return 1;
    }

        // alocando memoria para o arr2
    array2 = (int *)malloc (tamanho * sizeof(int));
    if (array2 == NULL){
        printf("Erro ao alocar memória para array2\n");
        return 1;
    }

    // preenche o arr1
    printf("Insira valores para o arr1:\n");
    while (i < tamanho) {
        scanf("%d", &array1[i]);
        i++;
    }

    // preenche o arr2
    printf("Insira valores para o arr2:\n");
    i = 0;
    while (i < tamanho) {
        scanf("%d", &array2[i]);
        i++;
    }

    //alocando memoria para a soma
    soma = (int *) malloc(tamanho * sizeof(int));
    if (soma == NULL) {
        printf("Erro ao alocar memória para Soma\n");
        return 1;
        free(array1); // Libera a memória alocada para array1
        free(array2); // Libera a memória alocada para array2
    }
    // soma os arrays
    i = 0;
    while (i < tamanho) {
        soma[i] = array1[i] + array2[i];
        i++;
    }
    printf("Resultado da soma dos arrays:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", soma[i]);
    }
    printf("\n");

    free (array1);
    free (array2);
    free (soma);


    return 0;
}
