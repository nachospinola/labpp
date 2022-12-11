/*
Arquivo: dec2bin.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 10/12/2022
*/
#include <stdio.h>
#define N 1024

void converte(unsigned x, unsigned a[N]);
void scan(unsigned a[N]);

int main(void){
    unsigned num;
    unsigned vet[N];
    printf("Digite abaixo o numero decimal:\n");
    scanf("%llu", &num);
    converte(num,vet);
    scan(vet);
    
    return 0;
}

void converte(unsigned x, unsigned a[]){
    unsigned i;
    unsigned j;
    for(i=x, j=0;(i/2)==0; (i/2), j++){
        a[j]=(i%2);
    }
}

void scan(unsigned a[N]){
    unsigned i=N-1;
    for(i; i>=0; i--){
        printf("%llu", a[i]);
    }
}