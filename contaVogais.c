/*
Arquivo: contaVogais.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 09/12/2022
*/
#include <stdio.h>
#define N 1024

void getstr(char * str, long long int nchar);
void conta(char * str, long long int nchar);

int main(void){
    char txt[N] = {'x','x','x','x','x'};
    printf("Entre com um texto: ");
    getstr(txt, N);
    conta(txt, N);
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

void conta(char * str, long long int nchar){
    int k=0;
    for(long long int j = 0; j<nchar; j++){
        if (str[j] == 'a' || str[j] == 'e'
            || str[j] == 'i' || str[j] == 'o'
            || str[j] == 'u' || str[j] == 'A'
            || str[j] == 'E' || str[j] == 'I'
            || str[j] == 'O' || str[j] == 'U')
            k++;
    }
    printf("%d", k);
}