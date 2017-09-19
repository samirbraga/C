#include <stdio.h>
void misterio(int *p, int *q);
int main(void){
	int i = 6, j = 10;

	printf("Antes:\n");
	printf("i = %d\n", i);
	printf("j = %d\n", j);

	misterio(&i, &j);

	printf("Depois:\n");
	printf("i = %d\n", i);
	printf("j = %d\n", j);
	return 1;
}
void misterio(int *p, int *q){
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}

