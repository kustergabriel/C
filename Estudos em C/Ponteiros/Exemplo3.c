#include <stdio.h>
#include <string.h>

// imprime a string na ordem inversa!

int main () {

    char *p = "alo mundo";
    int t;

    printf (p);
    printf ("\n");
    for (t = strlen(p) - 1; t > - 1; t--)
        printf ("%c", p[t]);

return 0;
}
