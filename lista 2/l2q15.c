#include <stdio.h>
int main(){
    int pot;
    for(int i=0;i<=7;i++){
        pot=1;
        for(int a = 1;a<=i;a++){
            pot=pot*3;
        }
        printf("o resultado da potencia de base 3 e expoente %d é %d\n",i,pot);
    }
    return 0;
}