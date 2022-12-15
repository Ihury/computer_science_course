/*
 Faça um programa que controle o fluxo de voos nos aeroportos de um país. Com V = 5 (voos) 
e A = 5 (aeroportos) e: 
 Crie e leia um vetor de voos, sendo que cada voo  contém um código de aeroporto de 
origem e um de destino; 
 Crie um vetor de aeroportos, sendo que cada aeroporto contém seu código, quantidade 
de voos que saem e quantidade de voos que chegam. 
Nota:  Cada  aeroporto  é  identificado  por  um  código  inteiro  entre  0  e  (A-1).  Não  aceite 
aeroportos de código inexistente
*/
#include <stdio.h>

struct Voo
{
  int codigo_origem;
  int codigo_destino;
};

struct Aeroporto
{
  int codigo;
  int voos_saindo;
  int voos_chegando;
};

int main()
{
  struct Voo voos[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o código do aeroporto de origem do voo %d: ", i + 1);
    scanf("%d", &voos[i].codigo_origem);
    printf("Digite o código do aeroporto de destino do voo %d: ", i + 1);
    scanf("%d", &voos[i].codigo_destino);
    printf("\n");
  }

  struct Aeroporto aeroportos[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o código do aeroporto %d: ", i + 1);
    scanf("%d", &aeroportos[i].codigo);
    aeroportos[i].voos_saindo = 0;
    aeroportos[i].voos_chegando = 0;
    printf("\n");
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (voos[i].codigo_origem == aeroportos[j].codigo)
      {
        aeroportos[j].voos_saindo++;
      }
      if (voos[i].codigo_destino == aeroportos[j].codigo)
      {
        aeroportos[j].voos_chegando++;
      }
    }
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Aeroporto %d: %d voos saindo e %d voos chegando\n", aeroportos[i].codigo, aeroportos[i].voos_saindo, aeroportos[i].voos_chegando);
  }

  return 0;
}