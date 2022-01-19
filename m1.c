#include <stdio.h>

#define LIN 10
#define COL 10

void le_matriz(int matriz[LIN][COL], int linha, int coluna) {

	int i, j;

	printf("Informe os valores da matriz:\n");

	for(i=0; i<linha; i++) {

		for(j=0; j<coluna; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}
}

void imprime_matriz(int matriz[LIN][COL], int linha, int coluna) {

	int i, j;

	printf("\nMatriz:\n");
	
	for(i=0; i<linha; i++) {

		for(j=0; j<coluna; j++) {
			printf("%d ", matriz[i][j]);
		}	
		printf("\n");
	}

}

int main (){
	
	int matriz[LIN][COL];
	int linha, coluna;
	int i, j;

	printf("Entre com as dimesoes da matriz:\n");
	scanf("%d %d", &linha, &coluna);

	le_matriz(matriz, linha, coluna);
	
	imprime_matriz(matriz, linha, coluna);

	return 0;
}
