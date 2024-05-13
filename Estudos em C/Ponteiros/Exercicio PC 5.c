#include <stdio.h>

int contarCaracteres(char *str);

int main () {

    char string[31];

    printf ("Digite algo:\n");
    fgets (string , 30 , stdin);
    int numCaracteres = contarCaracteres(string);
    printf("O nro de caracteres na string eh: %d\n", numCaracteres-1);


    return 0;
}

int contarCaracteres(char *str) {
    int contador = 0;

    while (*str != '\0') {
        contador ++;
        str++;
    }
    return contador;
}
