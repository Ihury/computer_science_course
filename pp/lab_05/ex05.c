/*
Faça uma função e um programa de teste para o cálculo do volume de uma esfera. Sendo 
que o raio é passado por parâmetro.
*/
#include <stdio.h>

float sphereVolume(float radius);

void main()
{
    float radius;

    scanf("%f", &radius);
    printf("%.2f\n", sphereVolume(radius));
}

float sphereVolume(float radius)
{
    return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
}