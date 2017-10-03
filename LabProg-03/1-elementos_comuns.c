#include <stdio.h>

int main(void){

	int a[5] = {3,3,3,3,3};
	int b[8] = {3,3,3,3,3,3,3,3};

	for (int i = 0; i < 5; ++i){
		for (int j = 0; j < 8; ++j){
			if (a[i] == b[j]){
				printf("%d\n", a[i]);	
			}
			
		}
	}
	return 1;
}