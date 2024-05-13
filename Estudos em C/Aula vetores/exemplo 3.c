#include <stdio.h>

// GETCHAR le caracter a caracter!!!!!

int main () {

    char c,linha[100];
    int i = 0;

    while ((c = getchar())!= '\n' ) {
        linha [i] = c;
        i++;
    }
    linha[i] = '\n'; //final de string
    printf ("%s", linha);


    return 0;
}
