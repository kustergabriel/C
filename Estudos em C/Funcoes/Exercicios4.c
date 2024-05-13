#include <stdio.h>

int absoluto (int v);

int main () {

    int valor,i;

    for (i = 0; i < 5; i++) {
        printf ("Insira valores INTEIROS:\n");
        scanf ("%d", &valor);
        printf ("Valor absoluto = %d\n", absoluto(valor) );
    }
return 0;
}

int absoluto (int v){

    int neg;
    neg = 0;

    if (v < 0) {
        v *= -1;
        return v;
    }
    return v;
}
