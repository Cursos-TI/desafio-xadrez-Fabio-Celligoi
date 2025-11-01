#include <stdio.h>
#include <stdlib.h>

// Define as peças do jogo
typedef enum {
    BISPO,
    TORRE,
    RAINHA
} peca;

// Função para movimentar o Bispo
void movimentarBispo(int direcao) {
    switch (direcao) {
        case 1:
            printf("Movendo o Bispo 5 casas na diagonal superior direita\n");
            break;
        case 2:
            printf("Movendo o Bispo 5 casas na diagonal superior esquerda\n");
            break;
        case 3:
            printf("Movendo o Bispo 5 casas na diagonal inferior direita\n");
            break;
        case 4:
            printf("Movendo o Bispo 5 casas na diagonal inferior esquerda\n");
            break;
        default:
            printf("Direção inválida\n");
    }
}

// Função para movimentar a Torre
void movimentarTorre(int direcao) {
    switch (direcao) {
        case 1:
            printf("Movendo a Torre 5 casas para a direita\n");
            break;
        case 2:
            printf("Movendo a Torre 5 casas para a esquerda\n");
            break;
        case 3:
            printf("Movendo a Torre 5 casas para cima\n");
            break;
        case 4:
            printf("Movendo a Torre 5 casas para baixo\n");
            break;
        default:
            printf("Direção inválida\n");
    }
}

// Função para movimentar a Rainha
void movimentarRainha(int direcao) {
    switch (direcao) {
        case 1:
            printf("Movendo a Rainha 8 casas para a esquerda\n");
            break;
        case 2:
            printf("Movendo a Rainha 8 casas para a direita\n");
            break;
        case 3:
            printf("Movendo a Rainha 8 casas para cima\n");
            break;
        case 4:
            printf("Movendo a Rainha 8 casas para baixo\n");
            break;
        default:
            printf("Direção inválida\n");
    }
}

// Função principal
int main() {
    int opcao;
    peca pecaEscolhida;
    int direcao;

    printf("Escolha a peça:\n");
    printf("1 - Bispo\n");
    printf("2 - Torre\n");
    printf("3 - Rainha\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            pecaEscolhida = BISPO;
            break;
        case 2:
            pecaEscolhida = TORRE;
            break;
        case 3:
            pecaEscolhida = RAINHA;
            break;
        default:
            printf("Opção inválida\n");
            return 1;
    }

    printf("Escolha a direção:\n");
    if (pecaEscolhida == BISPO) {
        printf("1 - Diagonal superior direita\n");
        printf("2 - Diagonal superior esquerda\n");
        printf("3 - Diagonal inferior direita\n");
        printf("4 - Diagonal inferior esquerda\n");
    } else if (pecaEscolhida == TORRE) {
        printf("1 - Direita\n");
        printf("2 - Esquerda\n");
        printf("3 - Cima\n");
        printf("4 - Baixo\n");
    } else if (pecaEscolhida == RAINHA) {
        printf("1 - Esquerda\n");
        printf("2 - Direita\n");
        printf("3 - Cima\n");
        printf("4 - Baixo\n");
    }
    scanf("%d", &direcao);

    switch (pecaEscolhida) {
        case BISPO:
            movimentarBispo(direcao);
            break;
        case TORRE:
            movimentarTorre(direcao);
            break;
        case RAINHA:
            movimentarRainha(direcao);
            break;
    }

    return 0;
}
