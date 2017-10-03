# include <stdio.h>
int max(int* vetor);
int min(int* vetor);

int main(void){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};	
	
	printf("%d\n", max(a));
	printf("%d\n", min(a));
	return 1;
}

int max(int* vetor){
	int max = vetor[0];
	for (int i = 0; i < 10; i++){
		if (max < vetor[i]){
			max = vetor[i];
		}
	}
	return max;
}
int min(int* vetor){
	int min = vetor[0];
	for (int i = 0; i < 10; i++){
		if (min > vetor[i]){
			min = vetor[i];
		}
	}
	return min;	
}