#include <stdio.h>

int main(){

	int num, i;
	float fat, soma; 

	fat = 1;
	num = 19; // fat(0)
	soma = 1; // (1/0!)

	for (i=1; i<=num; i++) {

		fat = fat * i; // fat(i)
		soma = soma + (1/fat);
	}
	
	printf("e=%e\n", soma);
	
	return 0;
}
