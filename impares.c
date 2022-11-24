/*
Arquivo: dist.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>
int main(void){
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    for (int i=a;i<b;i++){
        if(i%2!=0){
            printf("%d, ", i);
        }
    }
    if(b%2!=0){
        printf("%d", b);
    }
    return 0;
}