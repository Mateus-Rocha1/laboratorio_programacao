#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3
typedef struct Aluno{
    float n1;
    float n2;
    float media;
}Aluno;
float calcularMedia(Aluno *);
int main(){
    srand(time(NULL));
    Aluno aluno[3];
    Aluno *p;
    p = aluno;
    for(int i=0;i<TAM;i++){ 
        (p+i) -> n1= (float)(rand()%10);
        (p+i) -> n2 = (float)(rand()%10);
        (p+i) -> media = calcularMedia((p+i)); 
        printf("a média simples dessas notas é: %.1f\n",((p+i)->media));
    }
}
float calcularMedia(Aluno *p){
    return ((p ->n1)+ (p->n2))/2;
}