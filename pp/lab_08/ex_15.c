/*
Faça um programa para armazenar um livro de receitas e: 
 Crie  um  vetor  de  5  receitas,  que  deve  ter  nome  (máximo  25  letras),  quantidade  de 
ingredientes e ingredientes; 
 Para cada receita, leia seu nome e a quantidade de ingredientes. Então crie e leia o vetor 
de ingredientes, sendo que cada ingrediente contém nome e quantidade; 
 Procure receita por nome, mostrando seus ingredientes se encontrar. Se não encontrar, 
informe ao usuário. Repita o processo até digitar uma string vazia. 
*/
#include <stdio.h>
#include <string.h>

struct Ingrediente
{
  char nome[25];
  int quantidade;
};

struct Receita
{
  char nome[25];
  int quantidade_ingredientes;
  struct Ingrediente ingredientes[5];
};

int main()
{
  struct Receita receitas[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o nome da receita %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(receitas[i].nome, 25, stdin);    

    printf("Digite a quantidade de ingredientes da receita %d: ", i + 1);
    scanf("%d", &receitas[i].quantidade_ingredientes);

    for (int j = 0; j < receitas[i].quantidade_ingredientes; j++)
    {
      printf("Digite o nome do ingrediente %d da receita %d: ", j + 1, i + 1);
      setbuf(stdin, NULL);
      fgets(receitas[i].ingredientes[j].nome, 25, stdin);      

      printf("Digite a quantidade do ingrediente %d da receita %d: ", j + 1, i + 1);
      scanf("%d", &receitas[i].ingredientes[j].quantidade);
    }
    printf("\n");
  }

  char nome[25];
  printf("Digite o nome da receita que deseja procurar: ");
  scanf("%s", nome);
  while (nome[0] != '\0')
  {
    for (int i = 0; i < 5; i++)
    {
      if (strcmp(receitas[i].nome, nome) == 0)
      {
        printf("Ingredientes da receita %s: ", receitas[i].nome);
        for (int j = 0; j < receitas[i].quantidade_ingredientes; j++)
        {
          printf("%s (%d), ", receitas[i].ingredientes[j].nome, receitas[i].ingredientes[j].quantidade);
        }
        printf("\n\n");
      }
    }
    printf("Digite o nome da receita que deseja procurar: ");
    scanf("%s", nome);
  }

  return 0;
}