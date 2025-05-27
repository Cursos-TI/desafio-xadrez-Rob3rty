#include <stdio.h>

void moverTorre(int n){
    if(n > 0)        
    {
        printf("Direita\n");
        moverTorre(n -1);
    }
}

void moverBispo(){
    for (int i = 1; i <= 5; i++)
    {
        printf("Cima,");
        for (int i = 1; i <= 1; i++)
        {
            printf("Direita\n");
        } 
    }
}

void moverRainha(int n){
    if (n > 0)
    {
        printf("Esquerda\n");
        moverRainha(n - 1);
    }
}

int main()
{
    printf("Jogo de Xadrez: Movimentando as Peças do jogo.\n\n");

    printf("TORRE:\n");
    moverTorre(5);
    
    printf("\nBISPO:\n");
    moverBispo();

    printf("\nRAINHA:\n");
    moverRainha(8);
    
    printf("\nCAVALO:\n");
    for (int i = 1, j = 1; i <= 1; i++)
    {   
        if (j == 1)  //verifica se j é igual a 1.
        {
            for (int j = 1; j <=2; j++)  //entrado no loop para mover a peça para cima.
            {
                printf("Cima\n");
            }
        }
        printf("Direita");
    }
}
