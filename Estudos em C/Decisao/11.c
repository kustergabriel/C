#include <stdio.h>



int main () {


    char mes [20];

    printf ("Insira o mes por extenso e informe o tanto de dias que ele tem: ");
    scanf ("%s", &mes);

    switch (mes) {
             case  "Janeiro":
                 printf ("Mes com 31 dias");
                 break;
             case  "Marco":
                 printf ("Mes com 31 dias");
                 break;
             case  "Maio":
                 printf ("Mes com 31 dias");
                 break;
             case  "Julho":
                 printf ("Mes com 31 dias");
                 break;
             case  "Agosto":
                 printf ("Mes com 31 dias");
                 break;
             case  "Outubro":
                 printf ("Mes com 31 dias");
                 break;
             case  "Dezembro":
                 printf ("Mes com 31 dias");
                 break;
             case "Abril":
                 printf ("Mes com 30 dias");
                 break;
             case "Junho":
                 printf ("Mes com 30 dias");
                 break;
             case Setembro:
                 printf ("Mes com 30 dias");
                 break;
             case "Novembro":
                 printf ("Mes com 30 dias");
                 break;
             case "Fevereiro":
                 printf ("Mes com 28 ou 29 dias");
                 break;
             default:
                 printf ("Nao eh um mes valido");
    }



    return 0;
}
