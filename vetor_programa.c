#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>


int uni(char *a, char *b, int nA, int nB, char *vetor);
int dif(char *a, char *b, int nA, int nB, char *vetor, int oneinters);


int main(void)
{
    char A[10], B[10], unilower[20], inter[10], diferencaAB[10], diferencaBA[10], i;
    int nA = 0, nB = 0, j;
    while (nA < 10)
    {
        
        printf("Insira o caractere %d do Vetor A: \n", nA + 1);
        scanf(" %c", &i);        
        if (i == ':' && nA == 0) 
        {
            printf("Nao e permitido que o vetor fique vazio!\n");
            printf("Tente novamente digitando 0!\n");
        }
        else if (i == ':') 
        {
            break;
        }
        else
        {
            *(A + nA) = i;
            nA++;
        }
    }
    while (nB < 10)
    {
        printf("Insira o elemento %d do Vetor B: \n", nB + 1);
        scanf(" %c", &i);
        if (i == ':' && nB == 0)
        {
            printf("Nao e permitido que o vetor fique vazio!\n");
            printf("Tente novamente digitando 0!\n");
        }
        else if (i == '0')
        {
            break;
        }
        else
        {
            *(B + nB) = i;
            nB++;
        }
    }

    
    printf("\nInterseccao\n");
    for (j = 0; j < dif(A, B, nA, nB, inter, 1); j++)
        printf("%c ", *(inter + j));

    printf("\ndif AB\n");
    for (j = 0; j < dif(A, B, nA, nB, diferencaAB, 0); j++)
        printf("%c ", *(diferencaAB + j));

    printf("\ndif BA\n");
    for (j = 0; j < dif(B, A, nB, nA, diferencaBA, 0); j++)
        printf("%c ", *(diferencaBA + j));
    
    printf("\nuni\n");
    for (int k = 0; k < uni(A, diferencaBA, nA, j, unilower); k++)
        printf("%c ", *(unilower + k));

    return 0;
}

int uni(char *a, char *b, int nA, int nB, char *vetor)
{
    for (int i = 0; i < nA; i++)
    {
        *vetor = *(a + i);
        vetor++;
    }
    for (int i = 0; i < nB; i++)
    {
        *vetor = *(b + i);
        vetor++;
    }
    return (nA + nB);
}


int dif(char *a, char *b, int nA, int nB, char *vetor, int oneinters)
{
    int k = 0;
    for (int i = 0; i < nA; i++)
    {
        int equal = false;
        for (int j = 0; j < nB; j++)
        {
            if (*(a + i) == *(b + j))
            {
                equal = true;
                break;
            }
        }
        
        if (equal == oneinters)
        {
            *(vetor + k) = *(a + i);
            k++;
        }
    }
    return k;
   }
