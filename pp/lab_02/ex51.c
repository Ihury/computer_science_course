/*
Escreva um programa que leia as coordenadas x e y de pontos no R² e calcule sua distância 
da origem (0, 0).
*/
#include <stdio.h>

int main(void) {
    float x, y, distancia;

    printf("Digite as coordenadas x e y: ");
    scanf("%f %f", &x, &y);
    distancia = sqrt(x*x + y*y);
    printf("A distancia da origem eh: %.2f", distancia);
    
    return 0;
}