#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float calcularErroQuadratico(int *,int *,int);
int main(){
  srand(time(NULL));
  int *pA,*pB,tamanho;
  puts("insira o tamanho dos vetores:");
  scanf("%d",&tamanho);
  pA = malloc(tamanho * sizeof(int));
  pB = malloc(tamanho * sizeof(int));
  for(int i=0;i<tamanho;i++){
      *(pA+i) = rand() % 100;
      *(pB+i) = rand() % 100;
  }
  float resultado =calcularErroQuadratico(pA,pB,tamanho);
  printf("a media quadratica dos vetores é %.1f\n",resultado);
}
float calcularErroQuadratico(int *pa,int *pb,int tamanho){
   int soma = 0;
   for(int i=0;i<tamanho;i++){
      *(pa+i) = rand() % 100;
      *(pb+i) = rand() % 100;
       soma += (*(pa+i) - *(pb+i)) * (*(pa+i) - *(pb+i));
  }
  float resultado;
  return resultado = (float)(soma)/tamanho;
}


