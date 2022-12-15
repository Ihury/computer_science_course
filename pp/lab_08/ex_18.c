/*
 Escreva um programa que receba dois structs do tipo “dma”, cada um representando uma 
data válida, e calcule o número de dias que decorreram entre as duas datas. 
 
struct dma { 
    int dia; 
    int mes; 
    int ano; 
}; 
*/
#include <stdio.h>

struct dma
{
  int dia;
  int mes;
  int ano;
};

int main()
{
  struct dma data1, data2;
  printf("Digite a primeira data (dd/mm/aaaa):\n");
  scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);

  printf("Digite a segunda data (dd/mm/aaaa):\n");
  scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

  int dias1 = data1.dia + (data1.mes * 30) + (data1.ano * 365);
  int dias2 = data2.dia + (data2.mes * 30) + (data2.ano * 365);

  int dias = dias2 - dias1;

  printf("Dias decorridos: %d\n", dias < 0 ? dias * -1 : dias);

  return 0;
}