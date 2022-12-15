/*
Faça um programa que armazena filmes produzidos por vários diretores e: 
 Crie  e  leia  um  vetor  de  5  diretores,  cada  um  contendo  nome  (máximo  20  letras), 
quantidade de filmes e filmes. O membro filmes é um vetor, que deve ser criado após 
ter lido quantidade de filmes. Cada filme é composto por nome, ano e duração; 
 Procure um diretor por nome, mostrando todos os filmes que ele já produziu. Repita o 
processo até digitar uma string vazia. 
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Filme
{
  char nome[20];
  int ano;
  int duracao;
};

struct Diretor
{
  char nome[20];
  int quantidade_filmes;
  struct Filme *filmes;
};

int main()
{
  struct Diretor diretores[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o nome do diretor %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(diretores[i].nome, 20, stdin);
    
    printf("Digite a quantidade de filmes do diretor %d: ", i + 1);
    scanf("%d", &diretores[i].quantidade_filmes);
    diretores[i].filmes = (struct Filme *)malloc(diretores[i].quantidade_filmes * sizeof(struct Filme));
    
    for (int j = 0; j < diretores[i].quantidade_filmes; j++)
    {
      printf("Digite o nome do filme %d do diretor %d: ", j + 1, i + 1);
      setbuf(stdin, NULL);
      fgets(diretores[i].filmes[j].nome, 20, stdin);

      printf("Digite o ano do filme %d do diretor %d: ", j + 1, i + 1);
      scanf("%d", &diretores[i].filmes[j].ano);

      printf("Digite a duração do filme %d do diretor %d: ", j + 1, i + 1);
      scanf("%d", &diretores[i].filmes[j].duracao);
    }
    printf("\n");
  }

  char nome[20];
  printf("Digite o nome do diretor que deseja procurar: ");
  setbuf(stdin, NULL);
  fgets(nome, 20, stdin);
    
  while (nome[0] != '\0')
  {
    for (int i = 0; i < 5; i++)
    {
      if (strcmp(diretores[i].nome, nome) == 0)
      {
        printf("Filmes do diretor %s: ", diretores[i].nome);
        for (int j = 0; j < diretores[i].quantidade_filmes; j++)
        {
          printf("%s (%d), ", diretores[i].filmes[j].nome, diretores[i].filmes[j].ano);
        }
        printf("\n\n");
      }
    }
    printf("Digite o nome do diretor que deseja procurar: ");
    scanf("%s", nome);
  }
}