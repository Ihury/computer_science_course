#include <stdio.h>

int main(void)
{
  int year;
  char filename[100];
  printf("Informe o ano corrente: ");
  scanf("%d", &year);
  printf("Informe o nome do arquivo de entrada: ");
  scanf("%s", filename);
  FILE *file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("Erro ao abrir o arquivo %s", filename);
    return 1;
  }
  printf("Informe o nome do arquivo de saida: ");
  scanf("%s", filename);
  FILE *file2 = fopen(filename, "w");
  if (file2 == NULL)
  {
    printf("Erro ao abrir o arquivo %s", filename);
    return 1;
  }
  char name[40];
  int birth_year;
  while (fscanf(file, "%s %d", name, &birth_year) != EOF)
  {
    int age = year - birth_year;
    if (age < 18)
    {
      fprintf(file2, "%s menor de idade\n", name);
    }
    else if (age > 18)
    {
      fprintf(file2, "%s maior de idade\n", name);
    }
    else
    {
      fprintf(file2, "%s entrando na maior idade\n", name);
    }
  }
  fclose(file);
  fclose(file2);
  return 0;
}