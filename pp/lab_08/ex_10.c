/*
Faça um programa que leia um vetor com dados de 5 livros: título (máximo 30 letras), autor 
(máximo 15  letras)  e  ano. Procure  um  livro  por  título,  perguntando  ao  usuário qual  título 
deseja buscar. Mostre os dados de todos os livros encontrados.
*/
#include <stdio.h>

struct Livro
{
  char titulo[30];
  char autor[15];
  int ano;
};

int main()
{
  struct Livro livros[5];
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o título do livro %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(livros[i].titulo, 30, stdin);    
    printf("Digite o autor do livro %d: ", i + 1);
    setbuf(stdin, NULL);
    fgets(livros[i].autor, 15, stdin);    
    printf("Digite o ano do livro %d: ", i + 1);
    scanf("%d", &livros[i].ano);
    printf("\n");
  }

  char titulo[30];
  printf("Digite o título do livro que deseja buscar: ");
  scanf("%s", titulo);
  for (int i = 0; i < 5; i++)
  {
    if (strcmp(livros[i].titulo, titulo) == 0)
    {
      printf("Título: %s\nAutor: %s\nAno: %d\n\n", livros[i].titulo, livros[i].autor, livros[i].ano);
    }
  }

  return 0;
}