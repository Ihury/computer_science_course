/*
  Faça um programa para associar nomes as linhas de uma matriz de caracteres. O usuário irá
informar o  número máximo de nomes que  poderão ser armazenados. Cada  nome  poderá
ter até 30 caracteres com o '\0'. O usuário poderá usar 5 opções diferentes para manipular
a matriz:
a) Gravar um nome em uma linha da matriz;
b) Apagar o nome contido em uma linha da matriz;
c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome;
d) Informar um nome, procurar a linha onde ele se encontra e apagar;
e) Pedir para recuperar o nome contido em uma linha da matriz.
*/
#include <stdio.h>

int main()
{
  char **p, *n, *s, *r;
  int i, j, k, l, m, o, a, b, c, d, e;
  printf("Digite o tamanho da matriz: ");
  scanf("%d", &m);
  p = (char **)malloc(m * sizeof(char *));
  for (i = 0; i < m; i++)
  {
    p[i] = (char *)malloc(30 * sizeof(char));
  }
  for (i = 0; i < m; i++)
  {
    for (j = 0; j < 30; j++)
    {
      p[i][j] = '\0';
    }
  }
  n = (char *)malloc(30 * sizeof(char));
  s = (char *)malloc(30 * sizeof(char));
  r = (char *)malloc(30 * sizeof(char));
  do
  {
    printf("Digite uma opção: ");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
      printf("Digite o nome: ");
      scanf("%s", n);
      printf("Digite a linha: ");
      scanf("%d", &a);
      for (i = 0; i < 30; i++)
      {
        p[a][i] = n[i];
      }
      break;
    case 2:
      printf("Digite a linha: ");
      scanf("%d", &b);
      for (i = 0; i < 30; i++)
      {
        p[b][i] = '\0';
      }
      break;
    case 3:
      printf("Digite o nome: ");
      scanf("%s", s);
      printf("Digite o novo nome: ");
      scanf("%s", r);
      for (i = 0; i < m; i++)
      {
        for (j = 0; j < 30; j++)
        {
          if (p[i][j] == s[j])
          {
            k++;
          }
        }
        if (k == 30)
        {
          for (l = 0; l < 30; l++)
          {
            p[i][l] = r[l];
          }
        }
        k = 0;
      }
      break;
    case 4:
      printf("Digite o nome: ");
      scanf("%s", s);
      for (i = 0; i < m; i++)
      {
        for (j = 0; j < 30; j++)
        {
          if (p[i][j] == s[j])
          {
            k++;
          }
        }
        if (k == 30)
        {
          for (l = 0; l < 30; l++)
          {
            p[i][l] = '\0';
          }
        }
        k = 0;
      }
      break;
    case 5:
      printf("Digite a linha: ");
      scanf("%d", &c);
      for (i = 0; i < 30; i++)
      {
        printf("%c", p[c][i]);
      }
      printf("\n");
      break;
    }
  } while (o != 0);
  for (i = 0; i < m; i++)
  {
    free(p[i]);
  }
  free(p);
  free(n);
  free(s);
  free(r);
  return 0;
}