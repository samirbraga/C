#include <stdio.h>

void preencher(int n, int* seq);
void preencher2(int n, int* seq);
void calcular(int n, int* seq1, int* seq2, int* seq3);
int main(void){
	int n;
	printf("Digite a quantidade de números:\n");
	scanf("%d", &n);

	int seq1[n]; 
	int seq2[n];
	int seq3[n+1];
	printf("Sequência 1:\n");
	preencher(n, seq1);

	printf("Sequência 2:\n");
	preencher(n, seq2);

	preencher2(n, seq3);
	calcular(n+1, seq1, seq2, seq3);

	for (int i = 0; i < n+1; i++){
		if (i != n){
			printf("%d", seq3[i]);	
		}else{
			printf("%d\n", seq3[i]);
		}
		
	}

	return 0;
}

void preencher(int n, int* seq){
	for(int i=0; i < n;i++){
		printf("Digite o valor %d da sequência:\n", i+1);
		scanf("%d", &seq[i]);
	}
}
void preencher2(int n, int* seq){
	for(int i=0; i < n;i++){
		seq[i] = 0;
	}
}

void calcular(int n, int* seq1, int* seq2, int* seq3){
	for(int i=n-1; i >= 0; i--){
		int soma = seq1[i]+seq2[i];
		if (soma > 10){
			seq3[i+1] += soma%10;
			seq3[i] += soma/10; 
		}else{
			seq3[i+1] = soma;
		}
	}

}