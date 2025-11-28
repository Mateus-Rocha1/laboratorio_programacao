#include <stdio.h>

int main() {
    int n, absN;
    puts("Digite um valor inteiro:");
    scanf("%d", &n);
    int mask = n >> 31;      
    absN = (n + mask) ^ mask;
    printf("O valor absoluto de %d é %d\n", n, absN);
    return 0;
}

