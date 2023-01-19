/*
Escreva  um  programa  que  aloque  dinamicamente  uma  matriz  (de  inteiros)  de  dimensões
definidas pelo usuário e a leia. Em seguida, implemente uma função que receba um valor,
retorne 1 caso o valor esteja na matriz ou retorne 0 caso não esteja na matriz.
*/
#include <stdio.h>

int verify(int **p, int n, int m, int num);

int main(void)
{
  int **p, i, j, n, m, num;
  printf("Digite o tamanho da matriz: ");
  scanf("%d %d", &n, &m);
  p = (int **)malloc(n * sizeof(int *));
  for (i = 0; i < n; i++)
  {
    p[i] = (int *)malloc(m * sizeof(int));
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("Digite um número: ");
      scanf("%d", &p[i][j]);
    }
  }
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      printf("%d ", p[i][j]);
    }
    printf("\n");
  }
  printf("Digite um número: ");
  scanf("%d", &num);

  int res = 0;
  res = verify(p, n, m, num);

  for (i = 0; i < n; i++)
  {
    free(p[i]);
  }
  free(p);
  return 0;
}

int num(int **p, int n, int m, int num)
{
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      if (p[i][j] == num)
      {
        return 1;
      }
    }
  }
  return 0;
}