#include <stdio.h>

int main() {
    int n, count = 0;
    puts("Digite um número inteiro:");
    scanf("%d", &n);
    if (n < 0) n = -n;
    while (n > 0) {
        int digito = n % 10;
        if ((digito ^ 7) == 0) { 
            count++;
        }
        n /= 10;
    }
    printf("O número possui %d dígitos iguais a 7.\n", count);
    return 0;
}