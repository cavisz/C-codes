#include <stdio.h>
#include <string.h>
#define TAM 50
#define MAX 100

struct Pessoa {
	char nome[MAX];
	int idade;
};
typedef struct Pessoa TPessoa;


int main() {

	TPessoa vetor[TAM];


	printf("Entre com o nome:\n");
	fgets(vetor[0].nome, MAX-1, stdin);

	printf("Entre com a idade:\n");
	scanf("%d", &vetor[0].idade);
	getchar();
	

	printf("Entre com o nome\n");
	fgets(vetor[1].nome, MAX-1, stdin);

	printf("Entre com a idade: %d\n");
	scanf("%d", &vetor[1].idade);
	getchar();

	printf("\nNome: %s", vetor[0].nome);
	printf("Idade: %d\n", vetor[0].idade);

	printf("\nNome: %s", vetor[1].nome);
	printf("Idade: %d\n", vetor[1].idade);


	return 0;
}
