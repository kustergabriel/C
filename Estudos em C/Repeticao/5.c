#include <stdio.h>

/* Dado um conjunto de 20 valores reais, faça um algoritmo que:
a) Imprima os valores que não são negativos.
b) Calcule e imprima a média dos valores < 0.
*/

int main () {

    int contador,numero,soma,media,contamenor;
    contador = 1;
    contamenor = 0;
    soma = 0;
    while (contador <= 5) {
    printf ("Insira numeros reais!\n");
    scanf ("%d", &numero);
    if (numero >= 0)
       printf ("Numero maior que ZERO: %d\n", numero);
       else
    soma = soma + numero;
    contamenor = contamenor+1;
    contador++;
    }
    media = soma / contamenor;
    printf ("MEDIA dos valores menores que ZERO: %d\n", media);

    return 0;
}
