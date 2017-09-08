/*
Escreva um programa em C que receba três números inteiros como entrada e imprima, como	
saída: (i) o maior número recebido; e (ii) os números em ordem crescente.	
*/
#include <stdio.h>
int main(){
    int n1, n2, n3, aux, i, j, k;
    int vet[3];
    printf("Digite 3 números:\n");

    printf("Número 1:\n");
    scanf("%d", &n1);
	printf("Número 2:\n");
	scanf("%d", &n2);
	printf("Número 3:\n");
	scanf("%d", &n3);

	vet[0] = n1;
	vet[1] = n2;
	vet[2] = n3;

	// Maior número
	if ((vet[0]>vet[1]) && (vet[0]>vet[2])){
		printf("O maior número é %d\n", vet[0]);
	}else if((vet[1]>vet[0]) && (vet[1]>vet[2])){
	    printf("O maior número é %d\n", vet[1]);	
	}else if((vet[2]>vet[0]) && (vet[2]>vet[1])){
		printf("O maior número é %d\n", vet[2]);	
	}


	// Ordenar os números
	for (i = 2; i > 0; --i){
	    for (j = 0; j < i; ++j){
	    	if (vet[j]>vet[j+1]){
	    		aux = vet[j];
	    		vet[j] = vet[j+1];
	    		vet[j+1]=aux;
	    	}
	    }
	}
	
	
	printf("### NÚMEROS ORDENADOS ###\n");
	for(k = 0; k < 3; ++k){
		printf("%d", vet[k]);
	}
	printf("\n");
	return 0;
}
