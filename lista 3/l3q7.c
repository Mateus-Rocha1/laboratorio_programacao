#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define TAM 3
int main() {
    int vetor[TAM];
    srand(time(NULL));
    for(int i = 0; i < TAM; i++) {
        vetor[i] = rand() % 20;
        printf("O valor que está na posição %d é %d\n", i, vetor[i]);
    }
    double mediaAritmetica = (vetor[0] + vetor[1] + vetor[2]) / 3.0;
    double produto = vetor[0] * vetor[1] * vetor[2];
    double mediaGeometrica = pow(produto, 1.0 / 3);  
    printf("A média aritmética é %.1f\n", mediaAritmetica);
    printf("A média geométrica é %.1f\n", mediaGeometrica);
    return 0;
}