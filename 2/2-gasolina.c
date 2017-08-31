/*
Escreva um programa que calcule o preço da gasolina por litro no Brasil se aqui fosse adotado o 
mesmo preço cobrado nos Estados Unidos. O programa deve capturar dois valores fornecidos via 
teclado:  o  preço  do  galão  de  gasolina  praticado  nos  Estados  Unidos  (em  dólares)  e  a  taxa  de 
conversão  do  dólar  para  o  real.  O  programa  então  deve  exibir  o  preço  do  litro  de  gasolina 
correspondente em reais. Sabe-se que um galão tem 3.7854 litros.
*/
# include <stdio.h>

int main(void){
    float galao;
    float taxa;
    double preco_gasolina;

	printf("Digite o preço do galão de gasolina em dolares:\nUS$");
	scanf("%f", &galao);
    printf("Digite a taxa de conversão do dolar para real:\n");
    scanf("%f", &taxa);
    
    preco_gasolina = (galao/3.7854)*taxa;
    printf("O valor do litro de gasolina em reais é R$%lf\n", preco_gasolina);


	return 0;
}
