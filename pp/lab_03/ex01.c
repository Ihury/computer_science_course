/*
Faça um programa que receba dois números e mostre qual deles é o maior.
*/
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) printf("O primeiro número é maior.");
    else if (num1 < num2) printf("O segundo número é maior.");
    else printf("Os números são iguais.");

    return 0;
}