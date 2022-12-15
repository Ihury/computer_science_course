/*
Faça um programa que leia um vetor com os dados de 5 carros: marca (máximo 15 letras), 
ano e preço. Leia um valor p e mostre as informações de todos os carros com preço menor 
que p. Repita este processo até que seja lido um valor p = 0. 
*/
#include <stdio.h>

struct Carro
{
  char marca[15];
  int ano;
  float preco;
};

int main()
{
  struct Carro carros[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite a marca do carro %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(carros[i].marca, 15, stdin);
    printf("Digite o ano do carro %d: ", i + 1);
    scanf("%d", &carros[i].ano);
    printf("Digite o preço do carro %d: ", i + 1);
    scanf("%f", &carros[i].preco);
    printf("\n");
  }

  float p;
  printf("Digite um valor para p: ");
  scanf("%f", &p);
  while (p != 0)
  {
    for (int i = 0; i < 5; i++)
    {
      if (carros[i].preco < p)
      {
        printf("Marca: %s\nAno: %d\nPreço: %.2f\n\n", carros[i].marca, carros[i].ano, carros[i].preco);
      }
    }
    printf("Digite um valor para p: ");
    scanf("%f", &p);
  }

  return 0;
}