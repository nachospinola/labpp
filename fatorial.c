/*
Arquivo: aritmInt.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 03/11/2022
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a, c=1;
    scanf("%d", &a);
    while(a>1){
        c=c*a;
        a--;
    }
    printf("%d\n", c);
    return 0;
}
