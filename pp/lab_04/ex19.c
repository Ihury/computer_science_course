/*
Escreva um programa que receba como entrada o valor do saque realizado pelo cliente de
um banco e retorne quantas notas de cada valor serão necessárias para atender ao saque com
a menor quantidade de notas possível. Serão utilizadas notas de 100, 50, 20, 10, 5, 2 e 1 real.
*/
#include <stdio.h>

int main(void)
{
  int value;
  printf("Digite o valor do saque: ");
  scanf("%d", &value);
  int notes100 = value / 100;
  value = value % 100;
  int notes50 = value / 50;
  value = value % 50;
  int notes20 = value / 20;
  value = value % 20;
  int notes10 = value / 10;
  value = value % 10;
  int notes5 = value / 5;
  value = value % 5;
  int notes2 = value / 2;
  value = value % 2;
  int notes1 = value / 1;
  value = value % 1;
  printf("Notas de 100: %d\n", notes100);
  printf("Notas de 50: %d\n", notes50);
  printf("Notas de 20: %d\n", notes20);
  printf("Notas de 10: %d\n", notes10);
  printf("Notas de 5: %d\n", notes5);
  printf("Notas de 2: %d\n", notes2);
  printf("Notas de 1: %d\n", notes1);
  return 0;
}