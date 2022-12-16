/*
Arquivo: contaCaracteres.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 10/12/2022
*/
#include <stdio.h>
#define N 606

int getstr(char * str, int nchar);
void counter(char * str, int nchar);

int main(void){
    char txt[N];
    printf("Digite um texto: ");
    for(int f=0;f<N;f++){
        txt[f]='\0';
    }
    int c=getstr(txt,N);
    counter(txt,c);
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
    int ecr=0, di=0, alt=0;
    for(int k=0;k<nchar;k++){
        if(((str[k]>='A')&&(str[k]<='Z'))||((str[k]>='a')&&(str[k]<='z'))){
            ecr++;
        }
        else if((str[k]>='0')&&(str[k]<='9')){
            di++;
        }
        else{
            alt++;
        }
    }
    printf("letras: %d digitos: %d outros: %d", ecr,di,alt);
}