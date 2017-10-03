# include <stdio.h>
float melhorTempo(float* vetor, int n);
float voltamelhorTempo(float* vetor);
float piorTempo(float* vetor);
float voltaPiorTempo(float* vetor);


int main(void){
	int n;
	printf("Digite a quantidade de voltas:\n");
	scanf("%d", &n);

	float vet_temp[n+1];
	vet_temp[0] = 0.0f;
	int i;
	for(i = 1; i <= n; i++){
		printf("Digite o tempo registrado na volta %d:\n", i);
		scanf("%f", &vet_temp[i]);
	}
	printf("Melhor tempo:%f\n", melhorTempo(vet_temp,n));
	return 1;
}

float melhorTempo(float* vetor, int n){
	float T = vetor[n] - vetor[n-1];
	int i;
	for(i = n-1; i >= 0; i--){
		if (T < vetor[i] - vetor[i-1]);
			T = vetor[i] - vetor[i-1];
		}
	return T;
	}
