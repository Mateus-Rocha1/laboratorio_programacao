#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
void capturar(int *, int **);
int main() {
    srand(time(NULL));
    int vetor[TAM];
    int *p;
    for (p = vetor; p - vetor < TAM; p++) {
        *p = rand() % 20;
    }
    int *enderecos[2];
    capturar(vetor, enderecos);
    printf("primeiro par: %d no endereco %p\n", **(enderecos + 0), *(enderecos + 0));
    printf("ultimo par: %d no endereco %p\n", **(enderecos + 1), *(enderecos + 1));
    return 0;
}
void capturar(int *v, int **p) {
    int *q;
    for (q = v; q - v < TAM; q++) {
        if (!(*q % 2)) {
            *(p + 0) = q;
            break;
        }
    }
    for (q = v + TAM - 1; q >= v; q--) {
        if (!(*q % 2)) {
            *(p + 1) = q;
            break;
        }
    }
}