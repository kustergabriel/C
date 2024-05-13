#include <stdio.h>
#include <float.h>

// FUNCAO PARA O LONG DOUBLE


int main() {

    printf("Storage size for float : %d \n", sizeof (long double) );
    printf("Valor MINIMO do float positivo: %LE\n",LDBL_MIN );
    printf("Valor MAXIMO do float positivo: %LE\n",LDBL_MAX );
    printf("Valor de precisao: %d\n", LDBL_DIG );

    return 0;
}
