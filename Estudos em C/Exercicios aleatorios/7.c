#include <stdio.h>


int main () {


    float salario, aumento, salario_aumento, porcentagem;

    printf ("Insira seu salario e a porcentagem de aumento: ");
    scanf ("%f %f", &salario, &porcentagem);


    aumento = salario *(porcentagem /100);

    salario_aumento = aumento + salario;


    printf ("Seu salario eh: %2.f", salario_aumento);



    return 0 ;
}
