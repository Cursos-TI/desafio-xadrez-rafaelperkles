#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

void moverBispo() {
    printf("Bispo se move %d casas na diagonal superior direita:\n", BISPO_MOV);
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Diagonal Direita - Movimento %d\n", i + 1);
    }
}

void moverTorre() {
    printf("Torre se move %d casas para a direita:\n", TORRE_MOV);
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita - Movimento %d\n", i + 1);
    }
}

void moverRainha() {
    printf("Rainha se move %d casas para a esquerda:\n", RAINHA_MOV);
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda - Movimento %d\n", i + 1);
    }
}

int main() {
    printf("Desafio de Xadrez - MateCheck\n");

    moverBispo();
    printf("\n");
    
    moverTorre();
    printf("\n");
    
    moverRainha();
    printf("\n");

    return 0;
}
