/* Implemente	 uma	 função	 iterativa	 (usando	 laço)	 para	 calcular	 o	 máximo	 divisor	 comum	 de	 dois	
números	inteiros	positivos,	MDC(x,	y),	usando	o	algoritmo	de	Euclides.	Este	algoritmo	é	baseado	no	
fato	de	que	se	o	resto	da	divisão	de	x	por	y,	representado	por	r,	for	igual	a	zero,	y	é	o	MDC.	Se	o	
resto	r	for	diferente	de	zero,	o	MDC	de	x	e	y	é	igual	ao	MDC	de	y	e	r.	O	processo	se	repete	até	que	
o	valor	do	resto	da	divisão	seja	zero.	*/
#include <stdio.h>
int MDC(int x, int y);
int main(void){
	int x, y, resultado;

	// Mostrar ao usuário
	printf("### CÁLCULO DE MDC DE DOIS NÚMEROS ###\n");
	printf("Digite o primeiro número:\n");
	scanf("%d", &x);
	printf("Digite o segundo número:\n");
	scanf("%d", &x);

	// Usando a função
	resultado = MDC(x,y);
	printf("O resultado é %d\n", resultado);
	return 0;
}
int MDC(int x, int y){
	int r = x%y;
	if (r == 0){
		return y;
	}else{
		return MDC(y, r);
	}
}