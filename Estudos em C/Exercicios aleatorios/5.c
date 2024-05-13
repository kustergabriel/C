#include <stdio.h>
#include <math.h>


int main () {

    int np, quadrado, cubo, raiz, raizcc;

    printf ("Insira um Numero positivo!\n");
    scanf ("%d", &np);

    quadrado = pow(np , 2);
    cubo = pow(np , 3);
    raiz = sqrt (np);
    raizcc = cbrt (np);

    printf ("%d -> Quadrado\n%d -> Cubo\n%d -> Raiz\n%d -> Raiz Cubic", quadrado, cubo, raiz, raizcc);

return 0;
}
