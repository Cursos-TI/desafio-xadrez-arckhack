#include <stdio.h>

// ===============================
// Funções recursivas
// ===============================

// --- Função recursiva da TORRE ---
// Move-se horizontalmente (5 casas para a direita)
void moverTorre(int casa, int totalCasas) {
    if (casa > totalCasas) {
        return; // caso base: terminou o movimento
    }
    printf("Direita (%d casa)\n", casa);
    moverTorre(casa + 1, totalCasas); // chamada recursiva
}

// --- Função recursiva da RAINHA ---
// Move-se horizontalmente (8 casas para a esquerda)
void moverRainha(int casa, int totalCasas) {
    if (casa > totalCasas) {
        return; // caso base
    }
    printf("Esquerda (%d casa)\n", casa);
    moverRainha(casa + 1, totalCasas);
}

// --- Função recursiva da BISPO ---
// Move-se na diagonal (5 casas para cima e direita)
// Inclui loops aninhados para representar direções verticais e horizontais
void moverBispo(int casa, int totalCasas) {
    if (casa > totalCasas) {
        return; // caso base
    }

    // Loop externo: movimento vertical
    for (int v = 1; v <= 1; v++) { // uma direção vertical por vez
        // Loop interno: movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Cima, Direita (%d casa)\n", casa);
        }
    }

    moverBispo(casa + 1, totalCasas); // chamada recursiva
}

// ===============================
// Movimento complexo do CAVALO
// ===============================

// O Cavalo se move em "L" (duas casas para cima, uma para a direita)
// Usamos loops aninhados e controle de fluxo (continue e break)
void moverCavalo() {
    int movCima = 2;
    int movDireita = 1;

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= movCima; i++) { // duas casas para cima
        if (i == 2) {
            // Antes de imprimir a última casa para cima, mostrar o desvio
            printf("Cima (%d casa)\n", i);
            continue; // ignora o resto do laço e continua
        }
        printf("Cima (%d casa)\n", i);
    }

    // Segundo loop: movimento lateral
    for (int j = 1; j <= movDireita; j++) {
        if (j > movDireita) {
            break; // condição extra, só por demonstração de controle de fluxo
        }
        printf("Direita (%d casa)\n", j);
    }

    printf("\nMovimento completo do Cavalo em 'L': 2 casas para cima e 1 para a direita.\n");
}

// ===============================
// Função principal
// ===============================
int main() {
    printf("=== Simulação de Movimentos no Xadrez ===\n\n");

    // ----------- TORRE -----------
    printf("Movimento da Torre:\n");
    moverTorre(1, 5); // 5 casas para a direita
    printf("\n");

    // ----------- BISPO -----------
    printf("Movimento do Bispo:\n");
    moverBispo(1, 5); // 5 casas na diagonal (cima + direita)
    printf("\n");

    // ----------- RAINHA -----------
    printf("Movimento da Rainha:\n");
    moverRainha(1, 8); // 8 casas para a esquerda
    printf("\n");

    // ----------- CAVALO -----------
    moverCavalo();

    printf("\nSimulação concluída!\n");

    return 0;
}
