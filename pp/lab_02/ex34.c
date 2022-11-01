/*
Leia o valor do raio de um circulo e calcule e imprima a área do circulo correspondente. A 
área do circulo e *raio2, considere  = 3.141592.
*/
#include <stdio.h>

int main(void) {
    float raio, area;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    area = 3.141592*raio*raio;
    printf("A area do circulo eh: %.2f", area);
    return 0;
}