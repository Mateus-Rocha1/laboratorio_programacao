#include <stdio.h>
#define TAM 200
int main(){
    int contador = 0;
    char str[TAM];
    printf("digite uma strig:(maximo %d caracteres)",(TAM-1));
    fgets(str ,TAM,stdin);
    for(int i=0;str[i] != '\0';i++){
        contador ++;
    }
    printf("essa string possui %d caracteres",contador-1);
    return 0;
}