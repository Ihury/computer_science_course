/*
Escreva  um  programa  que  leia  primeiro  os  6  números  gerados  pela  loteria  e  depois  os  6 
números do seu bilhete. O programa  então compara quantos números o jogador acertou. 
Em  seguida,  ele  aloca  espaço  para  um  vetor  de  tamanho  igual  a  quantidade  de  números 
corretos  e  guarda  os  números  corretos  nesse  vetor.  Finalmente,  o  programa  exibe  os 
números sorteados e os seus números corretos.
*/
#include <stdio.h>

int main(void) {
    int *p, *q, i, j, n, acertos = 0;
    printf("Digite os 6 números sorteados: ");
    p = (int *) malloc(6 * sizeof(int));
    for (i = 0; i < 6; i++) {
        scanf("%d", &p[i]);
    }
    printf("Digite os 6 números do seu bilhete: ");
    q = (int *) malloc(6 * sizeof(int));
    for (i = 0; i < 6; i++) {
        scanf("%d", &q[i]);
    }
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (p[i] == q[j]) {
                acertos++;
            }
        }
    }
    printf("Números sorteados: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", p[i]);
    }
    printf("\nNúmeros corretos: ");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (p[i] == q[j]) {
                printf("%d ", p[i]);
            }
        }
    }
    free(p);
    free(q);
    return 0;
}