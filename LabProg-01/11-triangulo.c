/*Escreva	um	programa	que	recebe	como	entrada	três	números	inteiro	a,	b	e	c que	representam	os	
lados	 de	 um	 triângulo,	 verifica	 se	 essas	 medidas	 satisfazem	 a	 condição	 de	 existência	 de	 um	
triângulo	–		(i)|b - c| < a < b + c;	(ii)	|a - c| < b < a + c;	e	(iii)	|a - b| < c
< a + b	 –	 e,	 caso	 essa	 condição	 seja	 satisfeita,	 imprime	 um	 texto	 dizendo	 se	 o	 triângulo	 é	
escaleno	(todos	os	lados	diferentes),	isósceles	(apenas	2	lados	iguais)	ou	equilátero	(todos	os	lados	
iguais).	Caso	contrário,	imprima	um	texto	informando	que	os	valores	fornecidos	não	satisfazem	a	
condição	de	ser	triângulo.	*/
#include <stdio.h>
int main(){
	int a, b, c;
	printf("Digite o valor de a:\n");
	scanf("%d", &a);
	printf("Digite o valor de b:\n");
	scanf("%d", &b);
	printf("Digite o valor de c:\n");
	scanf("%d", &c);

	if( ((b-c) < a) && (a <(b+a))  && ((a-c) < b) && (b < (a+c)) && ( (a-b) < c) && (c < (a+b)) ){
		
		if((a != b) && (a != c) && (b != c)){
			printf("Escaleno!\n");
		}else if((a == b) && (a == c) && (b == c)){
			printf("Equilátero!\n");
		}else{
			printf("Isósceles!\n");
		}
	}else{
		printf("Não é um triângulo!\n");
	} 
	return 1;
}