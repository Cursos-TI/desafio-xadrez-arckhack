#include <stdio.h>

int main() {
    // ==============================
    // Simulação de movimentos no xadrez
    // Peças: Torre, Bispo, Rainha e Cavalo
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

    printf("\n");

    // ----------- CAVALO -----------
    // O Cavalo se move em "L": duas casas em uma direção
    // e depois uma casa perpendicularmente.
    // Vamos simular DUAS casas para BAIXO e UMA casa para a ESQUERDA.
    // Aqui usaremos loops aninhados (um FOR e um WHILE).

    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    printf("Movimento do Cavalo:\n");

    // Primeiro loop (FOR): movimenta o cavalo duas casas para BAIXO
    for (int m = 1; m <= movimentosBaixo; m++) {
        printf("Baixo (%d casa)\n", m);
    }

    // Segundo loop (WHILE): movimenta o cavalo uma casa para a ESQUERDA
    int n = 1;
    while (n <= movimentosEsquerda) {
        printf("Esquerda (%d casa)\n", n);
        n++;
    }

    printf("\n");

    // OU: usar os dois loops realmente *aninhados*, simulando a ideia de "L"
    // (duas casas em uma direção dentro de um movimento total do cavalo)
    printf("Movimento detalhado do Cavalo (loops aninhados):\n");

    // Loop externo representa cada movimento em "L" (aqui só 1 vez)
    for (int l = 1; l <= 1; l++) {
        // Loop interno (WHILE) representa duas casas para baixo
        int p = 1;
        while (p <= movimentosBaixo) {
            printf("Baixo (%d casa)\n", p);
            p++;
        }
        // Depois do movimento vertical, faz uma casa para a esquerda
        printf("Esquerda (1 casa)\n");
    }

    printf("\nSimulação concluída!\n");

    return 0;
}
