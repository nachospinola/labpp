/*
Arquivo: palindromo.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 10/12/2022
*/
#include <stdio.h>
#include <string.h>
#define N 1024

void getstr(char * str, long long int nchar);
void upper(char * str);
void rev(char * str, long long int nchar);
void pal(char * str, char * str2);

int main(void){
    char txt[N] = {'x','x','x','x','x'};
    char txt2[N];
    printf("Entre com um texto: ");
    getstr(txt, N);
    upper(txt);
    strcpy(txt2, txt);
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

void rev(char * str, long long int nchar){
    long long int i = nchar - 1;
    for(i; i>=0; i--){
        printf("%c", str[i]);
    }
}