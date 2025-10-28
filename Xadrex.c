#include <stdio.h>

// -----------------------------------------------------
// Função recursiva para o movimento da Torre
// -----------------------------------------------------
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Caso base: nenhuma casa restante
    }
    printf("Direita\n");
    moverTorre(casasRestantes - 1); // Chamada recursiva
}

// -----------------------------------------------------
// Função recursiva com loops aninhados para o Bispo
// Loop externo = movimento vertical ("Cima")
// Loop interno = movimento horizontal ("Direita")
// -----------------------------------------------------
void moverBispo(int movimentoAtual, int movimentosTotais) {
    if (movimentoAtual > movimentosTotais) {
        return; // Caso base: terminou o movimento
    }

    // Loops aninhados representando o deslocamento diagonal
    for (int i = 0; i < 1; i++) { // Cima
        for (int j = 0; j < 1; j++) { // Direita
            printf("Cima, Direita\n");
        }
    }

    moverBispo(movimentoAtual + 1, movimentosTotais); // Chamada recursiva
}

// -----------------------------------------------------
// Função recursiva para o movimento da Rainha
// -----------------------------------------------------
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        return; // Caso base: terminou o movimento
    }
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); // Chamada recursiva
}

// -----------------------------------------------------
// Movimento complexo do Cavalo
// Agora o Cavalo se move em "L" (duas casas para cima e uma para a direita)
// Usando loops aninhados, múltiplas variáveis, e controle de fluxo
// -----------------------------------------------------
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int movimentoVertical = 0;
    int movimentoHorizontal = 0;

    // Loop externo controla o movimento vertical (2 casas para cima)
    for (int i = 1; i <= 3; i++) {
        // Se passar de 2 movimentos verticais, o Cavalo faz o movimento lateral
        if (i <= 2) {
            printf("Cima\n");
            movimentoVertical++;
        } else {
            // Loop interno controla o movimento lateral
            for (int j = 1; j <= 2; j++) {
                if (j == 1) {
                    printf("Direita\n");
                    movimentoHorizontal++;
                    break; // Sai do loop após o movimento em L
                } else {
                    continue; // Apenas demonstração do controle de fluxo
                }
            }
        }
    }

    printf("(O cavalo moveu %d casas para cima e %d casa para a direita)\n",
           movimentoVertical, movimentoHorizontal);
}

// -----------------------------------------------------
// Função principal - Mantém a estrutura original
// -----------------------------------------------------
int main() {
    // -------------------------------
    // Movimento da Torre (Recursivo)
    // -------------------------------
    int casasTorre = 5; // Número de casas que a Torre irá se mover
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre); // Recursão substitui o loop for

    printf("\n");

    // -------------------------------
    // Movimento do Bispo (Recursivo + Loops Aninhados)
    // -------------------------------
    int casasBispo = 5; // Número de casas que o Bispo irá se mover
    printf("Movimento do Bispo:\n");
    moverBispo(1, casasBispo); // Recursão com loops dentro

    printf("\n");

    // -------------------------------
    // Movimento da Rainha (Recursivo)
    // -------------------------------
    int casasRainha = 8; // Número de casas que a Rainha irá se mover
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha); // Recursão substitui o do-while

    printf("\n");

    // -------------------------------
    // Movimento do Cavalo (Loops complexos)
    // -------------------------------
    moverCavalo();

    return 0;
}
