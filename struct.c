#include <stdio.h>
#include <string.h>
#define TAM 50
#define MAX 100

struct Pessoa {
	char nome[MAX];
	int idade;
};
typedef struct Pessoa TPessoa;


void le_cadastros(TPessoa vetor[TAM], int n) {
	int i;

	

	for (i=0; i<n; i++) {

		printf("Entre com o nome:\n");
		fgets(vetor[i].nome, MAX-1, stdin);		

		printf("Entre com a idade:\n");
		scanf("%d", &vetor[i].idade);
		getchar();
	}
}

void imprime_cadastros(TPessoa vetor[TAM], int n) {
	int i;

	for (i=0; i<n; i++) {

		printf("\nPessoa: %d\n", i);
		printf("\nNome: %s", vetor[i].nome);
		printf("Idade: %d\n", vetor[i].idade);

	}
}
	
int main() {

	TPessoa vetor[TAM];
	int i, n;

	printf("Entre com o mumero de pessoas:\n");
	scanf("%d", &n);
	getchar();

	le_cadastros(vetor, n);
	imprime_cadastros(vetor, n);

	return 0;
}
