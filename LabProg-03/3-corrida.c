# include <stdio.h>

float melhorTempo(float* vetor, int n);
float voltaMelhorTempo(float* vetor, int n);
float piorTempo(float* vetor, int n);
float voltaPiorTempo(float* vetor, int n);


int main(void){
	int n;
	printf("Digite a quantidade de voltas:\n");
	scanf("%d", &n);

	float vet_temp[n];
	int i;
	for(i = 0; i < n; i++){
		printf("Digite o tempo registrado na volta %d:\n", i+1);
		scanf("%f", &vet_temp[i]);
	}
	printf("Melhor tempo:%.2f\n", melhorTempo(vet_temp,n));
	printf("Volta Melhor tempo:%f\n", voltaMelhorTempo(vet_temp,n));
	printf("Pior tempo:%.2f\n", piorTempo(vet_temp,n));
	printf("Volta Pior tempo:%f\n", voltaPiorTempo(vet_temp,n));
	return 1;
}

float melhorTempo(float* vetor, int n){
	float T = vetor[0];
	int i;
	for(i = 1; i < n; i++){
		if (T > vetor[i]);
			T = vetor[i];
		}
	return T;
}
float voltaMelhorTempo(float* vetor, int n){
	int volta = 0;
	float T = melhorTempo(vetor, n);
	int i;
	for(i = 0;i < n; i++){
		if (vetor[i] == T){
			return i+1;
		}
	}
}

float piorTempo(float* vetor, int n){
	float T = vetor[0];
	int i;
	for(i = 1; i < n; i++){
		if (T < vetor[i]);
			T = vetor[i];
		}
	return T;
}
float voltaPiorTempo(float* vetor, int n){
	int volta = 0;
	float T = piorTempo(vetor, n);
	int i;
	for(i = 0;i < n; i++){
		if (vetor[i] == T){
			return i+1;
		}
	}
}