/*
Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles, assim 
como a diferença existente entre ambos.
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) printf("O primeiro numero e maior. A diferença entre eles e: %d", num1 - num2);
    else if (num1 < num2) printf("O segundo numero e maior. A diferença entre eles e: %d", num2 - num1);
    else printf("Os numeros sao iguais.");

    return 0;
}