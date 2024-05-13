#include <stdio.h>



int main () {

    char s[20];
    int i;

    //scanf ("%d" , &i); //nao le nada
    //scanf ("%s", s); // le ate o espaco
    //scanf ("%[^\n]s", s); //le tudo
    scanf ("%19[^\n]s", s); // limita ate o tamanho do vetor-1.
    printf ("%s\n", s);

    return 0;
}
