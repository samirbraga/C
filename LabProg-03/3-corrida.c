# include <stdio.h>

float melhorTempo(float* vetor, int n);
float voltaMelhorTempo(float* vetor);
float piorTempo(float* vetor);
float voltaPiorTempo(float* vetor);


int main(void){
	int n;
	printf("Digite a quantidade de voltas:\n");
	scanf("%d", &n);

	float vet_temp[n];
	int i;
	for(i = 0; i < n; i++){
		printf("Digite o tempo registrado na volta %d:\n", i);
		scanf("%f", &vet_temp[i]);
	}
	printf("Melhor tempo:%f\n", melhorTempo(vet_temp,n));
	return 1;
}

float melhorTempo(float* vetor, int n){
	float T = vetor[0];
	int i;
	for(i = 1; i < n; i++){
		if (T < vetor[i]);
			T = vetor[i];
		}
	return T;
	}
