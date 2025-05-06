#include <stdio.h>  

int main() {
    
    int torre = 0;
    int bispo;
    int rainha = 0;
    int cavalo = 1;

    printf("*** Vamos movimentar seu BISPO! *** \n");
    // Aqui fazemos os movimentos requeridos do BISPO.
    // Utilizamos o for pra fazer os movimentos diagonais
        for(int bispo = 0; bispo < 5 ; bispo++){
        printf("Cima,Direita... \n");
    }

    printf("\n");
    printf("\n");

    printf("*** Vamos movimentar  sua torre! *** \n");
    // Aqui fazemos os movimentos requeridos do bispo, 
    // 5 posições diagonais pra direia.

    do {
        printf("Direita... \n");
        torre++;
    } while (torre < 5);

    printf("\n");
    printf("\n");

    printf("*** Vamos movimentar sua RAINHA! *** \n");
    while (rainha < 8) {
        printf("Esquerda... \n");
        rainha++;
    }
    printf("\n");
    printf("\n");

    printf("*** Vamos movimentar seu CAVALO! *** \n");
    // Aqui fazemos os movimentos requeridos do cavalo,
    // A atividade pediu dois movimentos pra baixo e uma pra esquerda.
    while(cavalo --){
        for (int i = 0; i < 2; i++){
            printf("Baixo... \n");
            // Imprime o movimento "Baixo" duas vezes, visto que a movimentação de "I" começa em 0. 
        }
        printf("Esquerda... \n");
        // Imprime o movimento "Esquerda" uma vez, visto que a variavel "Cavalo" começa em 1 e é decrescente.
    }



    return 0;
}