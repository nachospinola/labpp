/*
Arquivo: bin2dec.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 10/12/2022
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 1024

void getstr(char * str, long long int nchar);

int main(void){
    char bin[N]={'x','x','x','x','x'};;
    long long int dec;
    dec=0;
    long long int i=0;
    long long int len;
    printf("Escreva o numero em binario: ");
    getstr(bin,N);
    len=strlen(bin);
    
    while(len--){
        if(bin[len]=='0' || bin[len]=='1'){
            dec=dec+pow(2,i++) * (bin[len] - '0');
        }
    }

    printf("%llu", dec);
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