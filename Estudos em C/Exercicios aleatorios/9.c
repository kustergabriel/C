#include <stdio.h>



int main () {

    int notaa,notab,notac,media ;

    printf ("Insira tres notas para fazer a media artmetica: ");
    scanf ("%d %d %d", &notaa,&notab,&notac);


    media = (notaa + notab + notac) / 3;

    printf ("%d -> Media", media);


return 0;
}
