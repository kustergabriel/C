#include <stdio.h>
#define consta 5

/*Dado uma série de 20 valores reais, faça um algoritmo que calcule
e escreva a média aritmética destes valores, entretanto se a média
obtida for maior que 8 deverá ser atribuída 10 para a média.*/


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
