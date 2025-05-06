#include <stdio.h>  

int main() {
    
    int torre = 0;
    int bispo;
    int rainha;
    printf("*** Vamos movimentar seu BISPO! *** \n");
    // Aqui fazemos os movimentos requeridos do BISPO.
    // Utilizamos o for pra fazer os movimentos diagonais
        for(int bispo = 0; bispo < 5 ; bispo++){
        printf("Movimentando seu BISPO pra DIAGONAL,Cima e Direita \n");
    }

    printf("\n");
    printf("\n");

    printf("*** Vamos movimentar  sua torre! *** \n");
    // Aqui fazemos os movimentos requeridos do bispo, 
    // 5 posições diagonais pra direia.

    do {
        printf("Movimentando sua TORRE pra direita... \n");
        torre++;
    } while (torre < 5);

    printf("\n");
    printf("\n");

    printf("*** Vamos movimentar sua RAINHA! *** \n");
    while (rainha < 8) {
        printf("Movimentando sua RAINHA pra esquerda... \n");
        rainha++;
    }
    printf("\n");
    printf("\n");
    return 0;
}