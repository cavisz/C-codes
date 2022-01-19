#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int main(){
char gabarito[10] = { 'B', 'D', 'A', 'C', 'A', 'C', 'D','B', 'D', 'A' };
char resposta[10];
char qtalunos[4];
int nota;
int y, i, z;


    for(y=0;y<10;y++){
        printf("Informe a resposta da pergunta %d: ", y+1);
        scanf("%s", &resposta[y]);
        }
        for(y=0;y<10;y++)  {
            if(toupper(resposta[y])==gabarito[y]){
                nota = nota + 1;
        }
    }
    
    for(z=0; z<3; z++){
        printf("Informe a matricula dos tres alunos: ");
        scanf("%s", &qtalunos[z]);
    }
        printf("A nota do %d aluno  de matricula %s eh: %d\n\n", i, qtalunos, nota);
        
    if (nota<7){
			printf("Aluno reprovado\n\n");
			
		} else if (nota>7) {
		printf("Aluno aprovado\n\n");
		}
		
        
    return 0;
}
