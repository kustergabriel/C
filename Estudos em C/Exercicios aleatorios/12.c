#include <stdio.h>



int main () {

    char NOME [20];
    float horas_trab, sal_bruto, sal_desc, desc_inss, desc_ir;
    int nro_dep;

    printf ("Insira o seu nome\n");
    scanf ("%s", &NOME);
    printf ("Insira as horas trabalhadas\n");
    scanf ("%f", &horas_trab);
    printf ("Insira o nro de dependentes\n");
    scanf ("%d", &nro_dep);

    sal_bruto = 12*horas_trab + 40*nro_dep;
    desc_inss = sal_bruto * 0.085;
    desc_ir = sal_bruto * 0.05;
    sal_desc = sal_bruto - desc_ir - desc_inss;

    printf ("Nome: %s\n", NOME);
    printf ("Salario Bruto: %.2f\n", sal_bruto);
    printf ("Desconto INSS: %.2f\n", desc_inss);
    printf ("Desconto IR: %.2f\n", desc_ir);
    printf ("Salario LIQUIDO: %.2f", sal_desc);





return 0;
}
