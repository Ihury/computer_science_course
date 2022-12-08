/*
Faça um programa que, dada uma string, diga se ela é um palíndromo ou não. Lembrando 
que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita 
para a esquerda como da esquerda para a direita.  
Exemplo: 
ovo 
arara 
Socorram-me, subi no ônibus em Marrocos 
Anotaram a data da maratona
*/
#include <stdio.h>

void main() {
  char str[100], str_without_special_characters[100];
  int i, j, is_palindrome = 1;

  fgets(str, 100, stdin);

  for (i = 0; str[i] != '\0'; i++) {}

  for (i--, j = 0; i >= 0; i--) {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
      str_without_special_characters[j] = str[i];
      j++;
    }
  }

  for (i = 0; i < j; i++) {
    if (
      (str_without_special_characters[i] != str_without_special_characters[j - i - 1])
      && (str_without_special_characters[i] != str_without_special_characters[j - i - 1] + 32)
      && (str_without_special_characters[i] != str_without_special_characters[j - i - 1] - 32)
      ) {
      is_palindrome = 0;
      break;
    }
  }

  if (is_palindrome) {
    printf("A string e um palindromo\n");
  } else {
    printf("A string nao e um palindromo\n");
  }
}