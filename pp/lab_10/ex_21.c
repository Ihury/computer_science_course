/*
 Faça  um  programa  que  leia  quatro  números  a,  b,  c  e  d,  que  serão  as  dimensões  de  duas
matrizes, e:
a) Crie e leia uma matriz, dadas as dimensões dela;
b) Crie e construa uma matriz que seja o produto de duas matrizes. Na sua função main(),
imprima as duas matrizes e o produto entre elas, se existir.
*/
#include <stdio.h>

int main()
{
  int **p, **t, **r, i, j, k, n, m, l, o;
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
  printf("Digite o tamanho da matriz: ");
  scanf("%d %d", &l, &o);
  t = (int **)malloc(l * sizeof(int *));
  for (i = 0; i < l; i++)
  {
    t[i] = (int *)malloc(o * sizeof(int));
  }
  for (i = 0; i < l; i++)
  {
    for (j = 0; j < o; j++)
    {
      printf("Digite um número: ");
      scanf("%d", &t[i][j]);
    }
  }
  if (m == l)
  {
    r = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
      r[i] = (int *)malloc(o * sizeof(int));
    }
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < o; j++)
      {
        r[i][j] = 0;
        for (k = 0; k < m; k++)
        {
          r[i][j] += p[i][k] * t[k][j];
        }
      }
    }
    printf("Matriz original:\n");
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
      {
        printf("%d ", p[i][j]);
      }
      printf("\n");
    }
    printf("Matriz original:\n");
    for (i = 0; i < l; i++)
    {
      for (j = 0; j < o; j++)
      {
        printf("%d ", t[i][j]);
      }
      printf("\n");
    }
    printf("Matriz original:\n");
    for (i = 0; i < n; i++)
    {
      for (j = 0; j < o; j++)
      {
        printf("%d ", r[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Não é possível multiplicar as matrizes.\n");
  }
  return 0;
}