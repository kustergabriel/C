#include <stdio.h>
#include <string.h>
#define tam 30

typedef struct DadosEmpresa {
    char nome[tam];
    int idade;
    char sexo[tam];
    int cpf;
    char cargo[tam];
    float salario;
    int diaani, anoani;
    char mesani[tam];
    int codigoset;
} Empresa;

void inserirnome(Empresa *emp);
void insereridade(Empresa *emp);
void inserirsexo(Empresa *emp);

int main() {
    Empresa emp;

    inserirnome(&emp);
    insereridade(&emp);
    inserirsexo (&emp);
    printf("Seu Nome: %s", emp.nome);
    printf("Idade: %d\n", emp.idade);
    printf("Seu Sexo: %s", emp.sexo);

    return 0;
}

void inserirnome(Empresa *emp) {
    printf("Digite seu nome, por favor: ");
    fgets(emp->nome, tam,stdin);

}

void insereridade(Empresa *emp) {
    printf("Insira sua idade: ");
    scanf("%d", &emp->idade);
    while (getchar() != '\n');

}

void inserirsexo(Empresa *emp){
    printf("Insira seu sexo: ");
    fgets(emp->sexo, tam, stdin);

}