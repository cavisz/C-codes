#include <stdio.h>

int main(void){

	int  dura, hora, min, sec;

	printf("Qual a duração do evento em segundos?\n");
	scanf("%d", dura);
	
	hora = (float) dura / 3600;
	min = (float) (dura%3600)/60;
	sec = (int) (dura%3600)%60;

	printf("Horas %d Minutos %d Segundos %d\n", hora, min, sec);

	return 0;
}
