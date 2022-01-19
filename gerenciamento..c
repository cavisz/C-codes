#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAX_CPF 30
#define TAM 50

#define CADASTRAR 1
#define LISTAR 2
#define PESQUISAR 3
#define ATUALIZAR 4
#define REMOVER 5
#define SAIR 6

struct Data {
	int dia;
	int mes;
	int ano;
};
typedef struct Data TData;

void exibe_menu() {

	printf("Cadastro de estudantes:\n");
	printf("%d - Cadastrar\n", CADASTRAR);
	printf("%d- Listar\n", LISTAR);
	printf("%d- Pesquisar\n", PESQUISAR);
	printf("%d- Atualizar\n", ATUALIZAR);
	printf("%d- Remover\n", REMOVER);
	printf("%d- Sair\n", SAIR);

}

struct Pessoa {
	int id;
	int situacao;
	char nome[MAX];
	char cpf[MAX_CPF];
	TData data;
};
typedef struct Pessoa TPessoa;

int cadastrar(TPessoa vetor[TAM], int pos) {

	if (pos < TAM) {

		printf("Entre com o nome: ");
		fgets(vetor[pos].nome, MAX-1, stdin);
	
		printf("Entre com o cpf: ");
		fgets(vetor[pos].cpf, MAX-1, stdin);

		printf("Entre com a cada de nascimento (dia, mes, ano)\n");
		scanf("%d %d %d", &vetor[pos].data.dia, &vetor[pos].data.mes, &vetor[pos].data.ano);
	
		return 1;
	}

	return 0;
}

void listar(TPessoa vetor[TAM], int pos) {

	int i;

	for (i=0; i < pos; i++) {

		if (vetor[i].situacao ==1) {
	
			printf("\nID: %d\n", vetor[i].id);
			printf("Nome: %s", vetor[i].nome);
			printf("CPF: %s", vetor[i].cpf);
			printf("Data de nascimento: %d %d %d", vetor[i].data.dia, vetor[i].data.mes, vetor[i].data.ano);
		}
	}
}

void pesquisar(TPessoa vetor[TAM], int pos) {

	char noem[MAX];
	int i;

	printf("Entre com o nome: ");
	fgets(nome, MAX-1, stdin);

	for(i=0; i < pos; i++0 {

		if( (vetor[i].situacao ==1) && (strcmp(vetor[i].nome,nome) == 0) ) {
	
			printf("\nID: %d\n", vetor[i].id);
			printf("Nome: %s", vetor[i].nome);
			printf("CPF: %s", vetor[i].cpf);
			printf("Data de nascimento: %d %d %d", vetor[i].data.dia, vetor[i].data.mes, vetor[i].data.ano);

			return 1;
		}
	}

	return 0;
}

int main() {
	
	TPessoa vetor[TAM];
	int op, pos;
	pos = 0;

	do {
		exibe_menu();
		scanf("%d", &op);
		getchar();

		switch (op) {
			case CADASTRAR:
		
				if (cadastrar(vetor, pos) == 1) {
					
					vetor[pos].id = pos;					
					vetor[pos].situacao = 1;
					pos++;

					printf("Operacao realizada com sucesso\n");
				}
				else {
					printf("Operacao nao realizada\n");
				}
				break;

			case LISTAR:	
					
				listar(vetor, pos);
				break;

			case PESQUISAR:

				if(pesquisar(vetor,pos) == 1) {

					printf("Operacao realizada com sucesso\n");
				} else
					printf("Operacao nao realizada\n");

			default:
				printf("Opcao invalida\n");
				break;
			}

	} while (op != SAIR);


	return 0;

}
