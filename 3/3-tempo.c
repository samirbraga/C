/*
Escreva um programa que capture do teclado o número de segundos transcorridos num evento e 
imprima o tempo no formato hora - minuto - segundo: h:m:s, onde hora e minuto são exibidos com 
dois  dígitos,  preenchidos  com  zero  à  esquerda  ("%02  d"),  e  segundo  exibido
com  duas  casas decimais, também preenchido com zero à esquerda ( %05.2 f).
Author: Franlyn Seabra Rogério Bezerra
*/
#include <stdio.h>
int main(void)
{

	int segundos;
	int horas;
	int minutos;

	printf("Digite a quantidade de segundos transcorridos no evento:\n");
	scanf("%d", &segundos);
	
	horas = segundos/3600;
	segundos = segundos%3600;
	minutos = segundos/60;
	segundos = segundos%60;

	printf("Foram %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);
	return 0;
}