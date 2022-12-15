/*
Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene
os dados em uma estrutura.
*/
#include <stdio.h>

struct Pessoa
{
  char nome[100];
  int idade;
  char endereco[100];
};

int main()
{
  struct Pessoa pessoa;
  printf("Digite o nome da pessoa: ");
  scanf("%s", pessoa.nome);
  printf("Digite a idade da pessoa: ");
  scanf("%d", &pessoa.idade);
  printf("Digite o endereço da pessoa: ");
  scanf("%s", pessoa.endereco);

  printf("Nome: %s\nEndereço: %s\nIdade: %d\n", pessoa.nome, pessoa.endereco, pessoa.idade);

  return 0;
}