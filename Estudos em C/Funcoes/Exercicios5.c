#include <stdio.h>

int SomaDivisores (int n);

int main () {

    int numero,i;

    for (i = 0; i < 5; i++){
        printf ("Insira o numero (%d) de (5)\n", i+1);
        scanf ("%d",&numero);
        if (numero > 0 )
        printf ("\nSoma dos DIVISORES: %d\n", SomaDivisores (numero));
        else printf ("Valor menor ou igual a zero!\n");
    }
return 0;
}

int SomaDivisores (int n) {
    int i = 1, soma = 0;

    while (n > i){
        if (n % i == 0) { // procura o valor dos divisores
            soma = soma+i; // soma os divisores
            printf ("(%d) ", i); //imprime os divisores
        }
        i++;
    }
    return soma;
}
