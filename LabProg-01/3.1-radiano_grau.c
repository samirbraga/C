/*	Escreva	um	programa	que	converta um	valor	de	ângulo	dado	em	radianos	para	o	valor
correspondente	expresso em	graus,	minutos	e segundos.	 Sabe-se	 que	 1	 radiano	 equivale	 a	 57.29578	 graus.
Escolha	 um	 formato	 de	 saída	
apropriado.	*/

#include <stdio.h>
int main(){
	double radianos, graus, minutos, segundos;
	printf("Digite um valor em radiano:\n");
	scanf("%lg", &radianos);

	graus = radianos*57.29578;
	minutos = (graus - (int)graus)*60;
	printf("%d\n", (int)minutos);
	segundos = (minutos - (int)minutos)*60;
	printf("%d\n", (int)minutos);
	printf("O valor é %d° %d' %d'' \n ", (int)graus, (int)minutos, (int)segundos);
	return 0;
}