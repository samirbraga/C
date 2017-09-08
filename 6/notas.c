/*
6.Considere uma disciplina que adota o seguinte critério de aprovação: os	alunos fazem duas provas 
(P1	e P2) iniciais; se a média nas duas provas for maior ou	igual a	5.0, e se nenhuma das duas notas	
for	inferior a 3.0, o aluno passa direto. Caso contrário, o	aluno faz uma terceira prova(P3) e a
média é calculada considerando-se a	terceira nota e a maior	das	notas entre	P1 e P2. Neste caso, o	
aluno é	aprovado se	a média	final for maior	ou igual a 5.0.
*/
#include <stdio.h>
float n1,n2,n3, maior;

int main(int argc, char const *argv[])
{
	printf("Digite a nota 1:\n");
	scanf("%f", &n1);
	printf("Digite a nota 2:\n");
	scanf("%f", &n2);
	maior = n1>n2 ? n1:n2;

	if (((n1+n2)/2 >= 5.0) && (n1 > 3.0) && (n2 > 3.0)){
		printf("Aprovado conceito A!!!\n");
	}else{
		printf("Digite a nota 3:\n");
		scanf("%f", &n3);
		if ( (maior+n3)/2 >= 5){
			printf("Aprovado por conceito B!\n");
		}else{
			printf("Tente novamente!\n");
		}
	}
	return 0;
}
