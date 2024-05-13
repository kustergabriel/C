#include <stdio.h>

int potencia (int base, int expoente);

int main () {

    int a,b,res;

    printf ("Insira a BASE e o EXPOENTE\n");
    scanf ("%d %d", &a, &b);

    res = potencia(a,b);

    printf ("%d elevado a %d eh igual a %d",a,b,res );

return 0;
}


int potencia (int base, int expoente){

    int temp,i;
    temp = 1;

    while (i < expoente) {
        temp *= base;
        i++;
    }
    return temp;
}
