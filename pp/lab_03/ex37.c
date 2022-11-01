/*
As tarifas de certo parque de estacionamento sao as seguintes: 
 1a e 2a hora - R$1,00 cada; 
 3a e 4a hora - R$1,40 cada; 
 5a hora e seguintes - R$2,00 cada 
O  numero  de  horas  a  pagar  e  sempre  inteiro  e  arredondado  por excesso.  Deste  modo,  quem 
estacionar durante 61 minutos  pagará por duas horas, que  e o mesmo que  pagaria  se  tivesse 
permanecido 120 minutos. Os momentos de chegada ao parque e partida deste sao 
apresentados na forma de pares de inteiros, representando horas e minutos. Por exemplo, o par 
12 50 representará “dez para a uma da tarde”. Pretende-se criar um programa que, lidos pelo 
teclado os momentos de chegada e de partida, escreva na tela o preço cobrado pelo 
estacionamento. Admite-se que a chegada e a partida se dao com intervalo nao superior a 24 
horas. Portanto, se uma dada hora de chegada for superior à da partida, isso nao e uma situaçao 
de erro, antes significará que a partida ocorreu no dia seguinte ao da chegada.
*/
#include <stdio.h>

int main()
{
    int hora_chegada, minuto_chegada, hora_partida, minuto_partida, tempo_chegada, tempo_partida, tempo_permanencia, horas_permanencia;
    float total_pagar = 0;

    printf("Digite as horas e minutos da chegada: ");
    scanf("%d %d", &hora_chegada, &minuto_chegada);

    printf("Digite as horas e minutos da partida: ");
    scanf("%d %d", &hora_partida, &minuto_partida);

    if (hora_chegada > hora_partida) hora_chegada -= 24;

    tempo_chegada = hora_chegada * 60 + minuto_chegada;
    tempo_partida = hora_partida * 60 + minuto_partida;
    tempo_permanencia = tempo_partida - tempo_chegada;

    if (tempo_permanencia % 60 > 0) {
        horas_permanencia = tempo_permanencia / 60 + 1;
    } else {
        horas_permanencia = tempo_permanencia / 60;
    }

    if (horas_permanencia <= 2) {
        total_pagar = horas_permanencia * 1;
    } else if (horas_permanencia <= 4) {
        total_pagar = horas_permanencia * 1.4;
    } else {
        total_pagar = horas_permanencia * 2;
    }

    printf("O total a pagar e de R$%.2f", total_pagar);

    return 0;
}