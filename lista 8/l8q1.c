#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fp;
    char nome[50], email[50];
    int idade;
    fp = fopen("usuarios.csv", "a");
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
    printf("Digite o nome: ");
    scanf(" %[^\n]", nome);
    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite o email: ");
    scanf(" %[^\n]", email);
    fprintf(fp, "%s,%d,%s\n", nome, idade, email);
    fclose(fp); 
    printf("Dados gravados em usuarios.csv!\n");
    return 0;
}
