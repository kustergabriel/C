#include <stdio.h>



int main () {


    int mes;

    printf ("Entre com o mes: ");
    scanf ("%d", &mes);

    switch (mes) {
             case  1:
                 printf ("Mes com 31 dias");
                 break;
             case  3:
                 printf ("Mes com 31 dias");
                 break;
             case  5:
                 printf ("Mes com 31 dias");
                 break;
             case  7:
                 printf ("Mes com 31 dias");
                 break;
             case  8:
                 printf ("Mes com 31 dias");
                 break;
             case  10:
                 printf ("Mes com 31 dias");
                 break;
             case  12:
                 printf ("Mes com 31 dias");
                 break;
             case 4:
                 printf ("Mes com 30 dias");
                 break;
             case 6:
                 printf ("Mes com 30 dias");
                 break;
             case 9:
                 printf ("Mes com 30 dias");
                 break;
             case 11:
                 printf ("Mes com 30 dias");
                 break;
             case 2:
                 printf ("Mes com 28 ou 29 dias");
                 break;
             default:
                 printf ("Nao eh um mes valido");
    }





    return 0;
}
