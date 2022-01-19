#include <stdio.h>
#define LIN 3
#define COL 3

void preencher_matriz(int matriz[LIN][COL]) {

	int i, j;	

	printf("Informe valores:\n");
	for (i=0; i<LIN; i++) {
		for (j=0; j<COL; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
}

void imprime_diagonal_principal(int matriz[LIN][COL]) {

	int i, j;
	
	printf("Diagonal principal:\n");
	for (i=0; i<LIN; i++) {
 		printf("%d ", matriz[i][i]);
 	}
	printf("\n");

}

int main() {
	int matriz[LIN][COL];
	int i, j;
	
	preencher_matriz(matriz);
	imprime_diagonal_principal(matriz);

	return 0;
}
