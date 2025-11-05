#include <stdio.h>
#include <string.h>
#define TAM1 100
int main(){
    int i;
    char str1[TAM1],str2[TAM1];
    puts("insira a primeira string:");
    fgets(str1,TAM1,stdin);
    puts("insira a segunda string:");
    fgets(str2,TAM1,stdin);
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]=='\n'){
            str1[i] = '\0'; 
            break;
        }
    }
    for(int j=0;str2[j]!='\0';j++){
        if(str2[i]=='\n'){
            str2[i] = '\0';
            break;
        }
    }
    strcat(str1,str2);
    printf("a junção dessas duas strings é %s",str1);
    return 0;
}
//strcat concatenea a seggund ana primeira string e a primeira string passa a ser a junção das duas