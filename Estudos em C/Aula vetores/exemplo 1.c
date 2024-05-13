#include <stdio.h>
#define Vet 50


int main () {

    float nota [Vet]; //posicoes de um vetor
    int i;
    for (i = 0; i < Vet; i++){
        printf ("Nota %d:\n", i+1);
        scanf ("%f", &nota[i]);
    }

    return 0;
}
