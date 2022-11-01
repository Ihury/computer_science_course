// Leia um numero real e imprima a quinta parte deste numero.
#include <stdio.h>

int main(void) {
    float numero;
    printf("Digite um numero real: ");
    scanf("%f", &numero);
    printf("A quinta parte do numero digitado eh: %.2f", numero/5);
    return 0;
}