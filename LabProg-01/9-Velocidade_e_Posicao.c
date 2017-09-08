/*Considere	 as	 equações	 de	 movimento	 para	 calcular	 a	 posição	 (s)	 e	 a	 velocidade	 (v)	 de	 uma	
partícula	em	determinado	instante	t,	dado	sua	aceleração	a,	posição	inicial	s 0 	e	velocidade	inicial	
v 0 ,	de	acordo	com	as	fórmulas da velocidade e da posição.	
Escreva	um	programa	C	completo	que	capture	os	valores	de	s 0 ,	v 0 ,	a	e	t,	fornecidos	pelo	usuário	via	
teclado,	 e	 calcule	 e	 exiba	 os	 valores	 de	 s	 e	 v.	 Todos	 os	 valores	 tratados	 no	 programa	 devem	 ser	
números	reais	(float	ou	double).	
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
	float s0, v0, a, t, s, v;
	printf("Digite a posição inicial:\n");
	scanf("%f", &s0);
	printf("Digite a velocidade inicial:\n");
	scanf("%f", &v0);
	printf("Digite a aceleração:\n");
	scanf("%f", &a);
	printf("Digite o tempo:\n");
	scanf("%f", &t);

	s = s0 + v0 + (a*(t*t))/2;
	v = v0 + a*t;
	printf("A posição S = %.2f U.P\n", s );
	printf("A velocidade V = %.2f U.T\n", v );
	return 0;
}