#include <stdio.h>
#define ORDEM 3


int simetrica(int matriz[][ORDEM]){

	for(int i = 0; i < ORDEM; i++){
		for (int j = 0; j < ORDEM; j++){
			if (matriz[i][j] != matriz[j][i]){
				return 0;
			}
		}		
	}
	return 1;
}


int main(void){	
	int matriz[ORDEM][ORDEM] = {
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}
	};
	
	if ( simetrica(matriz) == 1){
		printf("A Matriz é simetrica!\n");
	}else{
		printf("A Matriz não é simetrica!\n");
	}

	
	return 1;
}

