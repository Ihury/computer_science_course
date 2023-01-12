/*
Elabore  uma  função  que  receba  duas  strings  como  parâmetros  e  verifique  se  a  segunda
string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das
strings.
*/
#include <stdio.h>

int isSubstring(char *a, char *b);

void main() {
  char a[100], b[100];

  fgets(a, 100, stdin);
  fgets(b, 100, stdin);

  if (isSubstring(a, b)) {
    printf("Eh uma substring\n");
  } else printf("Nao eh uma substring\n");
}

int isSubstring(char *a, char *b) {
  int startPos = 0;

  for (int i = 0; *(a + i) != '\n' ; i++) {
    if (*(b + startPos) == '\n') {
      return 1;
    }
    
    if (*(a + i) == *(b + startPos)) {
      startPos++;
    } else {
      startPos = 0;
    }
  }

  return 0;
}