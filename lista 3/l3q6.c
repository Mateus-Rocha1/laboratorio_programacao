#define TAM 200
#include <stdio.h>
int main(){
    int i,j;
    char str[TAM],str1[TAM];
    puts("escreva a string");
    fgets(str,TAM,stdin);
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i] = '\0';
            break;
        }
    }
    for(i=0;str[i]!='\0';i++){
        str1[i] =str[i];
    }
    for(i=0;str1[i]!='\0';i++);
    i--;

    for(j =0;i>=0;i--,j++){
        str[j] = str1[i];
    }
    str[j] = '\0';
    printf("a string invertida fica %s\n",str);
    return 0;
}
//fazer um laço sem nada{} pra contar quantos caracteres tem a string decrementar[i--] pra tirar a quebra de linha
//laço pra inverter a string = pegar a segunda string,enqt uma sobre outra desce o indice
//nao inicializar varias variaveis locais