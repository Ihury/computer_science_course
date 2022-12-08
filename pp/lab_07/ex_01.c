/*
Faça um programa que leia uma string e a imprima.
*/
#include <stdio.h>

void main() {
    char str[100];

    fgets(str, 100, stdin);
    printf("%s", str);    
}