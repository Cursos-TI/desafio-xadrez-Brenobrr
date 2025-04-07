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

    # Tabuleiro 8x8 para referência
BOARD_SIZE = 8

def move_bispo(x, y, steps=5, count=0):
    if count == steps or x >= BOARD_SIZE or y >= BOARD_SIZE:
        return
    for i in range(1):  # loop aninhado 1
        for j in range(1):  # loop aninhado 2
            x += 1
            y += 1
            print(f"Bispo -> Posição: ({x}, {y})")
            move_bispo(x, y, steps, count + 1)

def move_torre(x, y, steps=5):
    if steps == 0 or x >= BOARD_SIZE:
        return
    x += 1
    print(f"Torre -> Posição: ({x}, {y})")
    move_torre(x, y, steps - 1)

def move_rainha(x, y, steps=8):
    if steps == 0 or x <= 0:
        return
    x -= 1
    print(f"Rainha -> Posição: ({x}, {y})")
    move_rainha(x, y, steps - 1)

def move_cavalo(x, y):
    movimentos = [(2, 1), (1, 2), (-1, 2), (-2, 1),
                  (-2, -1), (-1, -2), (1, -2), (2, -1)]
    for dx in range(-2, 3):
        for dy in range(-2, 3):
            if (dx, dy) not in movimentos:
                continue
            nx, ny = x + dx, y + dy
            if nx < 0 or ny < 0 or nx >= BOARD_SIZE or ny >= BOARD_SIZE:
                break
            print(f"Cavalo -> Posição: ({nx}, {ny})")
            return  # Só 1 movimento em L é necessário

# Posição inicial de exemplo
x_inicial, y_inicial = 3, 3

print("Movimento do Bispo:")
move_bispo(x_inicial, y_inicial)

print("\nMovimento da Torre:")
move_torre(x_inicial, y_inicial)

print("\nMovimento da Rainha:")
move_rainha(x_inicial, y_inicial)

print("\nMovimento do Cavalo:")
move_cavalo(x_inicial, y_inicial)
    
    return 0;
}
