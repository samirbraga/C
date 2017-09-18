/*O	 máximo	 divisor	 comum	 de	 três	 números	 inteiros	 positivos,	 MDC(x,y,z),	 é	 igual	 a	
MDC(MDC(x,y),z).	Escreva	um	programa	que	capture	três	números	inteiros	fornecidos	via	teclado	e	
imprima	o	MDC	deles,	usando	a	função	MDC	especificada	abaixo:	*/
#include <stdio.h>
int MDC(int x, int y);
int main(void){
	int x, y, z,  resultado;

	// Mostrar ao usuário
	printf("### CÁLCULO DE MDC DE TRÊS NÚMEROS ###\n");
	printf("Digite o primeiro número:\n");
	scanf("%d", &x);
	printf("Digite o segundo número:\n");
	scanf("%d", &y);
	printf("Digite o terceiro número:\n");
	scanf("%d", &z);

	// Usando a função
	resultado = MDC(MDC(x,y),z);
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