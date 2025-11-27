#include <stdio.h>
#define TAM 200
int main(){
    char str[TAM],x;
    char *p,*px=&x;
    int flag=1;
    puts("escreva uma string:");
    fgets(str,TAM,stdin);
    puts("escolha um caractere:");
    scanf(" %c",px);
    for(p=str;*p!='\0';p++){
        if(*p==*px){
            printf("o caractere foi encontrado na posição %ld\n",p-str);
            flag = 0;
        }
    }   
    if(flag ==1){
        puts("caractere nao encontrado");
    }
    return 0;
}
