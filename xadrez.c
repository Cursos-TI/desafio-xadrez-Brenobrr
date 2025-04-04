#include <stdio.h>

// Definição de constantes para movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // Movimentação do Bispo (diagonal superior direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < MOV_BISPO; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }

    printf("\n");

    // Movimentação da Torre (direita)
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < MOV_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação da Rainha (esquerda)
    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < MOV_RAINHA; i++) {
        printf("Esquerda\n");
    }

    printf("\n");

    // Movimentação do Cavalo (em L, para baixo e esquerda)
    int x = 4, y = 4; // posição inicial do cavalo
    int novoX, novoY;

    printf("Movimentos em L do Cavalo para BAIXO e ESQUERDA a partir de (%d, %d):\n", x, y);

    // Loop externo com FOR para movimentos na vertical (baixo)
    for (int dx = 1; dx <= 2; dx++) {
        int dy = 1;

        // Loop interno com WHILE para movimentos na horizontal (esquerda)
        while (dy <= 2) {
            if (dx * dx + dy * dy == 5) {
                novoX = x + dx;   // movendo para baixo
                novoY = y - dy;   // movendo para a esquerda

                if (novoX >= 0 && novoX < 8 && novoY >= 0 && novoY < 8) {
                    printf("-> (%d, %d)\n", novoX, novoY);
                }
            }
            dy++;
        }
    }

    return 0;
}
