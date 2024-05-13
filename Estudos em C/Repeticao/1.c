#include <stdio.h>

/*Faça um algoritmo para ler e escrever o Nome de 20 pessoas*/


int main () {

    char nome [35];
    int total;
    total = 1;

    while (total <= 5) {
        printf ("Preencha com seu nome: ");
        scanf ("%s", &nome);
        total = total + 1;

    }
    return 0;
}
