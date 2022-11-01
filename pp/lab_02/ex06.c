/*
Leia  uma  temperatura em  graus  Celsius e  apresente-a  convertida em  graus  Fahrenheit.  A 
formula  de  conversao  e:  F  =  C*(9.0/5.0)+32.0,  sendo  F  a  temperatura  em  Fahrenheit  e  C  a 
temperatura em Celsius.
*/
#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = celsius*(9.0/5.0)+32.0;
    printf("A temperatura em graus Fahrenheit eh: %.2f", fahrenheit);
    return 0;
}