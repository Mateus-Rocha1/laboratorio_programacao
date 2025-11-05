#include <stdio.h>
#define TAM 200
int main(){
    int flag=1;
    char str1[TAM],str2[TAM];
    puts("escreva a primeira string:");
    fgets(str1,TAM,stdin);
    puts("escreva a segunda string:");
    fgets(str2,TAM,stdin);
    for(int i=0;str1[i] !='\0'&& str2[i] !='\0';i++){
        if(str1[i]!=str2[i]){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        puts("as strings sao iguais");
    }else{
        puts("as strings sao diferentes");
    }
    return 0;
}
//usar uma flag pra armazenar o resultado
//comparar termo a termo da string por meio do laço for