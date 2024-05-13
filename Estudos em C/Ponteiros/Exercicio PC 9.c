#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *string1, *string2, *string3;

    string1 = (char *)malloc(100 * sizeof(char));
    if (string1 == NULL) {
        printf("ERRO! STRING 1 NAO PODE ARMAZENAR MEMORIA");
        return 1;
    }

    printf("Insira uma palavra para a string 1!\n");
    scanf("%s", string1);

    string2 = (char *)malloc(100 * sizeof(char));
    if (string2 == NULL) {
        printf("ERRO! STRING 2 NAO PODE ARMAZENAR MEMORIA");
        free(string1);
        return 1;
    }

    printf("Insira uma palavra para a string 2!\n");
    scanf("%s", string2);

    int tamanhoCat = strlen(string1) + strlen(string2) + 1;

    string3 = (char *)malloc(tamanhoCat * sizeof(char));
    if (string3 == NULL) {
        printf("ERRO! STRING 3 NAO PODE ARMAZENAR MEMORIA");
        free(string1);
        free(string2);
        return 1;
    }

    strcpy(string3, string1);
    strcat(string3, string2);

    printf("String 1: %s\n", string1);
    printf("String 2: %s\n", string2);
    printf("String concatenada: %s\n", string3);

    free(string1);
    free(string2);
    free(string3);

    return 0;
}
