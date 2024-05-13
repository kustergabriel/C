#include <stdio.h>

//if else

int main () {

    int a,b;
    printf("Digite dois numeros\n");
    scanf("%d %d", &a, &b); //scanf de duas variaveis
    if (b)
        printf("%d\n", a/b );
    else
        printf("Nao pode dividir por zero");


return 0;
}
