/*
Faça uma função que receba a altura e o raio de um cilindro circular e retorne o volume do 
cilindro.  O  volume  de  um cilindro  circular  é  calculado  por meio  da  seguinte  fórmula: 𝑉 =
  ∗𝑟𝑎𝑖𝑜2 ∗𝑎𝑙𝑡𝑢𝑟𝑎, onde  = 3.141592.
*/
#include <stdio.h>

float cylinderVolume(float radius, float height);

void main()
{
    float radius, height;

    scanf("%f %f", &radius, &height);
    printf("%.2f\n", cylinderVolume(radius, height));
}

float cylinderVolume(float radius, float height)
{
    return 3.141592 * radius * radius * height;
}