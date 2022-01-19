#include <stdio.h>
#include <string.h>

#define MAX 100


int main () {

	char str1[MAX], str2[MAX];
	int res;

	printf("Entre com a primeria string:\n");
	fgets(str1, MAX-1, stdin);

	printf("Entre com a segunda string:\n");
	fgets(str2, MAX-1, stdin);

	res = strcmp(str1, str2);

	if (res == 0) {
		printf("As strings sao iguais\n");
	}
	else if (res > 0) {
		printf("A primeira string é maior que a segunda string\n");
	}
	else {
		printf("A primeira string é menor que segunda string\n");
	}

	return 0;

}
