/*
Leia um numero fornecido pelo usuário. Se esse numero for positivo, calcule a raiz quadrada 
do numero. Se o numero for negativo, mostre uma mensagem dizendo que o numero e inválido.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0) printf("A raiz quadrada do numero e: %f", sqrt(num));
    else printf("O numero e inválido.");

    return 0;
}