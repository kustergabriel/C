#include <stdio.h>

/*Faça um programa que mostre os divisores de números inteiros fornecidos
pelo usuário. Encerrar o programa quando o usuário fornecer o número zero. */

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
