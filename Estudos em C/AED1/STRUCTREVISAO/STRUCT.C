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

int main() {
    Empresa emp;

    inserirnome(&emp);
    printf("Seu Nome: %s\n", emp.nome);
    insereridade(&emp);
    printf("Idade: %d\n", emp.idade);

    return 0;
}

void inserirnome(Empresa *emp) {
    printf("Digite seu nome, por favor: ");
    fgets(emp->nome, tam, stdin);
    printf("\n");

}

void insereridade(Empresa *emp) {
    printf("Insira sua idade: ");
    scanf("%d", &emp->idade);
    printf("\n");

    // Limpa o buffer de entrada para evitar problemas em leituras subsequentes
    while (getchar() != '\n');
}
