/*
Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que 
leia  a  variável  ‘a’  e  calcule  e  exiba  o  dobro,  o  triplo  e  o  quádruplo  desse  valor  utilizando 
apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e 
D o quádruplo.
*/
#include <stdio.h>

void main() {
  int a, *b, **c, ***d;

  scanf("%d", &a);

  b = &a;
  c = &b;
  d = &c;

  printf("x2 = %d\nx3 = %d\nx4 = %d\n", *b * 2, **c * 3, ***d * 4);
}