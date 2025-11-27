#include <stdio.h>
#include <stdlib.h>
#define TAM 2
#define MAX 50

typedef struct Estoque {
    char **peca;
    int *numeroPeca;
    float *precoPeca;
    int *numeroPedido;
} Estoque;

void mostrarDados(Estoque estoque, int posicao);

int main() {
    Estoque estoque;

    estoque.peca = malloc(TAM * sizeof(char *));
    estoque.numeroPeca = malloc(TAM * sizeof(int));
    estoque.precoPeca = malloc(TAM * sizeof(float));
    estoque.numeroPedido = malloc(TAM * sizeof(int));

    for (int i = 0; i < TAM; i++) {
        estoque.peca[i] = malloc(MAX * sizeof(char));
    }

    puts("Registre dados de pedidos do estoque:\n");

    for (int i = 0; i < TAM; i++) {
        *(estoque.numeroPedido + i) = i + 1;

        printf("\nPedido número %d:\n", *(estoque.numeroPedido + i));

        printf("Nome da peça: ");
        scanf("%49s", *(estoque.peca+i));

        printf("Número da peça: ");
        scanf("%d", estoque.numeroPeca + i);

        printf("Preço da peça: ");
        scanf("%f", estoque.precoPeca + i);
    }

    int posicao;
    puts("\nDeseja ver os dados de qual item do estoque? [1 ou 2]");
    scanf("%d", &posicao);

    posicao--;

    if (posicao < 0 || posicao >= TAM) {
        puts("Posição inválida!");
        return 1;
    }

    mostrarDados(estoque, posicao);

    return 0;
}

void mostrarDados(Estoque estoque, int posicao) {
    puts("\n-----------------------------");
    printf("Número do pedido: %d\n", *(estoque.numeroPedido + posicao));
    printf("Nome da peça: %s\n", *(estoque.peca+posicao));
    printf("Número da peça: %d\n", *(estoque.numeroPeca + posicao));
    printf("Preço da peça: %.2f\n", *(estoque.precoPeca + posicao));
    puts("-----------------------------\n");
}
