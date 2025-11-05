#include <stdio.h>
#define TAM 100
#define TAM2 200
int main(){
    char str1[TAM],str2[TAM],str3[TAM2];
    char *p1,*p2,*p3;
    puts("insira a primeira string:");
    fgets(str1,TAM,stdin);
    puts("insira a segunda string");
    fgets(str2,TAM,stdin);
    for(int i =0;i<TAM;i++){
        if(str1[i]=='\n'){
            str1[i] = '\0';
        }
    }
    p1 = str1;
    p2 = str2;
    p3 = str3;
    while(*p1!='\0'){
        *p3 = *p1;
        p1++;
        p3++;
    }
    while(*p2!='\0'){
        *p3 = *p2;
        p3++;
        p2++;
    }
    printf("a junção das duas strings é %s",str3);
    return 0;
}