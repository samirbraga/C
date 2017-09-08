/*
Escreva um programa que, dado o valor do raio via teclado, calcule e imprima o volume da esfera 
correspondente. Sabe-se que o volume da esfera é dado por 4/3πr3 , onde  r representa o raio da
esfera. Note que a linguagem C não disponibiliza um operador de exponenciação (potenciação). 
Para calcular o valor de  r 3 podemos multiplicar o valor do raio por si mesmo duas vezes ou fazer 
uso da função  pow da biblioteca padrão matemática (# include < math .h>)
*/

// imports
# include <stdio.h>
# include <math.h>

// programa principal
int main(void){
	// declaração de variáveis
    double r;
    double pi = 3.1415;
    double volEsfera;
    
    printf("Digite o valor do raio:\n");
    scanf("%lf", &r);
    volEsfera = (4*pi*pow(r,3))/3;
    printf("O volume da esfera de raio %.2lf é %.3lf\n", r, volEsfera);

    return 0;

}
