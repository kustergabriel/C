#include <stdio.h>

struct PONTO {

    int x,y;

};


int main () {

    struct PONTO ponto1;

    printf ("Insira dois PONTOS: ");
    scanf ("%d %d", &ponto1.x,&ponto1.y);
    printf ("Ponto x: %d\nPonto y: %d", ponto1.x,ponto1.y);

    return 0;
}
