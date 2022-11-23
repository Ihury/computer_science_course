/*
Sejam  a  e  b  os  catetos  de  um  triangulo,  onde  a  hipotenusa  é  obtida  pela  equação: 
hipotenusa=√𝑎2 + 𝑏2. Faça uma função que receba os valores de a e b e calcule o valor 
da hipotenusa através da equação. 
*/
#include <stdio.h>
#include <math.h>

float calculateHypotenuse(float a, float b);

void main()
{
    float a, b;

    scanf("%f %f", &a, &b);
    printf("%.2f\n", calculateHypotenuse(a, b));
}

float calculateHypotenuse(float a, float b)
{
    return sqrt(a * a + b * b);
}