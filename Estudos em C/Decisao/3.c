#include <stdio.h>

int main () {

    int num1,num2,num3;

    printf ("Insira tres numeros: \n");
    scanf ("%d %d %d", &num1,&num2,&num3);


    if (num1 > num2 && num1 > num3)
        printf ("O Primeiro numero eh maior %d", num1);
        else
            if (num2 > num1 && num2 > num3)
                printf ("O Segundo numero eh maior %d", num2);
        else
            printf ("O Terceiro numero eh maior %d", num3);


    return 0;
}
