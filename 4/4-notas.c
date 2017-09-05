/*
Considerando a existência de notas (cédulas) nos valores R$	100, R$ 50, R$ 20, R$ 10, R$ 5, R$ 2 e 
R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e determine o menor
número de notas	para se	obter o	montante fornecido.	O programa deve	exibir o número	de notas	
para cada um dos valores de	nota existentes.
*/
#include <stdio.h>
int main()
{
	int notas100, notas50, notas20, notas10, notas5, notas2, notas1, valor;
	valor = 0;
	notas100 = 0;
	notas50 = 0;
	notas20 = 0;
	notas10 = 0;
	notas5 = 0;
	notas2 = 0;
	notas1 = 0;

	printf("Digite um valor inteiro:\nR$");
	scanf("%d", &valor);

	if (valor == 0){
    	printf("O valor digitado foi 0(zero)!");
    }else{
	    if(valor >= 100){
	        notas100 = valor/100;
	        valor = valor%100;
	    }if(valor >= 50){
	    	notas50 = valor/50;
	    	valor = valor%50;
	    }if(valor >= 20){
	    	notas20 = valor/20;
	    	valor = valor%20;
	    }if(valor >= 10){
	    	notas10 = valor/10;
	    	valor = valor%10;
	    }if(valor >= 5){
	    	notas5 = valor/5;
	    	valor = valor%5;
	    }if(valor >= 2){
	    	notas2 = valor/2;
	    	valor = valor%2;
	    }if(valor >= 1){
	    	notas1 = valor/1;
	    	valor = valor%1;
	    }	    
	 }

printf("##### NOTAS MÍNIMAS NECESSÁRIAS #####\n");
printf("Notas de 100: %d\n", notas100);
printf("Notas de 50: %d\n", notas50);    
printf("Notas de 20: %d\n", notas20);
printf("Notas de 10: %d\n", notas10);
printf("Notas de 5: %d\n", notas5);
printf("Notas de 2: %d\n", notas2);
printf("Notas de 1: %d\n", notas1);
	return 0;
}