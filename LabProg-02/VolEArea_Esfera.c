#include <stdio.h>
#include <math.h>
#define PI 3.14

float volEsfera(int r);
float areaEsfera(int r);
int main(void){

	int r;
	float volume, area;
	printf("Digite o raio da esfera:\n");
	scanf("%d", &r);
	volume = volEsfera(r);
	area = areaEsfera(r);
	printf("O volume da esfera é %.2f\nA áre	a da esfera é %.2f\n", volume, area);
	return 1;
}

float volEsfera(int r){
	return (4/3)*PI*r*r*r;
}
float areaEsfera(int r){
	return 4*PI*r*r;
}