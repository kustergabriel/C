#include <stdio.h>


/* Dado um conjunto de n registros cada registro contendo um valor real,
faça um algoritmo que calcule a média dos valores maiores que 4.*/


int main () {

    int contador,N,maior4;
    float numero, soma, media;
    contador = 1;
    maior4 = 0;
    soma = 0;

    printf ("Entre com o numero de registros: ");
    scanf ("%d", &N);

    while (contador <= N) {
        printf ("Insira valores reais: ");
        scanf ("%f", &numero);
            if (numero > 4) {
                soma = soma + numero;
                maior4 = maior4 + 1;
            }
        contador++;
    }
    media = soma/maior4;
    printf ("Media dos valores maiores que 4 -> %2.f", media);

    return 0;
}
