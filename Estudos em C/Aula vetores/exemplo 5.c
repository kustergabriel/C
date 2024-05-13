#include <stdio.h>

// fgets LE STRING
// puts insere string

int main () {

    char str [31];

    printf ("Digite seu nome: ");
    fgets (str , 30 , stdin);
    puts (str);

    return 0;
}
