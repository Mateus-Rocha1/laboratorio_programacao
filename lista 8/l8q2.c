#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARQUIVO "hardware.dat"
#define MAX_REGISTROS 100
typedef struct {
    int id;
    char nome[30];
    int quantidade;
    float custo;
} Ferramenta;
void inicializarArquivo();
void inserirFerramenta();
void listarFerramentas();
void excluirFerramenta();
void atualizarFerramenta();
int main() {
    int opcao;
    do {
        printf("\n===== MENU =====\n");
        printf("1 - Inicializar arquivo\n");
        printf("2 - Inserir ferramenta\n");
        printf("3 - Listar ferramentas\n");
        printf("4 - Excluir ferramenta\n");
        printf("5 - Atualizar ferramenta\n");
        printf("6 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        switch(opcao) {
            case 1: inicializarArquivo(); break;
            case 2: inserirFerramenta(); break;
            case 3: listarFerramentas(); break;
            case 4: excluirFerramenta(); break;
            case 5: atualizarFerramenta(); break;
            case 6: printf("Encerrando...\n"); break;
            default: printf("Opção inválida!\n");
        }

    } while (opcao != 6);
    return 0;
}
void inicializarArquivo() {
    FILE *fp = fopen(ARQUIVO, "wb");
    if (!fp) {
        printf("Erro ao criar arquivo!\n");
        return;
    }
    Ferramenta vazio = {0, "", 0, 0.0};
    for (int i = 0; i < MAX_REGISTROS; i++) {
        fwrite(&vazio, sizeof(Ferramenta), 1, fp);
    }
    fclose(fp);
    printf("Arquivo inicializado com 100 registros vazios!\n");
}
void inserirFerramenta() {
    FILE *fp = fopen(ARQUIVO, "rb+");
    if (!fp) {
        printf("Arquivo não encontrado! Inicialize primeiro.\n");
        return;
    }
    int id;
    Ferramenta f;
    printf("Digite o número do registro (1 a 100): ");
    scanf("%d", &id);
    if (id < 1 || id > MAX_REGISTROS) {
        printf("ID inválido!\n");
        fclose(fp);
        return;
    }
    fseek(fp, (id - 1) * sizeof(Ferramenta), SEEK_SET);
    fread(&f, sizeof(Ferramenta), 1, fp);
    if (f.id != 0) {
        printf("Este registro já está ocupado!\n");
        fclose(fp);
        return;
    }
    f.id = id;
    printf("Nome da ferramenta: ");
    scanf(" %[^\n]", f.nome);
    printf("Quantidade: ");
    scanf("%d", &f.quantidade);
    printf("Custo: ");
    scanf("%f", &f.custo);
    fseek(fp, (id - 1) * sizeof(Ferramenta), SEEK_SET);
    fwrite(&f, sizeof(Ferramenta), 1, fp);
    fclose(fp);
    printf("Ferramenta inserida!\n");
}
void listarFerramentas() {
    FILE *fp = fopen(ARQUIVO, "rb");
    if (!fp) {
        printf("Arquivo não encontrado!\n");
        return;
    }
    Ferramenta f;
    printf("\n=== LISTA DE FERRAMENTAS ===\n");

    for (int i = 0; i < MAX_REGISTROS; i++) {
        fread(&f, sizeof(Ferramenta), 1, fp);
        if (f.id != 0) {
            printf("ID: %d | Nome: %s | Quantidade: %d | Custo: %.2f\n",
                   f.id, f.nome, f.quantidade, f.custo);
        }
    }

    fclose(fp);
}
void excluirFerramenta() {
    FILE *fp = fopen(ARQUIVO, "rb+");
    if (!fp) {
        printf("Arquivo não encontrado!\n");
        return;
    }
    int id;
    printf("Digite o ID da ferramenta para excluir: ");
    scanf("%d", &id);
    if (id < 1 || id > MAX_REGISTROS) {
        printf("ID inválido!\n");
        fclose(fp);
        return;
    }
    Ferramenta vazio = {0, "", 0, 0.0};
    fseek(fp, (id - 1) * sizeof(Ferramenta), SEEK_SET);
    fwrite(&vazio, sizeof(Ferramenta), 1, fp);
    fclose(fp);
    printf("Ferramenta excluída!\n");
}
void atualizarFerramenta() {
    FILE *fp = fopen(ARQUIVO, "rb+");
    if (!fp) {
        printf("Arquivo não encontrado!\n");
        return;
    }
    int id;
    Ferramenta f;
    printf("Digite o ID da ferramenta para atualizar: ");
    scanf("%d", &id);
    if (id < 1 || id > MAX_REGISTROS) {
        printf("ID inválido!\n");
        fclose(fp);
        return;
    }
    fseek(fp, (id - 1) * sizeof(Ferramenta), SEEK_SET);
    fread(&f, sizeof(Ferramenta), 1, fp);

    if (f.id == 0) {
        printf("Registro vazio! Nada para editar.\n");
        fclose(fp);
        return;
    }
    printf("Novo nome: ");
    scanf(" %[^\n]", f.nome);
    printf("Nova quantidade: ");
    scanf("%d", &f.quantidade);
    printf("Novo custo: ");
    scanf("%f", &f.custo);
    fseek(fp, (id - 1) * sizeof(Ferramenta), SEEK_SET);
    fwrite(&f, sizeof(Ferramenta), 1, fp);
    fclose(fp);
    printf("Ferramenta atualizada!\n");
}
