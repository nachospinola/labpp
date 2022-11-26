/*
Arquivo: somaSeqHailst.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>
int main(void){
    int xn;
    printf("Digite um numero:\n");
    scanf("%d", &xn);
    int i=xn;
    if(xn==1){
        printf("%d", &xn);
        return 0;
    }
    while(xn!=1){
        if(xn%2==0){
            xn=(xn/2);
            i=i+xn;
        }
        else{
            xn=(3*xn)+1;
            i=i+xn;
        }
    }
    printf("%d", i);
    return 0;
}