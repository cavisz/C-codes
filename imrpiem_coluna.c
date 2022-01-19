include <stdio.h>
#define LIN 3
#define COL 3

void preenche_matriz(int matriz[LIN][COL]) {

	int i, j;

	printf("Informe valores:\n");
	for (i=0; i<LIN; i++) {
		for (j=0; j<COL; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
}
void imprime_coluna(int matriz[LIN][COL]) {
	int i, coluna = 1;

	printf("Coluna %d:\n", coluna);
	for (i=0; i<LIN; i++) {
		printf("%d ", matriz[i][coluna]);
	}
	printf("\n");
}

int main() {
	int matriz[LIN][COL];
	int i, j, coluna;

	preenche_matriz(matriz);
	imprime_coluna(matriz);

	return 0;
}
