#include <stdio.h>


int main () {


    int i,n;
    float valor, media;

    printf ("Entre com o numero de valores\n");
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        printf ("Entre com o %d valor\n", i + 1 );
        scanf ("%f", &valor);
        media += valor;
    }
    media /= valor;
    printf ("A media desses valores eh %1.f\n", media);

return 0;
}
