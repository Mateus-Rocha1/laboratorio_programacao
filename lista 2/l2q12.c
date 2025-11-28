#include<stdio.h>
int main(){
    int A;
    puts("quer a tabuada de qual numero inteiro?");
    scanf("%d",&A);
    printf("a tabuada do %d é:\n",A);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",A,i,A*i);
    }
    return 0;
}