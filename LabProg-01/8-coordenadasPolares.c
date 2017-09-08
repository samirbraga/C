/*
Escreva	 um	 programa	 que	 converta	 coordenadas	 polares	 (raio	r	e	 ângulo	 a)	 em	 coordenadas	
cartesianas	(abscissa	x	e	ordenada	y),	de	acordo	com	as	fórmulas:	
x = r ∗ cos α 	
y = r ∗ sin α 	
O	programa	deve	capturar	os	valores	em	coordenadas	polares	e	exibir	as	coordenadas	cartesianas	
correspondentes.	As	funções	sin	e	cos	estão	disponíveis	na	biblioteca	matemática	padrão.	
*/
#include <stdio.h>
#include <math.h>
int main(){
	float r, a, x, y; 
	printf("Digite o valor do raio:\n");
	scanf("%f", &r);
	printf("Digite o valor do ângulo:\n");
	scanf("%f", &a);

	x = r*cos(a);
	y = r*sin(a);
	printf("Coordenadas cartesanas correspondentes: (%f, %f)\n", x, y);
	return 0;
}
