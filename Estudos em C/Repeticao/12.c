#include <stdio.h>

/*Fa�a um programa que mostre os divisores de n�meros inteiros fornecidos
pelo usu�rio. Encerrar o programa quando o usu�rio fornecer o n�mero zero. */

int main () {

    int numero,divisores,contador;
    contador = 0;

    printf ("Insira um numero para achar os seus divisores (ZERO para sair): ");
    scanf ("%d", &numero);
        if (numero == 0) {
            printf ("Encerrando o programa");
            return 0;
        }
    printf ("Divisores de %d ", numero);
        for (int i = 1; i <= numero; i++) {
            if (numero % i == 0)
                printf ("%d ", i);
        }

    return 0;
}
