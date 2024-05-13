#include <stdio.h>
#include <string.h>

int main () {

    char *nome, *sobrenome,concatenado = 0;

    nome = (char *)malloc (80 * sizeof (char));
    sobrenome = (char *)malloc (80 * sizeof (char));

    if (nome == NULL || sobrenome == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1; // Sai do programa com código de erro
    }

    printf ("Digite seu nome: ");
    scanf("%s", nome);
    printf ("Digite seu sobrenome: ");
    scanf("%s", sobrenome);

    strcat(nome, " ");
    strcat(nome,sobrenome);

    printf("Nome completo: %s\n", nome);

    free(nome);
    free(sobrenome);

    return 0;
}
