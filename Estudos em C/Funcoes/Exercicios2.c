#include <stdio.h>
#include <math.h>

float DistanciaPontos (float pontox1, float pontox2, float pontoy1, float pontoy2);


int main () {

    float x1,x2,y1,y2,res;

    printf ("Digite os pontos X e Y do ponto 1\n");
    scanf ("%f %f", &x1, &y1);
    printf ("Digite os pontos X e Y do ponto 2\n");
    scanf ("%f %f", &x2, &y2);

    res = DistanciaPontos (x1,x2,y1,y2);

    printf ("A distancia entre pontos eh:%2.f", res);

return 0;
}


float DistanciaPontos (float pontox1, float pontox2, float pontoy1, float pontoy2){

    float raiz,dimix,dimiy,somatudo;
    dimix = pontox1 - pontox2; // distancia entre dois pontos
    dimiy = pontoy1 - pontoy2; // distancia entre os pontos
    somatudo = pow(dimix,2) + pow(dimiy,2); //
    raiz = sqrt (somatudo);
    return raiz;
}
