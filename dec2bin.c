/*
Arquivo: dec2bin.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 10/12/2022
*/
#include <stdio.h>

void con(long long int x);

int main(void){
    long long int num;
    printf("Digite abaixo o numero decimal:\n");
    scanf("%llu", &num);
    con(num);
    
    return 0;
}

void con(long long int x){
    if(x !=0){
        con(x/2);
        printf("%d", x%2);
    }
}
