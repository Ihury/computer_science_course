/*
Faça um programa para ler as dimensões de um terreno (comprimento  c e largura l), bem 
como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.
*/
#include <stdio.h>

int main(void) {
    float c, l, p, custo;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &c);
    printf("Digite a largura do terreno: ");
    scanf("%f", &l);
    printf("Digite o preco do metro de tela: ");
    scanf("%f", &p);

    custo = (c*2 + l*2)*p;
    
    printf("O custo para cercar o terreno eh: %.2f", custo);
    return 0;
}