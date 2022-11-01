/*
 Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se  forem,  se  e  um  triângulo  escaleno,  equilátero  ou  isosceles,  considerando  os  seguintes
conceitos:
 O comprimento de cada lado de um triângulo e menor do que a soma dos outros dois
lados;
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isosceles o triângulo que tem o comprimento de dois lados iguais;
 Recebe o nome de escaleno o triângulo que tem os três lados diferentes;
*/
#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%d", &a);

    printf("Digite o segundo lado: ");
    scanf("%d", &b);

    printf("Digite o terceiro lado: ");
    scanf("%d", &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        if (a == b && b == c)
            printf("O triângulo e equilátero.");
        else if (a == b || b == c || a == c)
            printf("O triângulo e isosceles.");
        else
            printf("O triângulo e escaleno.");
    }
    else
        printf("Os lados nao formam um triângulo.");

    return 0;
}