void lermatriz(FILE *arquivo, int **matriz);
void imprimir_celula(celula *cel);
void imprimir_matriz(int **matriz);
celula *gerar_matriz_condensada(int **matriz);
void girar(celula *ini, int selecao, int nfileira, int n, int sentido);
int main(void)
{
    FILE *arquivo;

    int i, j, nfil, n, sentido;
    char selecao, selecao1;
    int **matriz = (int **)malloc(4 * sizeof(int *));
    for (i = 0; i < 4; i++)
    {
        matriz[i] = (int *)malloc(4 * sizeof(int));
    }
    if ((arquivo = fopen("matriztexto.txt", "r")) == NULL)
    {
        printf("Erro ao abrir o arquivo!\n");
        return 0;
    }
    lermatriz(arquivo, matriz);
    celula *inicio = gerar_matriz_condensada(matriz);
    do
    {
        printf("1- Escrever matriz.\n");
        printf("2- Rotacionar matriz.\n");
        printf("3- Fechar programa.\n");
        printf("Digite o numero correspondente: ");
        scanf(" %d", &i);
        switch (i)
        {
        case 1:
            printf("1- Matriz completa.\n");
            printf("2- Matriz condensada.\n");
            printf("Selecione o tipo de matriz inserindo o numero correspondente: ");
            scanf(" %d", &j);
            switch (j)
            {
            case 1:

                imprimir_matriz(matriz);
                break;
            case 2:
                imprimir_celula(inicio);
                break;
            }
            break;
        case 2:
            printf("l- Linha\n");
            printf("b- Coluna.\n");
            printf("Selecione linha ou coluna inserindo o numero correspondente: ");
            scanf(" %c", &selecao);
            switch (selecao)
            {
            case 'l':
                printf("Identificacao da linha:\n");
                scanf(" %d", &nfil);
                nfil -= 1;
                printf("[d] Direita\n[e] Esquerda\n");
                scanf(" %c", &selecao);
                switch (selecao)
                {
                case 'd':
                    sentido = 1;
                    break;
                case 'e':
                    sentido = -1;
                    break;
                }
                printf("Quantidade de saltos:\n");
                scanf(" %d", &n);
                n = limite(n % 4);
                selecao1 = 1;
                break;
            case 'b':
                printf("Identificacao da column:\n");
                scanf(" %d", &nfil);
                nfil -= 1;
                printf("[c] Cima\n[b] Baixo\n");
                scanf(" %c", &selecao);
                switch (selecao)
                {
                case 'c':
                    sentido = -1;
                    break;
                case 'b':
                    sentido = 1;
                    break;
                }
                printf("Quantidade de saltos:\n");
                scanf(" %d", &n);
                n = limite(n % 4);
                selecao1 = 0;
                break;
            }
            girar(inicio, selecao1, nfil, n, sentido);
            break;
        }
    } while (i != 0);
}
int limite(int num)
{
    if (num < 0)
    {
        num += 4;
    }
    return num;
}
celula *gerar_matriz_condensada(int **matriz)
{
    celula *cel = (celula *)malloc(sizeof(celula));
    cel->prox = NULL;
    celula *ini = cel;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] == 0)
                continue;
            cel->line = i;
            cel->column = j;
            cel->value = matriz[i][j];
            cel->prox = (celula *)malloc(sizeof(celula));
            celula *aux = cel->prox;
            aux->prox = NULL;
            cel = aux;
        }
    }
    return ini;
}
void lermatriz(FILE *arquivo, int **matriz)
{
    int n;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            fscanf(arquivo, "%d", &n);
            matriz[i][j] = n;
        }
    }
}
void imprimir_celula(celula *ini)
{
    celula *aux = ini;
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
                celula *aux2 = ini->prox;
                ini = aux2;
            }
            ini = aux;
        }
        printf("\n");
    }
}
void imprimir_matriz(int **matriz)
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
void girar(celula *ini, int selecao, int nfileira, int n, int sentido)
{
    int a, b;
    while (ini != NULL)
    {
        celula *aux = ini->prox;
        if (selecao == 1)
        {
            if (ini->line == nfileira)
            {
                a = limite((ini->column + (n * sentido)) % 4);
                ini->column = a;
            }
        }
        else
        {
            if (ini->column == nfileira)
            {
                b = limite((ini->line + (n * sentido)) % 4);
                ini->line = b;
            }
        }
        ini = aux;
    }
}
