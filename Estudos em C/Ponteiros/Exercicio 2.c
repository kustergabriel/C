#include <stdio.h>


int main () {

    int *ptr1,*ptr2;

    printf ("Insira valores para dois ponteiros!\n");
    printf ("PTRO 1!\n");
    scanf ("%d", &ptr1);
    printf ("PTRO 2!\n");
    scanf ("%d", &ptr2);
        if (&ptr1 > &ptr2)
            printf ("1: %d", &ptr1);
        else printf ("2: %d", &ptr2);


    return 0;
}
