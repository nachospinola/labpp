/*
Arquivo: somaGauss.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 03/11/2022
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a, b=1, c=0;
    printf("Digite um número maior que 1: \n");
    scanf("%d", &a);
    while(b<=a){
        c=c+b;
        b++;
    }
    printf("%d\n", c);





    return 0;
}
