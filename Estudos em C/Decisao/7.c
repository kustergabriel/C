#include <stdio.h>


int main () {


    float media;
    int freq;

    printf ("Insira a sua media e sua frequencia respectivamente!\n");
    scanf ("%f %d", &media, &freq);

    if (media >= 7.0 && freq >= 75)
        printf ("PARABENS, aprovado!\n");
        else if (media > 8.9)
            printf ("PARABENS, aprovado!\n");
            else if (media>=5 && freq>=75)
                printf ("RECUPERACAO!\n");
        else
            printf ("REPROVADO!!!\n");

    return 0;
}
