#include <stdio.h>
#include <math.h>

double pot(double x, int k){
	if (k == 2){
		return x*x;
	}else{
		return x*pot(x, k-1);
	}
}
int main(void){
	double x;
	int k;
	printf("Digite a base:\n");
	scanf("%lf", &x);

	printf("Digite o expoente:\n");
	scanf("%d", &k);

	printf("O resultado com a função pot é %lf\n", pot(x,k));
	printf("O resultado com a função pow é %lf\n", pow(x,k));	
	return 1;
}