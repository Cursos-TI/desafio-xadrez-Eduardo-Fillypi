#include <stdio.h>

    int main(){

        int i = 1;

        printf(" Inicio da Primeira rodada...\n");

        // Mover torre 5 casas para direita
        while ( i <= 5 )
        {
            printf("Torre Direita\n");  //Direção que a torre ira se mover
            i++;
        }
        

            printf(" Início da segunda rodada...\n");
        // Inicio da segunda rodada

        i = 1;

        do{

            printf("Bispo Cima Direita\n"); // Direção que o Bispo ira se mover
            i++;

        }while ( i <= 5 );
        
        printf(" Inicio da Terceira Rodada...\n"); 
        // Inicia a útima Rodada ( Terceira )
        i = 1;
        
        for( i = 1; i <= 8; i++)
        {
            printf("Rainha Esquerda\n"); // Direção que a Rainha ira se mover
        }
        
        return 0;

    }