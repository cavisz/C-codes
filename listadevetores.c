#include<stdio.h>
#include<stdlib.h>

struct celula{
    int vetor[3];
    int conte;
    struct celula *prox;
};
typedef struct celula cel;
void nextVetor(cel *auxi, int pos){
    for(int i = pos; i < auxi->conte; i++){
        auxi->vetor[i] = auxi->vetor[i+1];
    }
}
void insere_elemento(cel **m, int elemento){
    cel *auxi;
    auxi = *m;
    while(auxi!=NULL){
        if(auxi->conte < 3){
            auxi->vetor[auxi->conte] = elemento;
            auxi->conte++;
            return;
        }else{
            auxi=auxi->prox;
        }
    }
    auxi = malloc(sizeof(cel));
    auxi->vetor[0] = elemento;
    auxi->conte=0;
    auxi->conte++;
    if(*m==NULL){
        auxi->prox=NULL;
    }else{
        auxi->prox=*m;
    }
    *m=auxi;
}

void remove_elemento(cel **m, int elemento){
    cel *auxi, *temp_auxi;
    auxi = *m;
    while(auxi!=NULL){
        for(int i = 0; i < auxi->conte; i++){
            if(auxi->vetor[i] == elemento){
                auxi->vetor[i] = 0;
                auxi->conte--;
                printf("Elemento removido com sucesso.\n");
                if(auxi->conte == 0){
                    if(auxi==*m){
                        *m=auxi->prox;
                    }else{
                        temp_auxi->prox=auxi->prox;
                    }
                    free(auxi);
                    return;
                }
                nextVetor(auxi, i);
                return;
            }
        }
        temp_auxi = auxi;
        auxi=auxi->prox;
    }
    printf("Elemento nao pode ser removido.\n");
}

void compacta_lista(cel **m){
    cel *auxi, *temp_auxi;
    auxi = *m;
    if(auxi==NULL){
        return;
    }
    while(auxi->prox!=NULL){
        while(auxi->conte!=3 && auxi->prox!=NULL){
            temp_auxi=auxi->prox;
            auxi->vetor[auxi->conte] = temp_auxi->vetor[0];
            nextVetor(temp_auxi, 0);
            temp_auxi->conte--;
            auxi->conte++;
            if(temp_auxi->conte == 0){
                auxi->prox=temp_auxi->prox;
                free(temp_auxi);
            }
        }
        auxi=auxi->prox;
        if(auxi==NULL){
            break;
        }
    }
}

void imprime_lista(cel **m){
    cel *auxi;
    auxi = *m;
    int j = 0;
    while(auxi!=NULL){
        printf("\n");
        printf("Vetor %d: ", j);
        for(int i = 0; i < auxi->conte; i++){
            printf("%d ", auxi->vetor[i]);
        }
        j++;
        auxi=auxi->prox;
    }
    printf("\n");
}
int menu(){
    int escolha;
    printf("1- Inserir elemento.\n");
    printf("2- Remover elemento.\n");
    printf("3- Compactar lista.\n");
    printf("4- Imprimir lista.\n");
    printf("5- Fechar programa.\n");
    printf("Digite o numero correspondente: ");
    scanf("%d", &escolha);
    return(escolha);
}

    cel *inicio;
    int op = 0, elemento;
    inicio = NULL;
    while(op!=5){
        op = menu();
        switch(op){
            case 1:
                printf("Por favor, digite o valor do elemento a ser inserido: ");
                scanf("%d", &elemento);
                insere_elemento(&inicio, elemento);
                break;
            case 2:
                printf("Por favor, digite o valor do elemento a ser removido: ");
                scanf("%d", &elemento);
                remove_elemento(&inicio, elemento);
                break;
            case 3:
                compacta_lista(&inicio);
                break;
            case 4:
                imprime_lista(&inicio);
                break;
            case 5:
                break;
            default:
                printf("Escolha inválida.\n");
                break;
        }
    }
  } 
