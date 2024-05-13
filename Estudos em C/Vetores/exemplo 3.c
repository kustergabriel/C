#include <stdio.h>
#define TAM 1000

/* esse exemplo mostra a media dos valores e tbm quantos estao
acima da media */


int main () {

    float valor[TAM], media = 0.0;
    int i,n, conta = 0;

    printf ("Digite o numero de valores\n");
    scanf ("%d", &n);
    if ((n > TAM) || (n < 1))
        printf ("Erro: o valor deve estar entre 1 e %d\n", TAM);
    else {
        for (i = 0; i < n; i++){
             printf ("Digite o %d .o valor\n", i+1);
             scanf ("%f", &valor[i]);
             media += valor[i];
        }
        media /= n;
        for (i = 0; i < n; i++)
            if (valor[i] > media)
            conta++;
        printf ("media = %f\n%d valores acima da media\n", media , conta);
    }
    return 0;
}

