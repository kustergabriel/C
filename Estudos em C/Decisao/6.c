#include <stdio.h>


int main () {

    int numa,numb,numc;

    printf ("Insira tres numeros!\n");
    printf ("Numero 1!\n");
    scanf ("%d", &numa);
    printf ("Numero 2!\n");
    scanf ("%d", &numb);
    printf ("Numero 3!\n");
    scanf ("%d", &numc);

    if (numa == numb == numc)
        printf ("EQUILATERO!");
        else if (numa == numb || numb == numc || numa == numc)
             printf ("ISOCELES!");
        else
            printf ("ESCALENO!");

    return 0;
}
