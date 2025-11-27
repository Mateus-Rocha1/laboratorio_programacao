#include <stdio.h>
#define TAM 200
int main(){
    char str1[TAM],str2[TAM];
    char *p1,*p2;
    puts("escreva uma string:");
    fgets(str1,TAM,stdin);
    p1=str1;
    p2=str2;
    while(*p1!='\0'){
        *p2 = *p1;
        p1++;
        p2++;
    }
    printf("a string copiada é %s",str2);
    return 0;
}
