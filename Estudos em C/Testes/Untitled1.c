#include <stdio.h>

/* comentario de varias linhas*/

// uma linha so


int main() {

    char c;
    unsigned char uc;
    int i;
    unsigned int ui;
    float f;
    double d;

    printf ("char %lu\n", sizeof(c));
    printf ("unsigned char %lu\n", sizeof(uc));
    printf ("int %lu\n", sizeof(i));
    printf ("unsigned int %lu\n", sizeof(ui));
    printf ("float %lu\n", sizeof(f));
    printf ("double %lu\n", sizeof(d));

    return 0;
}
