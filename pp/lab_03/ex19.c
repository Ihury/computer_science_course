/*
Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, 
mas, não simultaneamente pelos dois.
*/
#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0) printf("O número é divisível por 3 e 5.");
    else if (num % 3 == 0) printf("O número é divisível por 3.");
    else if (num % 5 == 0) printf("O número é divisível por 5.");
    else printf("O número não é divisível por 3 ou 5.");

    return 0;
}