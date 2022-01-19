#include <stdio.h>
#define LIN 3
#define COL 3

void preencher_matriz (int matriz[LIN][COL]) {

	int i, j;	

	printf("Informe valores:\n");
	for (i=0; i<LIN; i++) {
		for (j=0; j<COL; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
}

void imprime_matriz(int matriz[LIN][COL]) {

	int i, j;

	printf("\nMatriz:\n");
		for (i=0; i<LIN; i++) {

			for(j=0; j<COL; j++) {
			
				printf("%d ", matriz [i][j]);
		}

	printf("\n");

	}

}

int main() {
	int matriz[LIN][COL];
	int i; /* variável indexadora de linhas */
	int j; /* variável indexadora de colunas */

	preencher_matriz(matriz);
	imprime_matriz(matriz);

	return 0;
}
