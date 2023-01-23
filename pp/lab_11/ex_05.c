#include <stdio.h>

int main()
{
  char filename[100];
  char c;
  printf("Informe o nome do arquivo: ");
  scanf("%s", filename);
  printf("Informe o caractere: ");
  scanf(" %c", &c);
  FILE *file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("Erro ao abrir o arquivo %s", filename);
    return 1;
  }
  int count = 0;
  char ch;
  while ((ch = fgetc(file)) != EOF)
  {
    if (ch == c)
    {
      count++;
    }
  }
  printf("O caractere %c ocorre %d vezes no arquivo %s", c, count, filename);
  fclose(file);
  return 0;
}