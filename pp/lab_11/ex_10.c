#include <stdio.h>
#include <string.h>

int main()
{
  char filename[100];
  printf("Informe o nome do arquivo de entrada: ");
  scanf("%s", filename);
  FILE *file = fopen(filename, "r");
  if (file == NULL)
  {
    printf("Erro ao abrir o arquivo %s", filename);
    return 1;
  }
  char city[40];
  int population;
  char most_populated_city[40];
  int most_populated_city_population = 0;
  while (fscanf(file, "%s %d", city, &population) != EOF)
  {
    if (population > most_populated_city_population)
    {
      most_populated_city_population = population;
      strcpy(most_populated_city, city);
    }
  }
  fclose(file);
  printf("Informe o nome do arquivo de saida: ");
  scanf("%s", filename);
  file = fopen(filename, "w");
  if (file == NULL)
  {
    printf("Erro ao abrir o arquivo %s", filename);
    return 1;
  }
  fprintf(file, "%s %d", most_populated_city, most_populated_city_population);
  fclose(file);
  return 0;
}