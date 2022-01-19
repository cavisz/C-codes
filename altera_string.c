#include <stdio.h>
#include <string.h>

#define MAX 100


int main () {

	//char nome[MAX] = "camille vitoria da silva";

	char nome[MAX], copia[MAX], sobrenome[MAX];
	int tamanho;

	printf("Entre com seu nome:\n");
	fgets(nome, MAX-1, stdin);

	printf("Entre com seu sobrenome:\n");
	

	//scanf("%s", nome);
	//printf("Nome: %s\n", nome);
	
	fgets(sobrenome, MAX-1, stdin);
	

	// strlen(): retorna o tamanho da string
	tamanho = strlen(nome);
	printf("Tamanho string: %d\n", tamanho);

	//strcpy(destino, origem): copia strings
	strcpy(copia, nome);
	printf("Copia: %s\n", copia);

	// errado em string e vetor: precia  copiar cada caracter
		//copia = nome;

	//removendo o \n
	//nome[tamanho-1] = '\0';
	
	nome[tamanho-1] = ' ';

	//strcat(): junta as string em uma
	strcat(nome, sobrenome);
	
	printf("nome completo: ");
	puts(nome);

	return 0;

}
