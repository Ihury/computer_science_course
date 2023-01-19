/*
Faça  um  programa  que  simule  a  memória  de  um  computador:  o  usuário  irá  especificar  o 
tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto, a 
memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida, o 
usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o valor 
contido em uma determinada posição. A memória deve iniciar com todos os dados zerados.
*/
#include <stdio.h>

int main(void) {
    int *p, i, n, op, pos, val;
    printf("Digite o tamanho da memória: ");
    scanf("%d", &n);
    p = (int *) malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        p[i] = 0;
    }
    do {
        printf("1 - Inserir valor\n");
        printf("2 - Consultar valor\n");
        printf("3 - Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                printf("Digite a posição: ");
                scanf("%d", &pos);
                printf("Digite o valor: ");
                scanf("%d", &val);
                p[pos] = val;
                break;
            case 2:
                printf("Digite a posição: ");
                scanf("%d", &pos);
                printf("Valor: %d\n", p[pos]);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (op != 3);
    free(p);
    return 0;
}