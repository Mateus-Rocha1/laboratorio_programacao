#include <stdio.h>
#include <stdlib.h>
typedef struct Aluno{
    float n1;
    float n2;
    float media;
}Aluno;
int main(int argc , char **argv){
    if(argc != 3){
        printf("uso correto: %.s <nota 1> <nota 2>",argv[0]);
        exit(1);
    }
    Aluno aluno;
    aluno.n1 = atof(argv[1]);
    aluno.n2 = atof(argv[2]);
    aluno.media = (aluno.n1 + aluno.n2)/2;
    printf("a média simples dessas notas é: %.1f\n",aluno.media);
}