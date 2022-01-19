#include <stdio.h>

int main(){

	int x,i;

	for (x=2; x<=9; x++){
	
		printf("Tabuada do %d:\n", x);
	
			for (i=1; i<=10; i++) {

				printf("%d * %d = %d\n", x, i, x * i); 

				}

			}
	return 0;
}
