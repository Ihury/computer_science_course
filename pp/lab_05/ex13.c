/*
Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo 
representará a operação que se deseja efetuar com os números. Se o símbolo for ‘+’ deverá 
ser realizada uma adição, se for ‘–‘ uma subtração, se for ‘*’ uma multiplicação e se for ‘/’ 
será efetuada uma divisão
*/
#include <stdio.h>

float calculate(float a, float b, char symbol);

void main()
{
    float a, b;
    char symbol;

    scanf("%f %f %c", &a, &b, &symbol);
    printf("%.2f\n", calculate(a, b, symbol));
}

float calculate(float a, float b, char symbol)
{
    if (symbol == '+')
    {
        return a + b;
    }
    else if (symbol == '-')
    {
        return a - b;
    }
    else if (symbol == '*')
    {
        return a * b;
    }
    else if (symbol == '/')
    {
        return a / b;
    }
    else
    {
        return 0.0;
    }
}