#include <stdio.h>

/* Fa�a um algoritmo para ler base e
altura de 50 tri�ngulos e imprimir a sua �rea */

int main () {

    int base,altura,contador,res;
    contador = 1;

    while (contador <= 50) {
    printf ("Insira a B e a A de um triangulo para calcular sua area\n");
    printf ("ALTURA: ");
    scanf ("%d", &altura);
    printf ("BASE: ");
    scanf ("%d", &base);

    res = (base * altura) / 2;

    printf ("Resultado = %d\n", res);
    contador++;
    }


    return 0;
}
