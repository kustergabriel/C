#include <stdio.h>
#include <stdlib.h>


int main () {

    char nomeauto [35];
    float precofab,imposto, precofinal;

    printf ("Insira o Nome do automovel e o preco de fabrica\n");
    scanf ("%s %f", &nomeauto, &precofab);

    imposto = precofab * (0.45 + 0.28);
    precofinal = precofab + imposto;

    printf ("Nome do Auto: %s\nPreco final: %.2f", nomeauto, precofinal);


return 0;
}
