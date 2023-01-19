/*
Escreva  um  programa  para  fazer  a  alocação  dinâmica  dos  blocos  de  dados  conforme
solicitado abaixo:
a) Vetor de 1024 Bytes (1 Kbyte);
b) Matriz de inteiros de dimensão 10 × 10;
c) Vetor para armazenar 50 registros contendo: nome do produto (30 caracteres), código
do produto (inteiro) e preço em reais;
d) Texto de até 100 linhas com até 80 caracteres em cada linha.
*/
#include <stdio.h>

int main(void)
{
  int *p, i, j, cont = 0;
  char *texto;
  struct
  {
    char nome[30];
    int codigo;
    float preco;
  } *produto;
  p = (int *)calloc(1024, sizeof(int));
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      p[i * 10 + j] = i * 10 + j;
    }
  }
  for (i = 0; i < 10; i++)
  {
    for (j = 0; j < 10; j++)
    {
      printf("%d ", p[i * 10 + j]);
    }
    printf("\n");
  }
  produto = (struct {
    char nome[30];
    int codigo;
    float preco;
  } *)malloc(50 * sizeof(struct {
               char nome[30];
               int codigo;
               float preco;
             }));
  for (i = 0; i < 50; i++)
  {
    printf("Digite o nome do produto: ");
    scanf("%s", produto[i].nome);
    printf("Digite o código do produto: ");
    scanf("%d", &produto[i].codigo);
    printf("Digite o preço do produto: ");
    scanf("%f", &produto[i].preco);
  }
  for (i = 0; i < 50; i++)
  {
    printf("Nome: %s - Código: %d - Preço: %.2f\n", produto[i].nome, produto[i].codigo, produto[i].preco);
  }
  texto = (char *)malloc(100 * 80 * sizeof(char));
  for (i = 0; i < 100; i++)
  {
    printf("Digite a linha %d: ", i + 1);
    scanf("%s", &texto[i * 80]);
  }
  for (i = 0; i < 100; i++)
  {
    printf("%s\n", &texto[i * 80]);
  }
  free(p);
  free(produto);
  free(texto);
  return 0;
}