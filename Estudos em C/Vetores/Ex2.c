#include <stdio.h>
#define var 5
/*Ler um conjunto de 100 notas, armazená-las no vetor denominado NOTA,
calcular a soma dessas notas, escrever o vetor de notas e a soma das notas
*/

int main () {

    float NOTA [var], soma, media;
    int i, j, k;
    soma = 0;
    media = 0;
    j = 0;
    for (i = 0; i < var; i++) {
    printf ("Insira as suas notas: ");
    scanf ("%f", &NOTA[i] );
        if (NOTA [i] == 10.0)
            j++;
    }

    for (i = 0; i < var; i++) {
        soma += NOTA[i];
        media = soma / var;
    }

    for (i = 0; i < var; i++){
        printf ("\nNota -> [%d] %.2f",i, NOTA[i]);
        if (NOTA[i]< media)
            printf ("\nNotas abaixo de media -> [%d] %.2f",i, NOTA[i]);
    }
        printf ("\nMedia -> %.2f", media);
        printf ("\nSoma -> %.2f", soma);
            if (j > 0)
                printf ("\nQant de notas 10.0 -> %d",j);
            else
                printf ("\nNao teve notas maior que 10.0");

return 0;
}
