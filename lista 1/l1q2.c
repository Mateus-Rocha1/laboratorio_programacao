#include <stdio.h>
int main() {
    float X;
    puts("Escreva um valor real: ");
    scanf("%f", &X);
    printf("Valor com uma casa decimal: %.1f\n", X);
    return 0;
}