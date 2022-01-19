#include <stdio.h>

int estoque;

int exibe_menu() {

       printf("(1)Compra de produtos\n");
       printf("(2)Devolucao de produtos\n");
       printf("(3)Sair\n");
        
}
     
int inicializa_estoque() {
        
       printf("Insira a quantidade de produtos disponiveis\n");
       scanf("%d", &estoque);
       
       while (estoque <= 0) {
               scanf("%d", &estoque);
                
       }                         
 }
 
int compra_produto(int quant) {

        if (quant > 0 && quant >= estoque) {
                estoque = estoque - quant;
          
               return 1;
        }
        
       return 0;
} 

int devolucao_produto(int quant, int vend) {
        
        if (quant > 0 && quant <= vend){
                estoque = estoque + quant;
                
            return 1; 
            
        } 
            
         return 0;
       }

float calcula_total(int quant) {

	int valor_total;

	valor_total = quant*50.000;

	return valor_total;

	}              
      
int main() {

int quant; opcao;
float cont;
cont= 0 

 	inicializa_estoque();
	while ( estoque > 0 && opcao != 3){
			printf("A quantidade disponivel no estoque eh:%d\n", estoque);
			exibe_menu();
			scanf("%d", &opcao);
		
		switch (opcao){
			
			case 1:
				printf("Entre com a quantidade");
				scanf("%d", &quant);

					if(quant > 0){
						if(quant < estoque){
							printf("Quantidade solicitada maior que o estoque.\n");
						}
					else{
						if (compra_produto (quant) == 1){
							resultado = calcula_total(quant);
							printf("Operacao realizada com sucesso.\n");
							printf("Valor total da compra: R$ %.2f\n", resultado);
							cont++;
















	 }

		

}
