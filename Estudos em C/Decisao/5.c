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

    if (numa < (numb+numc) && numb <(numc+numa) && (numc < (numa+numb)))
        printf ("Sao lados de um triangulo!");
        else
            printf ("Nao sao lados de um triangulo");

    return 0;
}
