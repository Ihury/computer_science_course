/*
Leia  uma  velocidade  em  km/h  (quilômetros  por  hora)  e  apresente-a  convertida  em  m/s 
(metros por segundo). A formula de conversao e: M = K/3.6, sendo K a velocidade em km/h e M 
em m/s.
*/
#include <stdio.h>

int main(void) {
    float kmh, ms;
    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &kmh);
    ms = kmh/3.6;
    printf("A velocidade em m/s eh: %.2f", ms);
    return 0;
}