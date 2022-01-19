#include <stdio.h>

int main(){

	float num, soma, cont, media;
	
	printf("Entre com uma seqiencia de numeros.\n");

	soma = 0;
	cont = 0;

	
	do{
		scanf("%f", &num);

		if ( num >= 0){
	
		soma = soma + num;
		cont++;
		}

	}while ( num >= 0);
		
		if ( cont > 0){
	
		media = soma / cont;
		
		printf("media =%f\n", media);
		}

	return 0;
}
