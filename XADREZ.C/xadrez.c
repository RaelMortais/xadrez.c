#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a Direita
    // Usando estrutura de repetição FOR
    int i;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal (Cima Direita)
    // Usando estrutura de repetição WHILE
    int j = 1;
    printf("Movimento do Bispo (5 casas na diagonal Cima Direita):\n");
    while (j <= 5) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // Movimento da Rainha - 8 casas para a Esquerda
    // Usando estrutura de repetição DO-WHILE
    int k = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    return 0;
}
// Não consigo fazer sozinho, mas espero que isso ajude a entender os movimentos das peças.