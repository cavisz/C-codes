#include <stdio.h>
#define LIN 3
#define COL 3

void imprimir_linha(int matriz[LIN][COL]) {
	
	int i, j, linha;

	printf("Informe valores:\n");
	for (i=0; i<LIN; i++) {
		for (j=0; j<COL; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	linha = 0;
	
	printf("Linha %d:\n", linha);
	for (j=0; j<COL; j++) {
		printf("%d ", matriz[linha][j]);
	}
	printf("\n");

}


int main(void) {
	int matriz[LIN][COL];
	int i, j, linha;

	imprimir_linha(matriz);	

	return 0;
}
