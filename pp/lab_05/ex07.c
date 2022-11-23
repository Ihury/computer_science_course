/*
Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida em 
graus Fahrenheit. A fórmula de conversão é: 𝐹 =𝐶∗(9,0
5,0)+32,0, sendo F a temperatura 
em Fahrenheit e C a temperatura em Celsius. 
*/
#include <stdio.h>

float convertToFahrenheit(float celsius);

void main()
{
    float celsius;

    scanf("%f", &celsius);
    printf("%.2f\n", convertToFahrenheit(celsius));
}

float convertToFahrenheit(float celsius)
{
    return celsius * (9.0 / 5.0) + 32.0;
}