#include <stdio.h>

// Desafio: Nível Aventureiro - Batalha Naval

int main() {

    // Criando o tabuleiro 10x10
    int tabuleiro[10][10];

    // Inicializando o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Tamanho dos navios (3 posições)
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navioDiagonal1[3] = {3, 3, 3};
    int navioDiagonal2[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios horizontais/verticais
    int linhaH = 1;  
    int colunaH = 2; 

    int linhaV = 5;  
    int colunaV = 4; 

    // Coordenadas iniciais dos navios diagonais
    int linhaD1 = 2;
    int colunaD1 = 2;

    int linhaD2 = 7;
    int colunaD2 = 5;

    // Validação simples e posicionamento do navio horizontal
    if (colunaH + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaH][colunaH + i] == 0) {
                tabuleiro[linhaH][colunaH + i] = navio1[i];
            }
        }
    }

    // Validação simples e posicionamento do navio vertical
    if (linhaV + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaV + i][colunaV] == 0) {
                tabuleiro[linhaV + i][colunaV] = navio2[i];
            }
        }
    }

    // Validação e posicionamento do navio diagonal principal (↘)
    if (linhaD1 + 3 <= 10 && colunaD1 + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaD1 + i][colunaD1 + i] == 0) {
                tabuleiro[linhaD1 + i][colunaD1 + i] = navioDiagonal1[i];
            }
        }
    }

    // Validação e posicionamento do navio diagonal secundária (↗)
    if (linhaD2 - 2 >= 0 && colunaD2 + 3 <= 10) {
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaD2 - i][colunaD2 + i] == 0) {
                tabuleiro[linhaD2 - i][colunaD2 + i] = navioDiagonal2[i];
            }
        }
    }

    // Exibindo o tabuleiro completo
    printf("Tabuleiro:\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
