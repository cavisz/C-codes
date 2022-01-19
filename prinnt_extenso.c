#include<conio.h>
#include <stdio.h>
#include<string.h>

void print_centena(int m){
    switch (m)
    {
       case 1 : printf("Cento"); break;
       case 2 : printf("Duzentos"); break;
       case 3 : printf("Trezentos"); break;
       case 4 : printf("Quatrocentos"); break;
       case 5 : printf("Quinhentos"); break;
       case 6 : printf("Seiscentos"); break;
       case 7 : printf("Setecentos"); break;
       case 8 : printf("Oitocentos"); break;
       case 9 : printf("Novecentos"); break;
    }

}
void print_dezena(int m){
	switch (m)
    {
        case 2 : printf("vinte"); break;
        case 3 : printf("trinta"); break;
        case 4 : printf("quarenta"); break;
        case 5 : printf("cinquenta"); break;
        case 6 : printf("sessenta"); break;
        case 7 : printf("setenta"); break;
        case 8 : printf("oitenta"); break;
        case 9 : printf("noventa"); break;
        break;
    }
}
void print_unidade(int m){
	switch (m)
	{
		case 1 : printf("um"); break;
		case 2 : printf("dois"); break;
		case 3 : printf("tres"); break;
		case 4 : printf("quatro"); break;
		case 5 : printf("cinco"); break;
		case 6 : printf("seis"); break;
		case 7 : printf("sete"); break;
		case 8 : printf("oito"); break;
		case 9 : printf("nove"); break;
	}
}
int main(){

        int n, m;
        printf("Digite um número:\n");
        scanf("%d", &n);
        
    if ( n != 0) {
        
    
        if(n > 1000){
                printf("mil ");
                n = n%1000;
                printf(" e ");
        }
        
        if(n > 100){
                m = n/100;
                print_centena(m);
                n = n%100;
                printf(" e ");
        }
        
        if(n > 10){
                m = n/10;
                print_dezena(m);
                n = n%10;
                printf(" e ");
        }
        
        print_unidade(n);
        getchar();
        getchar();
        
    } else {
        printf("\nInsira um valor válido!");
    }
        
}
