/*
Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um 
vetor de double, depois use a função MALLOC para reservar (alocar) o espaço de memória 
de acordo com o especificado pelo usuário. Esse vetor deve ter um tamanho maior ou igual 
a  10  elementos.  Use  este  vetor  dinâmico  como  um  vetor  comum,  atribuindo  aos  10 
primeiros elementos do vetor valores aleatórios (usando a função rand) entre 0 e 100. Exiba 
na tela os valores armazenados nos 10 primeiros elementos do vetor.
*/
#include <stdio.h>

int main(void) {
    int i, n;
    double *p;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    p = (double *) malloc(n * sizeof(double));
    for (i = 0; i < 10; i++) {
        p[i] = rand() % 101;
    }
    for (i = 0; i < 10; i++) {
        printf("%lf ", p[i]);
    }
    free(p);
    return 0;
}