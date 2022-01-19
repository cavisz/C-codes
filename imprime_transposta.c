#include <stdio.h>
#define LIN 3
#define COL 3

void imprime_transposta(int matriz[LIN][COL]) {

	int i, j;
	
	printf("Informe valores:\n");
	for (i=0; i<LIN; i++) {
		for (j=0; j<COL; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	printf("Transposta:\n");
 	for (j=0; j<COL; j++) {
 	 	for (i=0; i<LIN; i++) {
 		 	printf("%d ", matriz[i][j]);
 	 	}
                printf("\n");
 	}
}



int main(void) {
	int matriz[LIN][COL];
	int i; /* variável indexadora de linhas */
	int j; /* variável indexadora de colunas */

	imprime_transposta(matriz);
	
	return 0;
}
