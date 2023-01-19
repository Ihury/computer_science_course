/*
Faça um programa que:
a) Peça para o usuário entrar com o nome e a posição (coordenadas X e Y) de N cidades e
as armazene em um vetor de estruturas (N é informado pelo usuário);
b) Crie uma matriz de distâncias entre cidades de tamanho N x N;
c) Calcule as distâncias entre cada duas cidades e armazene na matriz;
d) Exiba na tela a matriz de distancias obtida;
e) Quando  o  usuário  digitar  o  número  de  duas  cidades  o  programa  deverá  retornar  a
distância entre elas.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct city
{
  char name[100];
  double x;
  double y;
};

double distance(double x1, double y1, double x2, double y2)
{
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
  int n;
  printf("Informe o numero de cidades: ");
  scanf("%d", &n);

  struct city cities[n];

  // Entrada de dados
  for (int i = 0; i < n; i++)
  {
    printf("Informe o nome da cidade %d: ", i + 1);
    scanf("%s", cities[i].name);
    printf("Informe as coordenadas X e Y da cidade %d: ", i + 1);
    scanf("%lf %lf", &cities[i].x, &cities[i].y);
  }

  double distances[n][n];

  // Cálculo das distâncias
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      distances[i][j] = distance(cities[i].x, cities[i].y, cities[j].x, cities[j].y);
    }
  }

  // Exibição da matriz de distâncias
  printf("\nMatriz de distancias:\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      printf("%.2lf\t", distances[i][j]);
    }
    printf("\n");
  }

  int city1, city2;
  printf("\nInforme o numero das duas cidades para verificar distancia entre elas: ");
  scanf("%d %d", &city1, &city2);
  printf("A distancia entre %s e %s é de %.2lf\n", cities[city1 - 1].name, cities[city2 - 1].name, distances[city1 - 1][city2 - 1]);

  return 0;
}