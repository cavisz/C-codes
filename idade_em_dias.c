#include <stdio.h>

int main(void){

	int dia, mes, ano;

	printf("Insira sua idade em anos/meses/dias: \n");
	scanf("%d %d %d", &ano, &mes, &dia);

	ano = ano * 365;
	mes = mes * 30;
	dia = dia + mes + ano;

	printf("Sua idade em dias é de: %d\n", dia);

	return 0;
}
