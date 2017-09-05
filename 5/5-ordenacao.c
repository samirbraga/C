/*
Escreva um programa em C que receba três números inteiros como entrada e imprima, como	
saída: (i) o maior número recebido; e (ii) os números em ordem crescente.	
*/
#include <stdio.h>
int main(){
    int n1, n2, n3;
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
}