/*
 Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar a 
soma  em  um  terceiro  array.  Caso  o  tamanho  do  primeiro  e  segundo  array  seja  diferente 
então a função retornará ZERO (0). Caso a função seja concluída com sucesso a mesma deve 
retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação do array.
*/
#include <stdio.h>

int sumArrays(int *a, int *b, int *c, int sizeA, int sizeB) {
  for (int i = 0; i < sizeA; i++) {
    if (i >= sizeB || i >= sizeA) {
      return 0;
    }
    
    *(c + i) = *(a + i) + *(b + i);
  }
}