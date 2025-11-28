

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 4
void popularMatrizes(int *,int *,int );
void imprimirMatriz(int *);
int main(){
   srand(time(NULL));
   int limiar;
   puts("escolha um limiar para binarizar a matriz:");
   scanf("%d",&limiar);
   int matriz[TAM][TAM],s[TAM][TAM];
   int *p,*pS;
   p = (int *)matriz;
   pS= (int *)s;
   popularMatrizes(p,pS,limiar);
   puts("matriz original:\n");
   imprimirMatriz(p);
   puts("matriz binarizada:\n");
   imprimirMatriz(pS);
   return 0;
}
void popularMatrizes(int *p,int *pS,int limiar){
   for(int i=0;i<TAM;i++){
       for(int j=0;j<TAM;j++){
           *(p+(i*TAM + j)) = rand() % 10;
           if(*(p+(i*TAM + j)) > limiar){
               *(pS+(i*TAM +j)) = 1;
           }else{
               *(pS+(i*TAM +j)) = 0;
           }
       }
   }
}
void imprimirMatriz(int *p){
  for (int i = 0; i < TAM; i++) {
      for (int j = 0; j < TAM; j++) {
          printf("%d ", *(p+(TAM*i +j)));
      }
      printf("\n");
  }


}

