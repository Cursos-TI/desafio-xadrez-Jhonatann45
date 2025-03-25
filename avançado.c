#include <stdio.h>

// Função recursiva para mover a Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas == 0) {
        return; //
    }
    printf("Direita\n");
    moverTorre(casas - 1); 
}

// Função recursiva para mover o Bispo (5 casas na diagonal direita-cima)
void moverBispo(int casas) {
    if (casas == 0) {
        return; 
    }
    printf("Cima Direita\n");
    moverBispo(casas - 1); 
}

// Função recursiva para mover a Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas == 0) {
        return; 
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); 
}

// Função recursiva para mover o Cavalo (movimento em L: 2 casas para cima e 1 para a direita)
void moverCavalo(int verticais, int horizontais) {
    if (verticais == 0) {
        return; 
    }
    if (horizontais == 0) {
        
        printf("Direita\n");
        moverCavalo(verticais - 1, 1); 
    } else {
        
        printf("Cima\n");
        moverCavalo(verticais, horizontais - 1); 
    }
}

int main() {
    // Movimentação da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal direita-cima)
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimentação do Cavalo (movimento em L: 2 casas para cima e 1 para a direita)
    printf("Movimento do Cavalo:\n");
    moverCavalo(2, 1);
    printf("\n");

    return 0;
}
