/*
Construa uma estrutura aluno com nome, número de matrıcula e curso. Leia do usuário a 
informação de 5 alunos, armazene em um vetor dessa estrutura e imprima os dados na tela
*/
#include <stdio.h>

struct Aluno
{
  char nome[100];
  int matricula;
  char curso[100];
};

int main()
{
  struct Aluno alunos[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o nome do aluno %d: ", i + 1);
    scanf("%s", alunos[i].nome);
    printf("Digite a matrícula do aluno %d: ", i + 1);
    scanf("%d", &alunos[i].matricula);
    printf("Digite o curso do aluno %d: ", i + 1);
    scanf("%s", alunos[i].curso);
    printf("\n");
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Nome: %s\nMatrícula: %d\nCurso: %s\n\n", alunos[i].nome, alunos[i].matricula, alunos[i].curso);
  }

  return 0;
}