/*
Crie  uma  estrutura  representando  os  alunos  de  um  determinado  curso.  A  estrutura  deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
da terceira prova.
a) Permita ao usuário entrar com os dados de 5 alunos;
b) Encontre o aluno com maior nota da primeira prova;
c) Encontre o aluno com maior média geral;
d) Encontre o aluno com menor média geral;
e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
aprovação.
*/
#include <stdio.h>

struct Aluno
{
  int matricula;
  char nome[100];
  float nota1;
  float nota2;
  float nota3;
};

int main()
{
  struct Aluno alunos[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite a matrícula do aluno %d: ", i + 1);
    scanf("%d", &alunos[i].matricula);
    printf("Digite o nome do aluno %d: ", i + 1);
    scanf("%s", alunos[i].nome);
    printf("Digite a nota 1 do aluno %d: ", i + 1);
    scanf("%f", &alunos[i].nota1);
    printf("Digite a nota 2 do aluno %d: ", i + 1);
    scanf("%f", &alunos[i].nota2);
    printf("Digite a nota 3 do aluno %d: ", i + 1);
    scanf("%f", &alunos[i].nota3);
    printf("\n");
  }

  float maiorNota1 = 0, maiorMedia = 0, menorMedia = 0;
  int indiceMaiorNota1 = 0, indiceMaiorMedia = 0, indiceMenorMedia = 0;

  for (int i = 0; i < 5; i++)
  {
    float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    if (alunos[i].nota1 > maiorNota1)
    {
      maiorNota1 = alunos[i].nota1;
      indiceMaiorNota1 = i;
    }
    if (media > maiorMedia)
    {
      maiorMedia = media;
      indiceMaiorMedia = i;
    }
    if (media < menorMedia)
    {
      menorMedia = media;
      indiceMenorMedia = i;
    }
  }

  printf("Aluno com maior nota da primeira prova: %s\n", alunos[indiceMaiorNota1].nome);
  printf("Aluno com maior média geral: %s\n", alunos[indiceMaiorMedia].nome);
  printf("Aluno com menor média geral: %s\n", alunos[indiceMenorMedia].nome);

  for (int i = 0; i < 5; i++)
  {
    float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
    if (media >= 6)
    {
      printf("Aluno %s foi aprovado com média %.2f\n", alunos[i].nome, media);
    }
    else
    {
      printf("Aluno %s foi reprovado com média %.2f\n", alunos[i].nome, media);
    }
  }

  return 0;
}