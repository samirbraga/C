#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int a, b, c, delta;
	float x1, x2;
	printf("Insira o valor de a:\n");
	scanf("%d", &a);
	while(a == 0){
		printf("O valor (a) não pode ser 0, digite-o novamente:\n");
		scanf("%d", &a);
	}
	printf("Insira o valor de b:\n");
	scanf("%d", &b);
	printf("Insira o valor de c:\n");
	scanf("%d", &c);

	delta = pow(b,2)-4*a*c;
	printf("O delta é %d\n", delta);

	if (delta == 0) {
		x1 = ((-1)*b)/2*a;
		x2 = x1;
		printf("x1: %.2f\n", x1);
		printf("x2 %.2f\n", x2);
	}else if(delta > 0){
		x1 = ((-1*b)-sqrt(b*b-4*a*c))/(2*a);
		x2 = ((-1*b)+sqrt(b*b-4*a*c))/(2*a);
		printf("x1: %.2f\n", x1);
		printf("x2 %.2f\n", x2);
	}else{
		printf("A raiz não existe para essa equação!\n");
	}
	return 0;
}