/*
Crie um programa que declare uma estrutura (registro) para o cadastro de alunos. 
a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano 
de nascimento; 
b) Ao  início  do  programa,  o  usuário  deverá  informar  o  número  de  alunos  que  serão 
armazenados; 
c) O  programa  deverá  alocar  dinamicamente  a  quantidade  necessária  de  memória  para 
armazenar os registros dos alunos; 
d) O programa deverá pedir ao usuário que entre com as informações dos alunos. 
e) Ao final, mostrar os dados armazenados e liberar a memória alocada. 
*/
#include <stdio.h>

typedef struct {
    int matricula;
    char sobrenome[20];
    int ano_nascimento;
} Aluno;

int main(void) {
    Aluno *p;
    int i, n;
    printf("Digite o número de alunos: ");
    scanf("%d", &n);
    p = (Aluno *) malloc(n * sizeof(Aluno));
    for (i = 0; i < n; i++) {
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &p[i].matricula);
        printf("Digite o sobrenome do aluno: ");
        scanf("%s", p[i].sobrenome);
        printf("Digite o ano de nascimento do aluno: ");
        scanf("%d", &p[i].ano_nascimento);
    }
    for (i = 0; i < n; i++) {
        printf("Matrícula: %d - Sobrenome: %s - Ano de nascimento: %d\n", p[i].matricula, p[i].sobrenome, p[i].ano_nascimento);
    }

    free(p);
    return 0;
}