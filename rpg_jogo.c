#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void start_rpg();
int main()
{
    int x;

    do{

    printf("Gostaria de inciar o jogo?\n tecle 1 para sim e 0 para não\n");

    scanf("%i",&x);

    if(x==1)
       start_rpg();

    else if(x==0)
        printf("Jogo encerrado :C\n");
        break;
    }while(1);

system("pause");
return 0;
}

void start_rpg()
{

    int x,hit,monstro,hero;
    while(1){
    monstro=60;
    hero=60;
    int rand_int(int n);
    int rand_int_Tocha(int n);
    int rand_int_Punho(int n);
    srand(time(NULL));

do{


   printf("\nPontos de vida atual: %i\nGosatria de atacar com isso?\n 1:Espada\n 2:Tocha\n 3:Punho\n\n",hero);
   scanf("%i",&x);

if(x==1)
{

        hit=rand_int(10);
        monstro=monstro-hit;
        printf("\nSWING!! dano: %i\n\n",hit);
        if(monstro < 0)
        {
            printf("Voce derrotou o monstro, voce venceu!\n\n");
            break;
        }
        printf("Os pontos de vida do monstro sao: %i\n\n",monstro);
        hit=rand_int(10);
        hero=hero-hit;
        printf("O monstro contra atacou! Dano: %i!\n",hit);
        if(hero < 0)
        {
            printf("Voce foi morto, voce perdeu.\n\n");
            break;
        }
}
else if(x==2)
{
        hit=rand_int_Tocha(10);
        monstro=monstro-hit;
        printf("\nO senhor do escuro vem em sua direção!! Dano: %i\n\n",hit);
        if(monstro < 0)
        {
            printf("Voce derrotou o monstro, voce venceu!\n\n");
            break;
        }
        printf("Os pontos de vida do monstro sao: %i\n\n",monstro);

        hit=rand_int(10);
        hero=hero-hit;
        printf("O monstro contra atacou! Dano: %i!\n",hit);
        if(hero < 0)
        {
            printf("Voce foi morto, voce perdeu\n");
            break;
        }

}

else if(x==3)
{

        hit=rand_int_Punho(10);
        monstro=monstro-hit;
        printf("\nPUNCH!! Dano: %i\n\n",hit);
        if(monstro < 0)
        {
            printf("Voce derrotou o monstro, voce venceu!\n\n");
            break;
        }
        printf("Os pontos de vida do monstro sao: %i\n",monstro);
        hit-rand_int(10);
        hero=hero-hit;
        printf("\nO monstro contra atacou! Dano: %i!\n\n",hit);
        if(hero < 0)
        {
            printf("Voce foi morto, voce perdeu");
            break;
        }

}

}while(1);

    }
}
int rand_int (int n)
{
    return rand()%n + 10;
}
int rand_int_Tocha (int n)
{
    return rand()%n + 20;
}
int rand_int_Punho(int n)
{
    return rand()%n +2;
}
