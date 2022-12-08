/*
O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo 
de substituição na qual cada letra do texto  substituída por outra, que se apresenta no alfabeto 
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria 
substituído por ‘D’, ‘B’ se tornaria ‘E’, e  assim por diante. Implemente  um  programa que  faça 
uso desse Código de César (3 posições), entre com uma string e retorne a string codificada.  

Exemplo: 
String: a ligeira raposa marrom saltou sobre o cachorro cansado 
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR
*/
#include <stdio.h>

void main()
{
  char str[100];
  int i;

  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++)
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] = (str[i] - 'A' + 3) % 26 + 'A';
    }
    else if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] = (str[i] - 'a' + 3) % 26 + 'a';
    }
  }
  printf("%s", str);
}