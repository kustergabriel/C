#include <stdio.h>

/* Faça um algoritmo que leia 10 números e mostre a soma e a
média dos que forem maiores que o valor 100.
*/

int main () {

    int contador, numero, soma, media,contamaiscem;
    contador = 0;
    soma = 0;
    contamaiscem = 0;
    media = 0;

    while (contador <= 5) {
        printf ("Insira 10 numeros: \n");
        scanf ("%d", &numero);
    if (numero >= 100)
        contamaiscem++;
        soma = soma + numero;
        contador++;
    }
    media = soma / contamaiscem;
    printf ("Soma = %d", soma);
    printf ("Media = %d\n", media);

    return 0;
}
