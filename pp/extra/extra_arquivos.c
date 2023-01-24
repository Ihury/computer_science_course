/*
Escreva um programa em C que leia um arquivo texto (o usuário deverá digitar o nome do arquivo).
O arquivo está organizado de tal forma que cada linha contém uma palavra.
Faça a leitura desse arquivo e depois copie apenas as vogais para o arquivo de destino “apenasVogais.txt” (cada conjunto de vogais em uma linha).
Utilize as funções de leitura (fscanf) e escrita (fprintf), e considere vogais em caixa alta e caixa baixa.
*/
#include <stdio.h>

char *obterVogais(char *palavra)
{
}

int main()
{
  FILE *entrada, *saida;

  char nomeArquivo[30];
  printf("Informe o nome do arquivo de entrada: ");  
  scanf("%s", nomeArquivo);

  entrada = fopen(nomeArquivo, "r");
  if (entrada == NULL)
  {
    printf("Erro ao abrir o arquivo de entrada!");
    return 0;
  }
  saida = fopen("apenasVogais.txt", "w");
  if (saida == NULL)
  {
    printf("Erro ao abrir o arquivo de saída!");
    return 0;
  }

  char palavra[100];

  while (fscanf(entrada, "%s", palavra) != EOF)
  {    
    char novaPalavra[100];
    int cont = 0;
  
    for (int i = 0; palavra[i] != '\0'; i++)
    {           
      char vogais[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
      for (int j = 0; j < 10; j ++)
      {
        if (palavra[i] == vogais[j])
        {
          novaPalavra[cont] = palavra[i];
          cont++;
          break;
        }
      }
    }
    novaPalavra[cont] = '\0';
    fprintf(saida, "%s\n", novaPalavra);
  }

  fclose(entrada);
  fclose(saida);

  return 0;
}