/*
Crie um programa que receba três valores (obrigatoriamente maiores que zero), 
representando as medidas dos três lados de um triângulo. Elabore funções para:  
a) Determinar se eles lados formam um triângulo, sabendo que: 
- O comprimento de cada lado de um triângulo é menor do que a soma dos outros 
dois lados. 
b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo. Sendo 
que: 
- Chama-se equilátero o triângulo que tem três lados iguais; 
- Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais; 
- Recebe o nome de escaleno o triângulo que tem os três lados diferentes.
*/
#include <stdio.h>

int isTriangle(float a, float b, float c);
void triangleType(float a, float b, float c);

void main()
{
    float a, b, c;

    scanf("%f %f %f", &a, &b, &c);
    if (isTriangle(a, b, c)) triangleType(a, b, c);
    else printf("Nao e um triangulo\n");
}

int isTriangle(float a, float b, float c)
{
    if (a < b + c && b < a + c && c < a + b) return 1;
    else return 0;
}

void triangleType(float a, float b, float c)
{
    if (a == b && b == c) printf("Equilatero\n");
    else if (a == b || b == c || a == c) printf("Isosceles\n");
    else printf("Escaleno\n");
}