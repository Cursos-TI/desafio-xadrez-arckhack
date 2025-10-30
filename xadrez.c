#include <stdio.h>

int main() {
    // ==============================
    // Simulação de movimentos no xadrez
    // Peças: Torre, Bispo e Rainha
    // ==============================

    // ----------- TORRE -----------
    // A Torre se move em linha reta (horizontal ou vertical)
    // Vamos simular 5 casas para a DIREITA usando o laço FOR

    int i; // variável de controle
    int casasTorre = 5;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n"); // linha em branco para separar as saídas

    // ----------- BISPO -----------
    // O Bispo se move na diagonal.
    // Vamos simular 5 casas na diagonal para CIMA e DIREITA
    // Usando o laço WHILE

    int casasBispo = 5;
    int j = 1;

    printf("Movimento do Bispo:\n");
    while (j <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", j);
        j++;
    }

    printf("\n");

    // ----------- RAINHA -----------
    // A Rainha pode se mover em todas as direções.
    // Vamos simular 8 casas para a ESQUERDA
    // Usando o laço DO-WHILE

    int casasRainha = 8;
    int k = 1;

    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda (%d casa)\n", k);
        k++;
    } while (k <= casasRainha);

    printf("\nSimulação concluída!\n");

    return 0;
}
