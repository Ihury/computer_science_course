/*
Chico tem 1.50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1.10 metros e cresce 
3  centímetros  por  ano.  Escreva  um  programa  que  calcule  e  imprima  quantos  anos  serão 
necessários para que Zé seja maior que Chico.
*/
#include <stdio.h>

int main(void) {
    float chico = 1.50;
    float ze = 1.10;
    int years = 0;
    while (ze <= chico) {
        chico += 0.02;
        ze += 0.03;
        years++;
    }
    printf("Zé será maior que Chico em %d anos\n", years);
    return 0;
}