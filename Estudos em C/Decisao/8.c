#include <stdio.h>



int main () {

    int num1,num2,num3;


    printf ("Insira tres numeros para ver qual o menor!\n");
    scanf ("%d %d %d", &num1,&num2,&num3);

    if (num1 < num2 && num1 < num3)
        printf ("Numero um eh o menor: %d", num1);
        else if (num2 < num1 && num2 < num3)
            printf ("Numero dois eh o menor: %d", num2);
    else
        printf ("Numero tres eh o menor: %d", num3);


    return 0;
}
