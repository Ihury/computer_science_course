/*
Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor de 
retorno será 1 se positivo, -1 se negativo e 0 se for igual a 0.
*/
#include <stdio.h>

int checkNumber(int number);

void main()
{
    int number;

    scanf("%d", &number);
    printf("%d\n", checkNumber(number));
}

int checkNumber(int number)
{
    if (number > 0)
        return 1;
    else if (number < 0)
        return -1;
    else
        return 0;
}