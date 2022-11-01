/*
Leia quatro notas, calcule a media aritmetica e imprima o resultado.
*/
#include <stdio.h>

int main(void) {
    int notas[4], total;
    float media;
    
    for (int i = 0; i < 4; i++) {
        printf("Digite a nota %d: ", i+1);
        scanf("%d", &notas[i]);
        total += notas[i];
    }

    media = total/4.0;
    
    printf("A media eh: %.2f", media);
    return 0;
}