/*
Faça um programa que gerencie o estoque de um mercado e: 
 Crie e  leia um vetor de 5 produtos, com os dados:  código (inteiro),  nome (máximo 15 
letras), preço e quantidade; 
 Leia  um  pedido,  composto  por  um  código  de  produto  e  a  quantidade.  Localize  este 
código no vetor e, se houver quantidade suficiente para atender ao pedido 
integralmente, atualize o estoque e informe o usuário. Repita este processo até ler um 
código igual a zero. 
Se por algum motivo não for possível atender ao pedido, mostre uma mensagem 
informando qual erro ocorreu.
*/
#include <stdio.h>

struct Produto
{
  int codigo;
  char nome[15];
  float preco;
  int quantidade;
};

int main()
{
  struct Produto produtos[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o código do produto %d: ", i + 1);
    scanf("%d", &produtos[i].codigo);
    printf("Digite o nome do produto %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(produtos[i].nome, 15, stdin);    
    printf("Digite o preço do produto %d: ", i + 1);
    scanf("%f", &produtos[i].preco);
    printf("Digite a quantidade do produto %d: ", i + 1);
    scanf("%d", &produtos[i].quantidade);
    printf("\n");
  }

  int codigo, quantidade;
  printf("Digite o código do produto que deseja comprar: ");
  scanf("%d", &codigo);
  while (codigo != 0)
  {
    printf("Digite a quantidade do produto que deseja comprar: ");
    scanf("%d", &quantidade);
    for (int i = 0; i < 5; i++)
    {
      if (produtos[i].codigo == codigo)
      {
        if (produtos[i].quantidade >= quantidade)
        {
          produtos[i].quantidade -= quantidade;
          printf("Compra realizada com sucesso!\n\n");
        }
        else
        {
          printf("Não há quantidade suficiente para atender ao pedido!\n\n");
        }
      }
    }
    printf("Digite o código do produto que deseja comprar: ");
    scanf("%d", &codigo);
  }

  return 0;
}