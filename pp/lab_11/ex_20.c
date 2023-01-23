#include <stdio.h>

int main(void)
{
  int n, i;
  char *p, *p2;
  FILE *arq;
  printf("Digite o número de alunos: ");
  scanf("%d", &n);
  p = (char *)malloc(n * 40 * sizeof(char));
  p2 = (char *)malloc(n * sizeof(char));
  arq = fopen("alunos.txt", "w");
  for (i = 0; i < n; i++)
  {
    printf("Digite o nome do aluno: ");
    scanf("%s", &p[i * 40]);
    printf("Digite a nota do aluno: ");
    scanf("%s", &p2[i]);
  }
  for (i = 0; i < n; i++)
  {
    fprintf(arq, "%s %s", &p[i * 40], &p2[i]);
  }
  free(p);
  free(p2);
  fclose(arq);
  return 0;
}