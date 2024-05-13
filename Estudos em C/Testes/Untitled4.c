#include <stdio.h>

//fazer cast

int main () {

    int a,b;
    float c;
    printf ("Entre com valor de A: \n");
    scanf ("%d", &a);
    printf ("Entre com valor de B: \n");
    scanf ("%d", &b);

    c = 2 / ((float) 1/a + (float) 1/b); //cast
    printf ("a= %d b= %d\n", a, b);
    printf ("A media harmonica de a e b eh: %f", c);


return 0;
}
