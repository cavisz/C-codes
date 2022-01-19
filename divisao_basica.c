#include <stdio.h> 

int main() {
	int a, b;
	float divisao;

	printf("Entre com dois numeros inteiros:\n");
	scanf("%d %d", &a, &b);

	if (b != 0) {
		divisao = (float) a / b;
		printf("Resultado = %f\n", divisao);
	}
	else {
	printf("Divisao por zero!\n" );
	}
	return 0;
}
