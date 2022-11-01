/*
Leia um ângulo em graus e apresente-o convertido em radianos. A formula de conversao e: 
R = G*/180, sendo G o ângulo em graus e R em radianos e  = 3.141592. 
*/
#include <stdio.h>

int main(void) {
    float graus, radianos;
    printf("Digite um angulo em graus: ");
    scanf("%f", &graus);
    radianos = graus*3.141592/180;
    printf("O angulo em radianos eh: %.2f", radianos);
    return 0;
}