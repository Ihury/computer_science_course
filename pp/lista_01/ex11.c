/*
Leia  uma  velocidade  em  m/s  (metros  por  segundo)  e  apresente-a  convertida  em  km/h 
(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e 
M em m/s.
*/
#include <stdio.h>

int main(void) {
    float kmh, ms;
    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &ms);
    kmh = ms*3.6;
    printf("A velocidade em km/h eh: %.2f", kmh);
    return 0;
}