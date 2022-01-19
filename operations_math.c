#include <stdio.h>

void exibe_menu(void){
	printf("Selecione a operacao desejada\n");
	printf("1-Soma\n");
	printf("2-Subtracao\n");
	printf("3-Multiplicacao\n");
}
	

int soma(int n1, int n2){
	int s;

	s = n1 + n2;

	return s;
}

int subtracao(int n1, int n2){
	int sub;
	
	sub = n1 - n2;

	return sub;
}

int multiplicacao(int n1, int n2){
	int mult;
	
	mult = n1*n2;

	return mult;
}

int main(){
	int opcao, num1, num2, resultado;
	
	exibe_menu;
	
	printf("Entre com a opcao:\n");
	scanf("%d",&opcao);
	
	printf("Entre com dois numeros inteiros\n");
	scanf("%d %d", &num1, &num2);
	
	switch (opcao) {
		case 1:
			resultado = soma (num1, num2);
			printf("O resultado do somatorio e: %d\n", resultado);
			break;
		case 2:
			resultado = subtracao (num1, num2);
			printf("O resultado da subtracao e: %d\n", resultado);
			break;
		case 3:
			resultado = multiplicacao (num1, num2);
			printf("O resultado da multiplicacao e: %d\n", resultado);
			break;
		default:
			printf("peracao indisponivel\n");
			break;
	}

	return 0;
}
