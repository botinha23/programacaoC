#include <stdio.h>

void imprimirCone() {
    printf("Cone:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j >= 5 - i && j <= 4 + i && i <= 4)  // Parte superior do cone
                printf("1");
            else if (i > 4)                         // Parte inferior preenchida (base)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}

void imprimirCruz() {
    printf("\nCruz:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 4 || j == 4)  // Linha central horizontal e vertical
                printf("2");
            else
                printf("0");
        }
        printf("\n");
    }
}

void imprimirOctaedro() {
    printf("\nOctaedro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if ((i + j >= 4 && i + j <= 12) && (i - j <= 4 && j - i <= 4))  // Condições para formar um losango
                printf("3");
            else
                printf("0");
        }
        printf("\n");
    }
}

int main() {
    imprimirCone();
    imprimirCruz();
    imprimirOctaedro();
    return 0;
}