/*
Leia um ângulo em radianos e apresente-o convertido em graus. A formula de conversao e: 
G = R*180/pi, sendo G o ângulo em graus e R em radianos e pi = 3.141592.
*/
#include <stdio.h>

int main(void) {
    float graus, radianos;
    printf("Digite um angulo em radianos: ");
    scanf("%f", &radianos);
    graus = radianos*180/3.141592;
    printf("O angulo em graus eh: %.2f", graus);
    return 0;
}