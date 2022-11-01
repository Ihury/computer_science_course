/*
Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um 
cilindro  circular  e  calculado  por  meio  da  seguinte  formula:  V  =  pi  *  raio2  *  altura,  onde  pi  = 
3.141592.
*/
#include <stdio.h>

int main(void) {
    float raio, altura, volume;
    printf("Digite o valor do raio do cilindro: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura do cilindro: ");
    scanf("%f", &altura);
    volume = 3.141592*raio*raio*altura;
    printf("O volume do cilindro eh: %.2f", volume);
    return 0;
}