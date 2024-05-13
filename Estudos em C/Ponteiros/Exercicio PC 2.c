#include <stdio.h>

void trocavalores (int *ptr1, int *ptr2);

int main () {

    int a, b;

    printf ("Insira dois numeros!\n");
    printf ("NUMERO 1: !\n");
    scanf ("%d", &a);
    printf ("NUMERO 2: !\n");
    scanf ("%d", &b);

    printf("Valores originais: a = %d, b = %d\n", a, b);

    trocavalores (&a,&b);

    printf("Valores trocados: a = %d, b = %d\n", a, b);

    return 0;
}


void trocavalores (int *ptr1, int *ptr2) {
    int aux = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = aux;
}
