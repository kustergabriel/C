#include <stdio.h>



int main () {


    int mes;

    printf ("Entre com o mes: ");
    scanf ("%d", &mes);

    switch (mes) {
             case  1:
                 printf ("Janeiro");
                 break;
             case  3:
                 printf ("Marco");
                 break;
             case  5:
                 printf ("Maio");
                 break;
             case  7:
                 printf ("Julho");
                 break;
             case  8:
                 printf ("Agosto");
                 break;
             case  10:
                 printf ("Outubro");
                 break;
             case  12:
                 printf ("Dezembro");
                 break;
             case 4:
                 printf ("Abril");
                 break;
             case 6:
                 printf ("junho");
                 break;
             case 9:
                 printf ("setembro");
                 break;
             case 11:
                 printf ("novembro");
                 break;
             case 2:
                 printf ("fevereiro");
                 break;
             default:
                 printf ("Nao eh um mes valido");
    }





    return 0;
}
