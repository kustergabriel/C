#include <stdio.h>

int main () {

    int num = 5, *ptr_num;

    ptr_num = &num;

    printf ("%d , %d", *ptr_num , num);


return 0;
}

