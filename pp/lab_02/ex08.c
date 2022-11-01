/*
Leia uma temperatura em graus Kelvin e apresente-a convertida em graus Celsius. A formula 
de conversao e: C = K-273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.
*/
#include <stdio.h>

int main(void) {
    float celsius, kelvin;
    printf("Digite uma temperatura em graus Kelvin: ");
    scanf("%f", &kelvin);
    celsius = kelvin-273.15;
    printf("A temperatura em graus Celsius eh: %.2f", celsius);
    return 0;
}