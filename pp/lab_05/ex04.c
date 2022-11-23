/*
Faça  uma  função  para  verificar  se  um  número  é  um  quadrado  perfeito.  Um  quadrado 
perfeito  é  um  número  inteiro  não  negativo  que  pode  ser  expresso  como  o  quadrado  de 
outro número inteiro. Ex.: 1, 4, 9...
*/
#include <stdio.h>

int checkPerfectSquare(int number);

void main()
{
    int number;

    scanf("%d", &number);
    
    if (checkPerfectSquare(number)) printf("É um quadrado perfeito\n");
    else printf("Não é um quadrado perfeito\n");
}

int checkPerfectSquare(int number)
{
    int i = 1;

    while (i * i < number)
        i++;

    if (i * i == number)
        return 1;
    else
        return 0;
}