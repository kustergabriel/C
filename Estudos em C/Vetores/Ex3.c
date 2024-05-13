#include <stdio.h>
#define TAM 5


int main () {


    int nro [TAM],i, maior;
    maior = 0;

    for (i = 0; i < TAM; i++) {
        printf ("Insira Numeros inteiros: ");
        scanf ("%d", &nro[i]);
    }
    for (i = 0; i < TAM; i++) {
        if (nro [i] > maior)
            maior = nro [i];
    }
        printf ("Numero maior -> %d", maior);

return 0;
}
