#include <stdio.h>
int main(){
    int t1=1,t2=1;
    int prox=0;
    printf("%d,%d,",t1,t2);
    for (int i = 0;i<=17;i++){
        prox = t1 + t2;
        t1 = t2;
        t2 = prox;
        printf("%d,",prox);   
    }
    return 0;
}