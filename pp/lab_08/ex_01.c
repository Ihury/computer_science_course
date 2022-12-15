/*
Escreva  um  trecho  de  código  para  fazer  a  criação  dos  novos  tipos  de  dados  conforme 
solicitado abaixo:  
- Horário: composto de hora, minutos e segundos. 
- Data: composto de dia, mês e ano. 
- Compromisso: composto de uma data, horário e texto que descreve o compromisso.
*/
#include <stdio.h>

struct Horario {
    int hora;
    int minuto;
    int segundo;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    struct Data data;
    struct Horario horario;
    char texto[100];
};