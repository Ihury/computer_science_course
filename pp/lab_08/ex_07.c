/*
Utilizando uma estrutura, faça um programa que  permita a entrada de nome, endereço e
telefone de 5 pessoas e os imprima em ordem alfabética.
*/
#include <stdio.h>
#include <string.h>

struct Pessoa
{
  char nome[100];
  char endereco[100];
  char telefone[100];
};

int main()
{
  struct Pessoa pessoas[5];

  for (int i = 0; i < 5; i++)
  {
    printf("Digite o nome da pessoa %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(pessoas[i].nome, 100, stdin);

    printf("Digite o endereço da pessoa %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(pessoas[i].endereco, 100, stdin);

    printf("Digite o telefone da pessoa %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(pessoas[i].telefone, 100, stdin);
    printf("\n");
  }

  // ordene as pessoas pelo nome em ordem alfabética
  int ordem[5];
  for (int i = 0; i < 5; i++)
  {
    ordem[i] = i;
  }

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      if (strcmp(pessoas[ordem[i]].nome, pessoas[ordem[j]].nome) < 0)
      {
        int aux = ordem[i];
        ordem[i] = ordem[j];
        ordem[j] = aux;
      }
    }
  }

  for (int i = 0; i < 5; i++)
  {
    printf("Nome: %s\n", pessoas[ordem[i]].nome);
    printf("Endereço: %s\n", pessoas[ordem[i]].endereco);
    printf("Telefone: %s\n", pessoas[ordem[i]].telefone);
    printf("\n");
  }

  return 0;
}