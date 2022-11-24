/*
Arquivo: divisores.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>

void divisor (int a);
int main(void){
    int a;
    printf("Digite o numero:\n");
    scanf("%d", &a);
    divisor(a);
    return 0;
}

void divisor (int a) {
    for(int i=1;i<=a;i++){
        if(a%i==0){
            printf("%d", i);
        }
    }
}