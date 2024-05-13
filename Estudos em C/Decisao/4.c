#include <stdio.h>


int main () {

    float nota ;

    printf ("Insira sua nota!\n");
    scanf ("%f", &nota);

    if (nota <=  5.0)
        printf ("Seu conceito eh D");
    else
        if (nota >= 5.1 && nota <= 6.9)
            printf ("Seu conceito eh C");
    else
        if (nota >= 7.1 && nota <= 8.9)
            printf ("Seu conceito eh B");
    else
        printf ("PARABENS! Seu conceito eh A");

    return 0;
}
