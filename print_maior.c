#include <stdio.h>

int main(){

	int n, i;
	int anterior1, anterior2, atual;
	
	anterior1 = 0;
	anterior2 = 1;

	printf("Entre com um numero iteiro:\n");
	scanf("%d", &n);

	printf("0 1 ");

	for (i=3; i<=n; i++) {

		atual = anterior1 + anterior2;
		printf("%d ", atual);

		anterior1 = anterior2;
		anterior2 = atual;
		
	}
	
	return 0;
}
