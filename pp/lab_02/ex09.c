/*
Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A formula 
de conversao e: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin. 
*/
#include <stdio.h>

int main(void) {
    float celsius, kelvin;
    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius+273.15;
    printf("A temperatura em graus Kelvin eh: %.2f", kelvin);
    return 0;
}