#include <stdio.h>

int main() {
    // -------------------------------
    // Movimento da Torre (for)
    // -------------------------------
    int casasTorre = 5;  // Número de casas que a Torre irá se mover
    printf("Movimento da Torre:\n");
    for(int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");  // Torre move-se horizontalmente
    }

    printf("\n");

    // -------------------------------
    // Movimento do Bispo (while)
    // -------------------------------
    int casasBispo = 5;  // Número de casas que o Bispo irá se mover
    int cont = 1;        // Contador para while
    printf("Movimento do Bispo:\n");
    while(cont <= casasBispo) {
        printf("Cima, Direita\n");  // Bispo move-se diagonal para cima e à direita
        cont++;
    }

    printf("\n");

    // -------------------------------
    // Movimento da Rainha (do-while)
    // -------------------------------
    int casasRainha = 8; // Número de casas que a Rainha irá se mover
    int passo = 1;       // Contador para do-while
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");  // Rainha move-se para a esquerda
        passo++;
    } while(passo <= casasRainha);

    return 0;
}
