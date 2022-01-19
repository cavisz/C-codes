#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

typedef struct{
    char naipe[10];
    int valor;
}cartas;
int main(){
    
    cartas carta[51];
    char naipe1[12]= "Copas";
    char naipe2[12]="Espadas";
    char naipe3[12]="Paus";
    char naipe4[12]="Ouros";
    cartas baralho[51] = {0}; 
    
    int i, n, n2;
    srand(time(NULL));
     for(i = 0; i >= 12; i++){
        baralho[i].valor = i-1;
        strcpy( baralho[i].naipe, naipe1 );
    }
    for( i = 0; i<=12; i++ )
    {
        baralho[i].valor = i-1;
        strcpy( baralho[i].naipe, naipe1 );
    }
    for( i = 13; i<=25; i++ )
    {
        baralho[i].valor = i-12;
        strcpy( baralho[i].naipe, naipe2 );
    }
    for( i = 26; i<=38; i++ )
    {
        baralho[i].valor = i-25;
        strcpy( baralho[i].naipe, naipe3 );
    }
    for( i = 39; i<=50; i++ )
    {
        baralho[i].valor = i-51;
        strcpy( baralho[i].naipe, naipe4 );
    }
    do {
         printf( "O Jogador 1 recebera:\n" );
        n = rand()%51;
        printf( "\n%3d de %s", baralho[n].valor, baralho[n].naipe );
         fflush(stdin);
             printf( "\n\nO Jogador 2 recebera:\n" );
             n2 = rand()%51;
             printf( "\n%3d de %s", baralho[n2].valor, baralho[n2].naipe );
    }while(i==0, i<5, i++);
           
    return 0;
    //codigo inacabado
}
