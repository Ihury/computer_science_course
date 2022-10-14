/*
Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo 
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.
*/
#include <stdio.h>

int main(void) {
    float altura_degrau, altura_desejada, degraus;
    printf("Digite a altura do degrau: ");
    scanf("%f", &altura_degrau);
    printf("Digite a altura desejada: ");
    scanf("%f", &altura_desejada);
    degraus = altura_desejada/altura_degrau;
    printf("O usuario devera subir %.0f degraus", degraus);
    return 0;
}