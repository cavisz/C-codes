#include<stdio.h>

int main(){
	
	char a, e, i, o, u, c;

	printf("Entre com um caracter:\n");
	scanf("%c", &c);

	switch (c){
		case'a':
			printf("o caracter e uma vogal\n");
			break;
		case'e':
			printf("o caracter e uma vogal\n");
			break;
		case'i':
			printf("o caracter e uma vogal\n");
			break;
		case'o':
			printf("o caracter e uma vogal\n");
			break;
		case'u':
			printf("o caracter e uma vogal\n");
			break;
		default:
			printf("o caracter e uma consoante\n");
			break;
		}

	return 0;
}
	
