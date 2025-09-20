#include <stdio.h>

int main() {
    int i;
    int palpite_certo = 25; 
    do {
        printf("Digite um palpite de 1 a 50: ");
        scanf("%d", &i);

        if (i == palpite_certo) {
            printf("Parabéns! Você acertou!\n");
        } else {
            printf("Você errou! Tente novamente.\n");
        }

    } while (i != palpite_certo); 

    return 0;
}
