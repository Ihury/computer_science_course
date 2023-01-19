/*
Faça um programa que  receba do  usuário o tamanho de  uma string e chame  uma função 
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo 
dessa string. O programa imprime a string sem suas vogais. 
*/
#include <stdio.h>

int main(void) {
    char *p; 
    int i, n;
    printf("Digite o tamanho da string: ");
    scanf("%d", &n);
    p = (char *) malloc(n * sizeof(char));
    for (i = 0; i < n; i++) {
        printf("Digite um caractere: ");
        scanf("%c", &p[i]);
    }
    for (i = 0; i < n; i++) {
        if (p[i] != 'a' && p[i] != 'e' && p[i] != 'i' && p[i] != 'o' && p[i] != 'u') {
            printf("%c", p[i]);
        }
    }
    free(p);
    return 0;
}