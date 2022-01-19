#include<stdio.h>
#include<stdlib.h>
#include<windows.h>


struct gotas{
    int x;
    int y;
    int z;
    char jan;
    struct gotas *prox;
};
typedef struct gotas gota;
#define MAX_LIN 10
#define MAX_COL 10
void readGotas(gota **inicio, FILE *fp, int n){
    for(int i = 0; i < n; i++){
        gota *aux;
        aux = malloc(sizeof(gota));
        fscanf(fp, "%d", &aux->x);
        fscanf(fp, "%d", &aux->y); 
        fscanf(fp, "%c", &aux->jan);
        aux->z = 0;
        aux->prox = NULL;
        if(aux->x>MAX_LIN || aux->y>MAX_COL){
            free(aux);
            n--;
            readGotas(inicio, fp, n);
        }
        if(inicio!=NULL){
            aux->prox=*inicio;
        }else{
            aux->prox=NULL;
        }
        *inicio=aux;
    }
}

gota *searchElemento(gota *inicio, int i, int j){
    while(inicio != NULL){
        if((inicio)->x == i && (inicio)->y == j){
            return(inicio);
        }
        inicio=inicio->prox;
    }
    return(NULL);
}


void removeGotas(gota **inicio, int x, int y){
    gota *aux, *temp_aux;
    aux = *inicio;
    temp_aux=NULL;
    while(aux!=NULL){
        if(aux->x == x && aux->y == y){
            if(temp_aux!=NULL){
                temp_aux->prox=aux->prox;
            }else{
                *inicio = aux->prox;
            }
            free(aux);
            return;
        }
        temp_aux=aux;
        aux=aux->prox;
    }
}


void updateGotas(gota *gotaa, gota **inicio){
    if(gotaa->jan == 'e'){
        gotaa->x+=2;
    }else{
        gotaa->x++;
    }
    if(gotaa->x>=MAX_LIN){
        removeGotas(inicio, gotaa->x, gotaa->y);
    }else{
        gotaa->z = -1;
    }
    
}


void tick(gota **inicio){
    gota *aux, *temp_aux;
    int n = 0;
    while(*inicio!=NULL){
        for(int i = 0; i <= MAX_COL; i++){
            printf("-");
        }
        printf("\n");
        for(int i = 1; i < MAX_LIN; i++){
            printf("|");
            for(int j = 1; j < MAX_COL; j++){
                aux = *inicio;
                temp_aux = searchElemento(aux, i, j);
                
                if(temp_aux != NULL && temp_aux->z != -1){
                    printf("N");
                    updateGotas(temp_aux, inicio);
                }else{
                    printf(" ");
                }
            }
            printf("|\n");
        }
        for(int i = 0; i <= MAX_COL; i++){
            printf("+");
        }
        printf("\n");
        Sleep(500);
        aux = *inicio;
        while(aux!=NULL){
            aux->z = 0;
            aux=aux->prox;
        }
        n++;
    }
    
    printf("Foi rodada %d vezes\n", n);
}


void main(){
    FILE *fp;
    gota *inicio;
    int n;
    printf("Por favor, insira o numero de gotas: ");
    scanf("%d", &n);
    inicio = NULL;
    fp = fopen("coordenadasgota.txt", "r");
    readGotas(&inicio, fp, n);
    fclose(fp);
    tick(&inicio);
    }
