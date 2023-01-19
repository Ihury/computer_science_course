/*
Considere um cadastro de produtos de um estoque, com as seguintes informações para cada
produto:
 Código de identificação do produto: representado por um valor inteiro
 Nome do produto: com até 50 caracteres
 Quantidade disponível no estoque: representado por um número inteiro
 Preço de venda: representado por um valor real
a) Defina  uma  estrutura,  denominada  produto,  que  tenha  os  campos  apropriados  para
guardar as informações de um produto;
b) Crie um conjunto de N produtos (N é um valor fornecido pelo usuário) e peca ao usuário
para entrar com as informações de cada produto;
c) Encontre o produto com o maior preço de venda;
d) Encontre o produto com a maior quantidade disponível no estoque.
*/
#include <stdio.h>

typedef struct
{
  int codigo;
  char nome[50];
  int quantidade;
  float preco;
} Produto;

int main(void)
{
  Produto *p;
  int i, n, maior_preco, maior_quantidade;
  printf("Digite o número de produtos: ");
  scanf("%d", &n);
  p = (Produto *)malloc(n * sizeof(Produto));
  for (i = 0; i < n; i++)
  {
    printf("Digite o código do produto: ");
    scanf("%d", &p[i].codigo);
    printf("Digite o nome do produto: ");
    scanf("%s", p[i].nome);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &p[i].quantidade);
    printf("Digite o preço do produto: ");
    scanf("%f", &p[i].preco);
  }
  maior_preco = 0;
  for (i = 0; i < n; i++)
  {
    if (p[i].preco > p[maior_preco].preco)
    {
      maior_preco = i;
    }
  }
  maior_quantidade = 0;
  for (i = 0; i < n; i++)
  {
    if (p[i].quantidade > p[maior_quantidade].quantidade)
    {
      maior_quantidade = i;
    }
  }
  printf("Produto com maior preço: %s - Preço: %.2f - Quantidade: %d\n", p[maior_preco].nome, p[maior_preco].preco, p[maior_preco].quantidade);

  printf("Produto com maior quantidade: %s - Preço: %.2f - Quantidade: %d\n", p[maior_quantidade].nome, p[maior_quantidade].preco, p[maior_quantidade].quantidade);

  free(p);
  return 0;
}