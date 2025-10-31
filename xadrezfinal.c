#include <stdio.h>

// Função da Torre usando recursão
void moverTorre(int casas) {
    if (casas == 0) return; // termina quando não tem mais casas
    printf("Torre Direita\n"); // mostra para onde a torre vai
    moverTorre(casas - 1); // chama a função de novo
}

// Função do Bispo (movimento diagonal)
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0) return; // para quando acabou o movimento vertical

    for (int j = 0; j < horizontal; j++) {
        printf("Bispo Cima Direita\n"); // movimento horizontal
    }

    moverBispo(vertical - 1, horizontal); // movimento vertical
}

// Função da Rainha (movimento para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) return; // termina quando não tem mais casas
    printf("Rainha Esquerda\n");
    moverRainha(casas - 1); // chama de novo
}

int main() {

    printf("Início da primeira rodada...\n");
    moverTorre(5); // torre vai 5 casas para a direita

    printf("\nInício da segunda rodada...\n");
    moverBispo(3, 2); // bispo sobe 3 e vai 2 para direita cada vez

    printf("\nInício da terceira rodada...\n");
    moverRainha(8); // rainha vai 8 casas para a esquerda

    // Cavalo
    printf("\nInício da quarta rodada...\n");
    printf("Movimento do Cavalo:\n");

    int i, j;
    for (i = 2; i >= 1; i--) { // vai para cima
        for (j = 1; j <= 2; j++) { // condições para o movimento em L
            if (i == 2 && j == 1) {
                printf("Cavalo Cima\n"); // primeiro passo para cima
                continue; // pula para próxima iteração
            }

            if (i == 1 && j == 2) {
                printf("Cavalo Cima\n"); // segundo passo para cima
                printf("Cavalo Direita\n"); // movimento para a direita
                break; // termina o L
            }
        }
    }

    printf("\nFim do jogo!\n");
    return 0;
}
