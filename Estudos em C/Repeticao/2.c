#include <stdio.h>
#define consta 5

/*Dado uma s�rie de 20 valores reais, fa�a um algoritmo que calcule
e escreva a m�dia aritm�tica destes valores, entretanto se a m�dia
obtida for maior que 8 dever� ser atribu�da 10 para a m�dia.*/


int main () {

    int i;
    float valores,soma, media;

    i = consta;
    soma = 0;

    while (i >= 0) {
        printf ("Insira %d valores reais para calcular a media: \n", i);
        scanf ("%f", &valores);
        soma = soma + valores;
        i--;
    }
        media = soma / consta;
            if (media >= 8.0)
                media = 10;

            printf ("Media -> %.2f\n", media);


    return 0;
}
