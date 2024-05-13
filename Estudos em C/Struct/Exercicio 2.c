#include <stdio.h>

struct Retangulo {
    int altura,largura;
};

int area (int h, int largura);

int main () {

    struct Retangulo ret1;

    printf ("Insira a base a altura para calcular um retangulo: ");
    scanf ("%d %d", &ret1.altura, &ret1.largura);

    printf ("Resultado: %d", area(ret1.altura,ret1.largura));


    return 0;
}

int area (int h, int largura) {

    int res = h*largura;
    return res;
}

