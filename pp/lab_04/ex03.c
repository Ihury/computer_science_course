/*
Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na tela, 
iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
*/
#include <stdio.h>

int main(void) {
    int i = 10;
    while (i >= 0) {
        printf("%d\n", i);
        i--;
    }
    printf("FIM!\n");
    return 0;
}