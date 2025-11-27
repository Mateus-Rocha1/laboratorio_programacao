#include <stdio.h>
#define TAM1 100
#define TAM2 200
int main(){
    int i;
    char str1[TAM1],str2[TAM1];
    char str3[TAM2];
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
    for(i=0;str1[i] !='\0';i++){
        str3[i] =str1[i];
    }
    for(int j=0;str2[j] !='\0';j++,i++){
        str3[i] = str2[j];
    }
    printf("a junção dessas duas strings é %s",str3);

    return 0;
}
