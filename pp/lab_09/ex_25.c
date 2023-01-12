/*
Faça um programa que possua uma função para:
 ler  2  notas  e  retorná-las  por  parâmetro  (chamar  uma  função  dedicada  a  ler  2  notas
válidas e que devolver os 2 números lidos);
 calcular  a  média  simples  e  a  média  ponderada  e  retorná-las  por  parâmetro,  onde  a
segunda nota tem peso 2: media_ponderada = (n1 + n2*2)/3
*/
#include <stdio.h>

void lerNotas(float *n1, float *n2);
float mediaSimples(float n1, float n2);
float mediaPonderada(float n1, float n2);

void main()
{
  int nota1, nota2;

  lerNotas(&nota1, &nota2);

  printf("Média simples: %f\n", mediaSimples(nota1, nota2));
  printf("Média ponderada: %f\n", mediaPonderada(nota1, nota2));
}

void lerNotas(float *n1, float *n2)
{
  printf("Digite a primeira nota: ");
  scanf("%f", n1);

  printf("Digite a segunda nota: ");
  scanf("%f", n2);
}

float mediaSimples(float n1, float n2)
{
  return (n1 + n2) / 2;
}

float mediaPonderada(float n1, float n2)
{
  return (n1 + n2 * 2) / 3;
}