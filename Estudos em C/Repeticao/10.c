#include <stdio.h>

/*
 */

int main () {


    float horas_trab, sal_bruto, sal_desc, desc_inss, desc_ir;
    int nro_dep,cod,i;
    i = 0;

    while (i <= 20) {
    printf ("Insira o seu Codigo: ");
    scanf ("%d", &cod);
    printf ("Insira as horas trabalhadas\n");
    scanf ("%f", &horas_trab);
    printf ("Insira o nro de dependentes\n");
    scanf ("%d", &nro_dep);

    sal_bruto = 12*horas_trab + 40*nro_dep;
    desc_inss = sal_bruto * 0.085;
    desc_ir = sal_bruto * 0.05;
    sal_desc = sal_bruto - desc_ir - desc_inss;

    printf ("Codigo: %d\n", cod);
    printf ("Salario Bruto: %.2f\n", sal_bruto);
    printf ("Desconto INSS: %.2f\n", desc_inss);
    printf ("Desconto IR: %.2f\n", desc_ir);
    printf ("Salario LIQUIDO: %.2f\n", sal_desc);
    i++;
    }

    return 0;
}
