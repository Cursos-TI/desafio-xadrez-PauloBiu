#include <stdio.h>

// Definição de constantes para facilitar a leitura e manutenção do código
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {
    // Variáveis para armazenar a direção de movimento das peças
    int i;

    // Movimentos das peças - Bispo, Torre e Rainha
    printf("Movimentos do Bispo:\n");
    // Bispo se move na diagonal superior direita (5 casas)
    for (i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\nMovimentos da Torre:\n");
    // Torre se move para a direita (5 casas)
    for (i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    printf("\nMovimentos da Rainha:\n");
    // Rainha se move para a esquerda (8 casas)
    for (i = 0; i < MOVIMENTO_RAINHA; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
