#include <stdio.h>

// Definição de constantes para movimentos
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8
#define MOV_CAVALO loops

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
    
    // Movimentação do Cavalo (diagonal inferior esquerda)
    printf("Movimentação do Cavalo:\n");
    for (int i = 0; i < MOV_CAVALO; i++) {
        printf("Esquerda\n");
        printf("Baixo\n");
    
    return 0;
}
