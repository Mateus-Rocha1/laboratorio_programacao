#include <stdio.h>
#define TAM 100 
int main() {
    char str[TAM], c;
    int encontrado = 0;
    printf("Digite uma string (máximo %d caracteres): ", TAM - 1);
    fgets(str, TAM, stdin);
    printf("Digite um caractere para buscar: ");
    scanf("%c", &c);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            encontrado = 1;
            break;  
        }
    }
    if (encontrado==1) {
        printf("A string contém o caractere '%c'.\n", c);
    } else {
        printf("A string não contém o caractere '%c'.\n", c);
    }
    return 0;
}