#include <stdio.h>
int main(){
    for(int i=15;i<=90;i++){
        if( i%4==0){
            printf("quadrado de %d é %d\n",i,(i*i));
        }
    }
    return 0;
}