/*
Faça um programa que seja uma agenda de compromissos e: 
 Crie e leia um vetor de 5 estruturas de dados com: compromisso (máximo 60 letras) e 
data. A data deve ser outra estrutura de dados contendo dia, mês e ano; 
 Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o 
procedimento até ler M = 0. 
*/
#include <stdio.h>

struct Data
{
  int dia;
  int mes;
  int ano;
};

struct Compromisso
{
  char compromisso[60];
  struct Data data;
};

int main()
{
  struct Compromisso compromissos[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o compromisso %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(compromissos[i].compromisso, 60, stdin);    
    printf("Digite o dia do compromisso %d: ", i + 1);
    scanf("%d", &compromissos[i].data.dia);
    printf("Digite o mês do compromisso %d: ", i + 1);
    scanf("%d", &compromissos[i].data.mes);
    printf("Digite o ano do compromisso %d: ", i + 1);
    scanf("%d", &compromissos[i].data.ano);
    printf("\n");
  }

  int m, a;
  printf("Digite um mês: ");
  scanf("%d", &m);
  printf("Digite um ano: ");
  scanf("%d", &a);
  while (m != 0)
  {
    for (int i = 0; i < 5; i++)
    {
      if (compromissos[i].data.mes == m && compromissos[i].data.ano == a)
      {
        printf("Compromisso: %s\nDia: %d\nMês: %d\nAno: %d\n\n", compromissos[i].compromisso, compromissos[i].data.dia, compromissos[i].data.mes, compromissos[i].data.ano);
      }
    }
    printf("Digite um mês: ");
    scanf("%d", &m);
    printf("Digite um ano: ");
    scanf("%d", &a);
  }

  return 0;
}