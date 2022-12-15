/*
Faça um programa que controla o consumo de energia dos eletrodomésticos de sua casa e: 
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras), potência (real, em 
kW) e tempo ativo por dia (real, em horas); 
 Leia  um  tempo  t  (em  dias),  calcule  e  mostre  o  consumo  total  na  casa  e  o  consumo 
relativo de cada eletrodoméstico (consumo/consumo total) nesse período de tempo. 
Apresente este último dado em porcentagem.
*/
#include <stdio.h>

struct Eletrodomestico
{
  char nome[15];
  float potencia;
  float tempo_ativo;
};

int main()
{
  struct Eletrodomestico eletrodomesticos[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o nome do eletrodoméstico %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(eletrodomesticos[i].nome, 15, stdin);    
    printf("Digite a potência do eletrodoméstico %d: ", i + 1);
    scanf("%f", &eletrodomesticos[i].potencia);
    printf("Digite o tempo ativo do eletrodoméstico %d: ", i + 1);
    scanf("%f", &eletrodomesticos[i].tempo_ativo);
    printf("\n");
  }

  int t;
  printf("Digite um valor para t: ");
  scanf("%d", &t);
  float consumo_total = 0;
  for (int i = 0; i < 5; i++)
  {
    consumo_total += eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo * t;
  }
  printf("Consumo total: %.2f\n", consumo_total);
  for (int i = 0; i < 5; i++)
  {
    printf("Consumo relativo do eletrodoméstico %d: %.2f%%\n", i + 1, (eletrodomesticos[i].potencia * eletrodomesticos[i].tempo_ativo * t) / consumo_total * 100);
  }

  return 0;
}