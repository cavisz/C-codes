#include <stdio.h> 

float conta; 

int creditar_conta(float valor) {

	 if (valor > 0) { 
		conta = conta + valor; 
		return 1;
	 } 
	
	return 0;
 } 

int main() {
	 float valor; 

	conta = 0.0; 

	printf("Entre com um valor:\n"); 
	scanf("%f", &valor); 

	if (creditar_conta(valor) == 1) {
	 printf("Operacao realizada com sucesso.\n"); 
	} 
	else { 
		printf("Operacao nao realizada.\n"); 
	} 

	printf("Saldo atual = %f\n", conta); 
	
	return 0; 
}
