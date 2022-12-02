#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char texto[100], novoTexto[100];

    printf("Digite o texto de entrada:\n");
    fgets(texto, 100, stdin);

    int j = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == 'r' || texto[i] == 'R') {
            if (texto[i + 1] != ' ' && texto[i + 1] != '\n' && texto[i + 1] != 'r') (texto[i] == 'r') ? (novoTexto[j]) = 'l' : (novoTexto[j] = 'L');
            else if (texto[i + 1] == ' ' || texto[i+ 1] == '\n') novoTexto[j] = texto[i];
            else if (texto[i + 1] == 'r') {
                (texto[i] == 'r') ? (novoTexto[j]) = 'l' : (novoTexto[j] = 'L');
                i++;
            };
        } else novoTexto[j] = texto[i];
        j++;
    }
    novoTexto[j] = '\0';

    printf("%s\n", novoTexto);

    return 0;
}
