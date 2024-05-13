#include <stdio.h>
#include <stdlib.h>

int main () {

    int *p,i;
    i = 0;

    p = (int *) malloc (5* sizeof (int));   // int * serve para converter a memoria do malloc que retorn void
        if (p == NULL) {
            printf ("Erro: Sem memoria!\n");
            return 1; //termina o programa
        }

    while (i < 5) {
        printf ("Insira valores para o array [%d]: ", i+1);
        scanf ("%d", &p[i]);
        i++;
    }

    free (p);

    i = 0;
     while (i < 5) {
        printf ("\nDepois do free [%d]: ", p[i]);
        i++;
    }

    return 0;
}
