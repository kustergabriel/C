#include <stdio.h>

int main () {

    int num1, num2;

    printf ("Insira o primeiro nro: \n");
    scanf ("%d", &num1);

    printf ("Insira o segundo nro: \n");
    scanf ("%d", &num2);

    if (num1 == num2)
        printf ("Numeros iguais: %d e %d", num1, num2);
        else
            printf ("Numeros Diferentes: %d e %d", num1, num2);

    return 0;
}
