/*
Arquivo: palindromo.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 10/12/2022
*/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define N 1024

void getstr(char * str, long long int nchar);
void upper(char * str);
void copy(char * str, char * str2, long long int nchar);
void inverser(char * str, char * str2, long long int nchar);

int main(void){
    char txt[N] = {'x','x','x','x','x'};
    char txtf[N];
    long long int g=0;
    long long int ecart=0;
    printf("Entre com um texto: ");
    getstr(txt, N);
    upper(txt);
    copy(txt,txtf,N);
    char copie[strlen(txtf)];
    inverser(txtf, copie, N);
    for(g;g<strlen(copie);g++){
        if(txtf[g] != copie[g]){
            ecart++;
        }
    }
    if(ecart==0){
        printf("Palindrono: Verdadeiro");
    }
    else{
        printf("Palindrono: Falso");
    }
    return 0;
}

void getstr(char * str, long long int nchar) {
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}

void upper(char * str) {
    long long int l = 0;
    while(str[l]) {
        if(str[l] >= 'a' && str[l] <= 'z')
            str[l] -= 'a' - 'A';
        l++;
    }
}

void copy(char * str, char * str2, long long int nchar){
    long long int i=0;
    long long int j=0;
    for(i;i<nchar;i++){
        if(str[i] != (' ') && str[i] != ('.') && 
        str[i] != (',') && str[i] != ('-') && str[i] != (':') &&
         str[i] != ('"')){
            str2[j++]=str[i];
         }
    }
    printf("%s", str2);
}

void inverser(char * str, char * str2, long long int nchar){
    long long int y=strlen(str);
    y--;
    long long int x = 0;
    for(y; y>=0 ;y--){
        str2[x]=str[y];
        x++;
    }
}
