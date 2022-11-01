/*
Faça um programa para verificar se um determinado numero inteiro e divisivel por 3 ou 5, 
mas, nao simultaneamente pelos dois.
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) printf("O numero e divisivel por 3 e 5.");
    else if (num % 3 == 0) printf("O numero e divisivel por 3.");
    else if (num % 5 == 0) printf("O numero e divisivel por 5.");
    else printf("O numero nao e divisivel por 3 ou 5.");

    return 0;
}