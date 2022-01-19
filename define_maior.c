#include<stdio.h>

int main (){

	int a, b, c, maior;

	printf("Entre com tres numeros inteiros:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a >= b && a >= c){
		printf("O maior numero e = %d\n", a);
	}

	else if (b >= a && b >= c){
		printf("O maior numero e = %d\n", b);
	}

	else if (c >= a && c >= b){
		printf("O maior numero e = %d\n", c);
	}
	else{
		printf("Numeros equivalentes ou indefinito");
	}
		return 0;
}
