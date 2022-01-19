#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct cell cell;
struct cell
{
    cell *prox;
    int line;
    int column;
    int value;
};
int limit(int num);
void readMatrix(FILE *archive, int **matriz);
void printCell(cell *cel);
void printMatrix(int **matriz);
cell *gerar_matriz_condensada(int **matriz);
void rotate(cell *ini, int selection, int nfile, int n, int way);

int main(void)
{
    FILE *archive;
    int i, j, nfil, n, way;
    char selection, selection1;
    int **matriz = (int **)malloc(4 * sizeof(int *));
    for (i = 0; i < 4; i++)
    {
        matriz[i] = (int *)malloc(4 * sizeof(int));
    }
    if ((archive = fopen("matriztexto.txt", "r")) == NULL)
    {
        printf("Desculpe, o archive não foi aberto corretamente. Tente de novo.!\n");
        return 0;
    }
    readMatrix(archive, matriz);
    cell *inicio = gerar_matriz_condensada(matriz);
    do
    {
        printf("0- Fechar programa.\n");
        printf("1- Escrever matriz.\n");
        printf("2- Rotacionar matriz.\n");
        printf("Digite o numero correspondente:\n");
        scanf(" %d", &i);
        switch (i)
        {
        case 1:
            printf("1- Matriz completa.\n");
            printf("2- Matriz condensada.\n");
            printf("Selecione o tipo de matriz inserindo o numero correspondente:\n");
            scanf(" %d", &j);
            switch (j)
            {
            case 1:

                printMatrix(matriz);
                break;
            case 2:
                printCell(inicio);
                break;
            }
            break;
        case 2:
            printf("1- Linha.\n");
            printf("2- Coluna.\n");
            printf("Selecione linha ou coluna inserindo o numero correspondente:\n");
            scanf(" %c", &selection);
            switch (selection)
            {
            case '1':
                printf("Insira o numero da linha:\n");
                scanf(" %d", &nfil);
                nfil -= 1;
                printf("1- Esquerda.\n");
                printf("2- Direita.\n");
                printf("Selecione a direcao inserindo o numero correspondente:\n");
                scanf(" %c", &selection);
                switch (selection)
                {
                case '1':
                    way = -1;
                    break;
                case '2':
                    way = 1;
                    break;
                }
                printf("Insira a quantidade de saltos que deseja:\n");
                scanf(" %d", &n);
                n = limit(n % 4);
                selection1 = 1;
                break;
            case '2':
                printf("Insira o numero da coluna:\n");
                scanf(" %d", &nfil);
                nfil -= 1;
                printf("1- Cima.\n");
                printf("2- Baixo.\n");
                printf("Selecione a direcao inserindo o numero correspondente:\n");
                scanf(" %c", &selection);
                switch (selection)
                {
                case '1':
                    way = -1;
                    break;
                case '2':
                    way = 1;
                    break;
                }
                printf("Insira a quantidade de saltos que deseja:\n");
                scanf(" %d", &n);
                n = limit(n % 4);
                selection1 = 0;
                break;
            }
            rotate(inicio, selection1, nfil, n, way);
            break;
        }
    } while (i != 0);
}

/
int limit(int num)
{
    if (num < 0)
    {
        num += 4;
    }
    return num;
}


cell *gerar_matriz_condensada(int **matriz)
{
    cell *cel = (cell *)malloc(sizeof(cell));
    cel->prox = NULL;
    cell *ini = cel;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] == 0)
                continue;
            cel->line = i;
            cel->column = j;
            cel->value = matriz[i][j];
            cel->prox = (cell *)malloc(sizeof(cell));
            cell *aux = cel->prox;
            aux->prox = NULL;
            cel = aux;
        }
    }
    return ini;
}
void readMatrix(FILE *archive, int **matriz)
{
    int n;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            fscanf(archive, "%d", &n);
            matriz[i][j] = n;
        }
    }
}


void printCell(cell *ini)
{
    cell *aux = ini;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            while (ini != NULL)
            {
                if (ini->column == j && ini->line == i)
                {
                    printf("%d ", ini->value, ini->line, ini->column);
                    break;
                }
                cell *aux2 = ini->prox;
                ini = aux2;
            }
            ini = aux;
        }
        printf("\n");
    }
}


void printMatrix(int **matriz)
{
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}


void rotate(cell *ini, int selection, int nfile, int n, int way)
{
    int a, b;
    while (ini != NULL)
    {
        cell *aux = ini->prox;
        if (selection == 1)
        {
            if (ini->line == nfile)
            {
                a = limit((ini->column + (n * way)) % 4);
                ini->column = a;
            }
        }
        else
        {
            if (ini->column == nfile)
            {
                b = limit((ini->line + (n * way)) % 4);
                ini->line = b;
            }
        }
        ini = aux;
    }
}
