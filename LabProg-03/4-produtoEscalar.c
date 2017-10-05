#include <stdio.h>
void lerValores(int *vetor);
int calcProdEscalar(int *vetor1, int *vetor2);

int main(void){
	int a[10];
	int b[10];
	printf("Digite os valores do vetor A:\n");
	lerValores(a);
	printf("Digite os valores do vetor B:\n");
	lerValores(b);
	printf("O produto escalar de A e B é: %d\n", calcProdEscalar(a,b));
	return 1;
}

void lerValores(int *vetor){
	int i;
	for(i = 0;i < 10; i++){
		printf("Digite o valor %d:\n", i+1);
		scanf("%d", &vetor[i]);
	}
}

int calcProdEscalar(int *vetor1, int *vetor2){
	int soma = 0;
	int i;
	for (i = 0; i < 10; i++){
		soma += vetor1[i]*vetor2[i];
	}
	return soma;
}