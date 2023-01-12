/*
 Crie  um  programa  que  contenha  um  array  de  inteiros  contendo  5  elementos.  Utilizando 
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor 
lido. 
*/
#include <stdio.h>

void main() {
  int array[5];

  for (int i = 0; i < 5; i++) {
    int *p = array + i;
    scanf("%d", p);

    *p += *p;
  }   

  for (int i = 0; i < 5; i++) {
    int *p = array + i;
    printf("%d\n", *p);
  } 
}