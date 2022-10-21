/*
 Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triangulo e,
se  forem,  se  é  um  triângulo  escaleno,  equilátero  ou  isósceles,  considerando  os  seguintes
conceitos:
 O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois
lados;
 Chama-se equilátero o triângulo que tem três lados iguais;
 Denominam-se isósceles o triângulo que tem o comprimento de dois lados iguais;
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
            printf("O triângulo é equilátero.");
        else if (a == b || b == c || a == c)
            printf("O triângulo é isósceles.");
        else
            printf("O triângulo é escaleno.");
    }
    else
        printf("Os lados não formam um triângulo.");

    return 0;
}