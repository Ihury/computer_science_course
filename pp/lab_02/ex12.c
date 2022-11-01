/*
Leia  uma  distância  em  milhas  e  apresente-a  convertida  em  quilômetros.  A  formula  de 
conversao e: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.
*/
#include <stdio.h>

int main(void) {
    float km, milhas;
    printf("Digite uma distancia em milhas: ");
    scanf("%f", &milhas);
    km = 1.61*milhas;
    printf("A distancia em quilometros eh: %.2f", km);
    return 0;
}