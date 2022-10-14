/*
Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.
*/
#include <stdio.h>

int main(void) {
    int segundos, horas, minutos, resto;
    printf("Digite um valor em segundos: ");
    scanf("%d", &segundos);
    
    
    horas = (segundos-(segundos%3600))/3600;    
    resto = segundos%3600;
    minutos = (resto-(resto%60))/60;
    resto = resto%60;
    segundos = resto;

    printf("%d hora(s), %d minuto(s) e %d segundo(s)", horas, minutos, segundos);
    
    return 0;
}