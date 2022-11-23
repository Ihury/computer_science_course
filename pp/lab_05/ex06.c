/*
Faça  uma  função  que  receba  3  números  inteiros  como  parâmetro,  representando  horas, 
minutos e segundos, e os converta em segundos.
*/
#include <stdio.h>

int convertToSeconds(int hours, int minutes, int seconds);

void main()
{
    int hours, minutes, seconds;

    scanf("%d:%d:%d", &hours, &minutes, &seconds);
    printf("%d\n", convertToSeconds(hours, minutes, seconds));
}

int convertToSeconds(int hours, int minutes, int seconds)
{
    return hours * 3600 + minutes * 60 + seconds;
}