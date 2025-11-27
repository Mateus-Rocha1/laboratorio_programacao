#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define MX 100
float escolherFunção(int(*)(int *,int *),float (*)(int *,int *),int*,int*);
int erroMedioQuadratico(int *,int *);
float erroAbsolutoMedio(int *,int *);
int main(){
    srand(time(NULL));
    int A[N], B[N];
    int *pa,*pb;
    pa = A;
    pb = B;
    for(int i=0;i<N;i++){
        *(pa+i) = rand() % MX;
        *(pb+i) = rand() % MX;
    }
    int(*pEMQ)(int *,int *) = erroMedioQuadratico;
    float(*pEAM)(int *,int *) = erroAbsolutoMedio;
    float resultadoFinal = escolherFunção(pEMQ ,pEAM, pa,pb);
    printf("resultado: %.1f\n",resultadoFinal);
    return 0;
}
float escolherFunção(int(*pEMQ)(int *pa,int *pb),float (*pEAM)(int *pa,int *pb),int *pa,int *pb){
    puts("qual erro deseja calcular:\n");
    puts("Erro medio quadratico [1]");
    puts("Erro absoluto medio [2]");
    int escolha;
    scanf("%d",&escolha);
    switch(escolha){
        case 1: return (*pEMQ)(pa,pb);break;
        case 2: return (*pEAM)(pa,pb);break;
        default:puts("opção invalida \n encerrando programa");exit(1);break;
    }
}
int erroMedioQuadratico(int *pa,int *pb){
    int soma = 0;
    for (int i = 0;i<N;i++){
        soma += (*(pa+i) - *(pb+i)) * (*(pa+i) - *(pb+i));
    }
    int resultado = soma/N;
    return resultado;
}
float erroAbsolutoMedio(int *pa,int *pb){
    float soma = 0;
    for(int i = 0;i<N;i++){
        if(*(pa+i) > *(pb+i)){
            soma += *(pa+i) - *(pb+i);
        }else{
            soma += *(pb+i) - *(pa+i);
        }
    }
    float resultado=(float)(soma/N);
    return resultado;
}