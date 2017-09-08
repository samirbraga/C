/*Escreva	 um	 programa	 que	 funcione	 como	 uma	 calculadora	 simples.	 A	 calculadora	 deve	 receber	
três	parâmetros	os	dois	operandos	(números)	e	um	operador	(caractere).	O	usuário	deve	inserir	os	
dados	no	seguinte	formato:	<operando>	<operador>	<operando>.	A	calculadora	deve	suportar	as	
quatro	 operações	 básicas:	 soma	 (+),	 subtração	 (−),	 multiplicação	 (×)	 e	 divisão	 (÷).	 O	 programa	
deve	 imprimir	 o	 resultado	 da	 operação	 selecionada.	 Use	 a	 estrutura	 de	 casos	 (switch)	 para	
implementar	a	sua	solução.	(Dica:	não	se	esqueça	de	tratar	os	casos	de	divisão	por	zero).	*/
#include <stdio.h>
int main(){
    float operando1, operando2;
    int operador;

    printf("Digite o primeiro operando:\n");
    scanf("%f", &operando1);
    printf("1-soma(+)\n2-subtração(-)\n3-multiplicação(x)\n4-divisão(÷)\nDigite o operador:\n");
    scanf("%d", &operador);
    printf("Digite o segundo operando:\n");
    scanf("%f", &operando2);

    // usando switch
    switch(operador){
    	case 1:
    		printf("O resultado da soma é %.2f\n", operando1+operando2);
    		break;
    	case 2:
    		printf("O resultado da subtração é %.2f\n", operando1-operando2);
    		break;
    	case 3:
    		printf("O resultado da multiplicação é %.2f\n", operando1*operando2);
    		break;
    	case 4:
    		if (operando2 != 0){
    		printf("O resultado da divisão é %.2f\n", operando1/operando2);
    		}else{
    		printf("Não existe divisão por 0(zero)!\n");
    		}
    		break;
    	default:
    		printf("Valor inválido!\n");
    }


    //sem switch
    /*
    if (operador == "+"){
    	printf("O resultado da soma é %f\n", operando1+operando2);
    }else if (operador == "-"){
    	printf("O resultado da subtração é %f\n", operando1-operando2);
    }else if (operador == "*"){
    	printf("O resultado da multiplicação é %f\n", operando1*operando2);
    }else if (operador == "/"){
    	if (operando2 != 0){
    		printf("O resultado da divisão %f\n", operando1+operando2);
    	}else{
    		printf("Não existe divisão por 0(zero)!\n");
    	}
    }
    */
	return 1;
}