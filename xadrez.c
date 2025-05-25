#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    printf("Jogo de Xadrez: Movimentando as Peças do jogo.\n\n");

    printf("\nTORRE:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("Direita\n");
    }

    printf("\nBISPO:\n");
    int i = 1;
    while (i <=5)
    {
        printf("Cima,Direita\n");
        i++;
    }

    printf("\nRAINHA:\n");
    int r =1;
    do
    {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

    return 0;
}
