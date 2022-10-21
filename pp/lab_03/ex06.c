/*
Escreva um programa que, dados dois números inteiros, mostre na tela o maior deles, assim 
como a diferença existente entre ambos.
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) printf("O primeiro número é maior. A diferença entre eles é: %d", num1 - num2);
    else if (num1 < num2) printf("O segundo número é maior. A diferença entre eles é: %d", num2 - num1);
    else printf("Os números são iguais.");

    return 0;
}