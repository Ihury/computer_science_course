/*
Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio 
R. Essa função deve obedecer ao protótipo:  
void calc_esfera(float R, float *area, float *volume);  
A área da superfície e o volume são dados, respectivamente, por: 
A = 4 *  * R2 
V = 4/3 *  * R3
*/
#include <stdio.h>

void calc_esfera(float R, float *area, float *volume);

void main() {
  float R, area, volume;

  printf("Digite o raio da esfera: ");
  scanf("%f", &R);

  calc_esfera(R, &area, &volume);

  printf("Área da superfície: %f\n", area);
  printf("Volume: %f\n", volume);
}

void calc_esfera(float R, float *area, float *volume) {
  *area = 4 * 3.141592 * R * R;
  *volume = 4.0 / 3.0 * 3.141592 * R * R * R;
}