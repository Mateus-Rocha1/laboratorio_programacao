#include <stdio.h>
int main(){
   int soma3 = 0,soma5 = 0;
   for(int i=0;i<=200;i++){
    if(i<=100){
        if(i%3==0){
            soma3 += i;
        }
    }else{
         if(i%5==0){
            soma5 += i;
        }
    }  
  }
  printf("o somatorio do divisiveis por 3 é %d e dos por 5 é %d",soma3,soma5);
  return 0;
}