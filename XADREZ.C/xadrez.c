#include <stdio.h>

// Função recursiva para o movimento da Torre para a Direita
void movimentoTorre(int casas, int cont) {
    if (cont > casas) return;
    printf("Direita\n");
    movimentoTorre(casas, cont + 1);
}

// Função recursiva para o movimento do Bispo (Diagonal Cima Direita)
void movimentoBispo(int casas, int cont) {
    if (cont > casas) return;
    printf("Cima Direita\n");
    movimentoBispo(casas, cont + 1);
}

// Função recursiva para o movimento da Rainha (Movimento combinado da Torre e Bispo)
void movimentoRainha(int casas, int cont, int direcao) {
    if (cont > casas) return;
    if (direcao == 1) {
        // Movimento da Torre (Esquerda)
        printf("Esquerda\n");
    } else {
        // Movimento do Bispo (Diagonal Cima Direita)
        printf("Cima Direita\n");
    }
    movimentoRainha(casas, cont + 1, direcao);
}

// Função para o movimento do Cavalo em "L" (2 casas para cima e 1 para a direita)
void movimentoCavalo(int casas) {
    int i, j;
    for (i = 1; i <= casas; i++) {
        for (j = 1; j <= 1; j++) {
            // Cavalo vai 2 casas para cima e 1 para a direita
            printf("Cima\n");
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre - 5 casas para a Direita
    printf("Movimento da Torre (5 casas para a Direita):\n");
    movimentoTorre(5, 1);  // Chamada recursiva para a Torre
    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal (Cima Direita)
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    movimentoBispo(5, 1);  // Chamada recursiva para o Bispo
    printf("\n");

    // Movimento da Rainha - 8 casas para a Esquerda (e depois em Diagonal)
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    movimentoRainha(8, 1, 1);  // Chamada recursiva para a Rainha (movimento para a esquerda)
    printf("\n");

    // Movimento do Cavalo - 3 movimentos em "L"
    printf("Movimento do Cavalo (3 movimentos em L):\n");
    movimentoCavalo(3);  // Movimento do Cavalo em "L"
    printf("\n");

    return 0;
}

// Não consigo fazer sozinho, mas espero que isso ajude a entender os movimentos das peças.