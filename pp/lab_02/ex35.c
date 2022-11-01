/*
Sejam  a  e  b  os  catetos  de  um  triângulo,  onde  a  hipotenusa  e  obtida  pela  equaçao: 
ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎=√𝑎2 +b2. Faça um programa que receba os valores de a e b e calcule o valor da 
hipotenusa atraves da equaçao. Imprima o resultado dessa operaçao.
*/
#include <stdio.h>

int main(void) {
    float a, b, hipotenusa;
    printf("Digite os valores de a e b: ");
    scanf("%f %f", &a, &b);
    hipotenusa = sqrt(a*a + b*b);
    printf("A hipotenusa eh: %.2f", hipotenusa);
    return 0;
}