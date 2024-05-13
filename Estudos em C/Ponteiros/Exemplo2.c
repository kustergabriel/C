#include <stdio.h>


int main () {

    int x = 5, *p1 ,*p2;

    p1 = &x;
    p2 = p1;

    printf ("%d %p", *p2, &x);




return 0;
}
