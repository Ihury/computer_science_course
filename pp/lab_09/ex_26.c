/*
 Implemente uma função que calcule as raízes de uma equação do segundo grau do tipo
Ax2+ Bx + C = 0.

Lembrando que:
𝑥 =−𝑏±√
2𝑎
Onde:
=𝑏2 −4𝑎𝑐


A variável a tem que ser diferente de zero.
 Se  < 0, não existe real;
 Se  = 0, existe uma raiz real;
 Se   0, existem duas raízes reais.

Essa função deve obedecer ao seguinte protótipo:

int raizes(float A, float B, float C, float *X1, float *X2);

Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação. Se
existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por X1 e X2.
*/
#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2);

void main() {
  float A, B, C, X1, X2;
  int raizes_reais;

  printf("Digite os coeficientes A, B e C da equação Ax² + Bx + C = 0: ");
  scanf("%f %f %f", &A, &B, &C);

  raizes_reais = raizes(A, B, C, &X1, &X2);

  if (raizes_reais == 0) {
    printf("Não existem raízes reais.\n");
  } else if (raizes_reais == 1) {
    printf("Existe uma raiz real: %f\n", X1);
  } else {
    printf("Existem duas raízes reais: %f e %f\n", X1, X2);
  }
}

int raizes(float A, float B, float C, float *X1, float *X2) {
  float delta = B * B - 4 * A * C;

  if (delta < 0) {
    return 0;
  } else if (delta == 0) {
    *X1 = -B / (2 * A);
    return 1;
  } else {
    *X1 = (-B + sqrt(delta)) / (2 * A);
    *X2 = (-B - sqrt(delta)) / (2 * A);
    return 2;
  }
}