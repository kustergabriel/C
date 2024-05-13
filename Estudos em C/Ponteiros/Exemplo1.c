#include <stdio.h>


int main () {

    int target , source = 5, *m;
    m = &source; // m aponta para o endereco source
    target = *m; //

    printf ("%d", target);



return 0;
}
