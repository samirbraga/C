#include <stdio.h>
#include <math.h>

double delta(double a, double b, double c);
int raizes(double a, double b, double c, double *px1, double *px2);

int main(void){
	double a, b, c, d, px1, px2;
	int quantidade_raizes;
	printf("Digite o valor de a:\n");
	scanf("%lf", &a);
	printf("Digite o valor de b:\n");
	scanf("%lf", &b);
	printf("Digite o valor de c:\n");
	scanf("%lf", &c);

	d = delta(a, b, c);
	printf("Delta:%lf\n", d);

	quantidade_raizes = raizes(a, b, c, &px1, &px2);
	printf("A quantidade de raizes é %d\n", quantidade_raizes );
	printf("A raiz x1 = %lf\n", px1); 
	printf("A raiz x2 = %lf\n", px2);
	return 1;
}
double delta(double a, double b, double c){
	return b*b-4*a*c;
}
int raizes(double a, double b, double c, double *px1, double *px2){
	float d = delta(a, b, c);
	if (d == 0){
		*px1 = *px2 = -1*b/2*a;
		return 1;
	}else if(d > 0){
		*px1 = (-1*b-sqrt(d))/2*a;
		*px2 = (-1*b+sqrt(d))/2*a;
		return 2;
	}else{
		return 0;
	}
}