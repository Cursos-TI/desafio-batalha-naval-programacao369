#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Matriz que representa o tabuleiro 10x10. Inicializada com 0 (água).
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Vetores representando os navios (tamanho 3).
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3}; // valor 3 representa parte do navio
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};

    // Coordenadas iniciais para o navio horizontal (linha fixa, coluna vai variar)
    int linha_horizontal = 2;
    int coluna_horizontal = 4;

    // Posiciona o navio horizontal no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_horizontal][coluna_horizontal + i] = navio_horizontal[i];
    }

    // Coordenadas iniciais para o navio vertical (coluna fixa, linha vai variar)
    int linha_vertical = 5;
    int coluna_vertical = 1;

    // Posiciona o navio vertical no tabuleiro
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linha_vertical + i][coluna_vertical] = navio_vertical[i];
    }

    // Exibe o tabuleiro no console
    printf("Tabuleiro de Batalha Naval:\n\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime cada posição da matriz
        }
        printf("\n"); // Nova linha ao final de cada linha do tabuleiro
    }

    return 0;
}
