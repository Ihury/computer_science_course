/*
Leia  uma  distância  em  quilômetros  e  apresente-a  convertida  em  milhas.  A  formula  de 
conversao e: M = K/1.61, sendo K a distância em quilômetros e M em milhas.
*/
#include <stdio.h>

int main(void) {
    float km, milhas;
    printf("Digite uma distancia em quilometros: ");
    scanf("%f", &km);
    milhas = km/1.61;
    printf("A distancia em milhas eh: %.2f", milhas);
    return 0;
}