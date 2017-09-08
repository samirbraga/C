/*Escreva	um	programa	que	implemente	o	jogo	conhecido	como	pedra,	papel,	tesoura.	Neste	jogo,	o	
usuário	 e	 o	 computador	 escolhem	 entre	 pedra,	 papel	 ou	 tesoura.	 Sabendo	 que	 pedra	 ganha	 de	
tesoura,	 papel	 ganha	 de	 pedra	 e	 tesoura	 ganha	 de	 papel,	 exiba	 na	 tela	 o	 ganhador:	 usuário	 ou	
computador.	 Para	 esta	 implementação,	 assuma	 que	 o	 número	 0	 representa	 pedra,	 1	 representa	
papel	e	2	representa	tesoura.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int escolha_user, escolha_pc;
	escolha_user = -1;
	printf("### PEDRA, PAPEL E TESOURA ###\nEscolha:\n0-Pedra\n1-Papel\n2-Tesoura\nDigite:");
	scanf("%d", &escolha_user);
	while((escolha_user<0) || (escolha_user>2)){
		printf("Número inválido!\nEscolha:\n0-Pedra\n1-Papel\n2-Tesoura\nDigite:");
		scanf("%d", &escolha_user);
	}
	
	printf("Sua escolha:%d\n", escolha_user );
	escolha_pc = rand() % 2;
	printf("A escolha do computador:%d\n ", escolha_pc);

	//Mostrando quem ganhou!
	if(escolha_user == 0){
		if(escolha_pc == 1){
			printf("Computador ganhou!\n");
		}else if(escolha_pc == 0){
			printf("Deu empate!\n");
		}else{
			printf("Você ganhou!\n");
		}
	}
	if(escolha_user == 1){
		if(escolha_pc == 0){
			printf("Você ganhou!\n");
		}else if(escolha_pc == 1){
			printf("Deu empate!\n");
		}else{
			printf("Computador ganhou!\n");	
		}
	}
	if(escolha_user == 2){
		if(escolha_pc == 0){
			printf("Computador ganhou!\n");
		}else if(escolha_pc == 1){
			printf("Você ganhou!\n");
		}else{
			printf("Deu empate!\n");
		}
	}
	return 1;
}