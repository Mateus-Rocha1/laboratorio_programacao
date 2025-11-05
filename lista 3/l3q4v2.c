#include <stdio.h>
#include <string.h>
#define TAM 200
int main(){
    char str1[TAM],str2[TAM];
    puts("escreva a primeira string:");
    fgets(str1,TAM,stdin);
    puts("escreva a segunda string:");
    fgets(str2,TAM,stdin);
    if(strncmp(str1,str2,TAM) ==0){
        puts("as strings sao iguais");
    }else{
        puts("as strings sao diferentes");
    }
    return 0;
}
//fução strncmp tem q colocar o TAM no final e ela compara as strings,se for igual retorna 0