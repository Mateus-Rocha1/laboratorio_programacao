#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 4
int main(){
   srand(time(NULL));
   int matriz[TAM][TAM];
   int *p,soma =0;
   p = (int *)(matriz);
   for(int i =0;i<TAM;i++){
       for(int j=0;j<TAM;j++){
           *(p+(TAM*i +j)) = rand() % 10;
           if(i == j){
               soma += *(p +( (TAM*i) +j));
           }
       }
   }
   printf("Matriz gerada:\n");
   for (int i = 0; i < TAM; i++) {
       for (int j = 0; j < TAM; j++) {
           printf("%d ", *(p+(TAM*i +j)));
       }
       printf("\n");
   }
   if(soma%2 == 0){
       puts("o somatorio da diagonal principal é par");
   }else{
       puts("o somatorio da diagonal principal é ímpar");
   }
   return 0;
}



