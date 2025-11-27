#include <stdio.h>
#include <string.h>
typedef struct Professor{
    char nome[50];
    int idade;
    float salario;
}Professor;
typedef struct Disciplina{
    Professor daniel;
    char nome[50];
    int quantidadeHoras;
}Disciplina;
int main(){
    Disciplina disciplina;
    strcpy(disciplina.nome , "laboratorio de programação");
    disciplina.quantidadeHoras = 72;
    strcpy(disciplina.daniel.nome , "Daniel");
    disciplina.daniel.idade = 20;
    disciplina.daniel.salario = 40503.78;
    printf("nome da disciplina: %s\n quantidade de horas: %d\n nome do professor: %s\n idade: %d\n salario: %f\n ",disciplina.nome,disciplina.quantidadeHoras,disciplina.daniel.nome,disciplina.daniel.idade,disciplina.daniel.salario);
}