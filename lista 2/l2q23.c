#include <stdio.h>

int main() {
    int a = 5, b = 5;
    printf("Valor inicial: a = %d, b = %d\n", a, b);
    printf("Resultado de --a: %d\n", --a);
    printf("Agora a = %d\n", a);
    printf("Resultado de b--: %d\n", b--); 
    printf("Agora b = %d\n", b);

    return 0;
}