#include <stdio.h>

int main () {

    int inteiro;

    printf ("Insira um numero inteiro: ");
    scanf ("%d", &inteiro);

    if (inteiro==0)
        printf ("Numero eh ZERO\n");
    else
       if (inteiro > 0  )
        printf ("Numero Maior que ZERO\n");
    else
        printf ("Numero MENOR que ZERO\n");


    return 0;
}
