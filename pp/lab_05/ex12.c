/*
 Escreva uma função que receba um número inteiro maior do que zero e retorne a soma de 
todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2 + 5 + 1). 
Se  o  número  lido  não  for  maior  do  que  zero,  o  programa  terminará  com  a  mensagem 
“Número inválido”.
*/
#include <stdio.h>

int sumDigits(int number);

void main()
{
    int number;

    scanf("%d", &number);
    if (number > 0)
        printf("%d\n", sumDigits(number));
    else
        printf("Número inválido\n");
}

int sumDigits(int number)
{
    int sum = 0;

    while (number > 0)
    {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}