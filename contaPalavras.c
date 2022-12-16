/*
Arquivo: contaPalavras.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 10/12/2022
*/
#include <stdio.h>
#include <string.h>
#define N 606

int getstr(char * str, int nchar);
void counter(char * str, int nchar);

int main(void){
    char txt[N];
    printf("Digite seu texto: ");
    for(int i=0;i<N;i++){
        txt[i]='\0';
    }
    int v=getstr(txt,N);
    counter(txt,v);
    return 0;
}

int getstr(char * str, int nchar) {
    char c;  int i;
    int j=0;
    for(i = 0; i < nchar; i++) {
        c = getchar();
        if(c != '\n') {
            str[i] = c;
            j++;
        } else {
            str[i] = '\0';
            break;
        }
    }
    if(i == nchar) {
        str[nchar-1] = '\0';
        // limpar buffer teclado
        while ((c = getchar()) != '\n' && c != EOF);
    }
    return j; 
}

void counter(char * str, int nchar){
    int b=0,i=0;
    for(i;i<nchar;i++){
        while(((str[i]>='A')&&(str[i]<='Z'))||((str[i]>='a')&&(str[i]<='z'))||((str[i]>='0')&&(str[i]<='9'))||(str[i]=='-')){
            i++;
            continue;
        }
        if((str[i]==' ')&&((str[i+1]>='A')&&(str[i+1]<='Z'))||((str[i+1]>='a')&&(str[i+1]<='z'))||((str[i+1]>='0')&&(str[i+1]<='9'))||(str[i+1]=='-')){
            b++;
            i++;
        }
    }
    if(b!=0){
        b++;
    }
    printf("%d", b); 
}