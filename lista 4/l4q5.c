#include <stdio.h>
#define TAM 200
int main(){
    int contador;
    char str[TAM];
    char *p;
    puts("escreva uma string:");
    fgets(str,TAM,stdin);
    for(p=str;*p!='\0';p++){
        if(*p=='\n'){
            *p='\0';
        }
    }
    for(p=str;*p!='\0';p++){
        contador++;
    }
    printf("o tamanho da string definida é %d\n",contador);
    return 0;
}
