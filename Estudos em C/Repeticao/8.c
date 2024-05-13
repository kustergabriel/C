#include <stdio.h>

/*
Fazer um programa para mostrar os 20 primeiros números impares. */

int main () {

    int nro, contador;
    nro = 1;
    for (contador = 1; contador <= 20; contador++) {
    printf ("%d ", nro);
    nro = nro+2;
    }
    printf ("\n");
    return 0;
}
