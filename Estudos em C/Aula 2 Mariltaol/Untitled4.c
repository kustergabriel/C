#include <stdio.h>

// mesmo codigo do tres so que com while

int main () {


    int i = 0,n;
    float valor, media;

    printf ("Entre com o numero de valores\n");
    scanf ("%d", &n);
    while (i < n ) {
        printf ("Entre com o %d valor\n", i + 1 );
        scanf ("%f", &valor);
        media += valor;
        i++;
    }
    media /= valor;
    printf ("A media desses valores eh %1.f\n", media);

return 0;
}
