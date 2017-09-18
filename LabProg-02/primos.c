/*Imprimir	todos	os	números	primos	menores	que	um	valor	x,	fornecido	via	teclado.	*/
#include <stdio.h>
#include <math.h>
int primo(int n);

int main(void){
	int n;
	printf("### Números primos até o n-ésimo termo ###\n");
	printf("Digite o valor de n:\n");
	scanf("%d", &n);
	for (int i = 0; i <= n; ++i){
		if (primo(i) == 1){
			printf("%d\n", i);	
		}
		
	}
	return 0;
}

int primo(int n){
	if (n == 2) {
		return 1;
	} else if (n<2 || (n%2)==0) {
		return 0;
	} else {
		int lim = (int ) sqrt(n);
		for (int i=3; i<= lim; i+=2) {
			if (n%i == 0) {
				return 0;
			}
		}
		return 1;
	}
}