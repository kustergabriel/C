#include <stdio.h>

int main () {

    int raio;
    float c = 0, a = 0;

    printf ("Insira o valor do RAIO: ");
    scanf ("%d", &raio);

    c = (2 * raio);
    a = (raio*raio) * 3,14;

    printf ("Circunferencia: %2.f PI e Area: %.2f", c, a);

return 0;
}
