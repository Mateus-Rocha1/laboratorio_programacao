#include <stdio.h>
int main(){
    int x,maior=0;
    int *px=&x;
    do{
        puts("insira um numero:[numeros negativos encerram o programa]");
        scanf("%d",px);
        if(*px>maior){
            maior=*px;
        }
        printf("o maior numero inserido ate agr foi %d\n",maior);
    }while(*px>0);
    return 0;
}