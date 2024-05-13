#include <stdio.h>

//converte de f para c e vice-versa

int main () {

    float F, C;
    int escolha;

    printf ("Escolha 1 para F TO C e 2 para C TO F\n");
    scanf ("%d", &escolha);
        if (escolha == 1) {
                printf ("INSIRA O VALOR EM FARENHEIT\n");
                scanf ("%f", &F);
                C = (5*(F-32)/9);
                printf ("Valor em CELCIUS %.1f\n", C); // .1f para ter 1 casa apos o ponto
        } else {
            printf ("INSIRA O VALOR EM CELCIUS\n");
            scanf ("%f", &C);
            F = (C*9/5)+ 32;
            printf ("Valor em FARENHEIT%.1f\n", F);
        }
return 0;
}
