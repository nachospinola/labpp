/*
Arquivo: somaSeqHailst.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>
int main(void){
    int u=5, i=0, xn;
    printf("Digite um numero:\n");
    scanf("%d", &xn);
    if(xn==1){
        u++;
    }
    while(xn!=1){
        if(xn%2==0){
            i=i+(xn/2);
            xn=xn/2;
        }
        if(xn%2!=0){
            i=i+((3*xn)+1);
            xn=(3*xn)+1;
        }
    }
    if(u==5){
        printf("%d", i+1);
    }
    if(u==6){
        printf("%d", xn);
    }
    return 0;
}