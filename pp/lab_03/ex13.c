/*
 Faça  um  algoritmo  que  calcule  a  media  ponderada  das  notas  de  3  provas.  A  primeira  e  a 
segunda prova têm peso 1 e  a terceira tem peso 2. Ao  final, mostrar a media do estudante e 
indicar  se  o  estudante  foi  aprovado  ou  reprovado.  A  nota  para  aprovaçao  deve  ser  igual  ou 
superior a 60 pontos.
*/
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + (nota3 * 2)) / 4;

    if (media >= 60) printf("A media das notas e: %f. O aluno foi aprovado.", media);
    else printf("A media das notas e: %f. O aluno foi reprovado.", media);

    return 0;
}