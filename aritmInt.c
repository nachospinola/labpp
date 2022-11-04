/*
Arquivo: aritmInt.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 03/11/2022
*/
#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a, b;
    printf("digite dois numeros: \n");
    scanf("%d %d", &a, &b);
    printf("%d + %d= %d\n", a, b, a+b);
    printf("%d - %d= %d\n", a, b, a-b);
    printf("%d * %d= %d\n", a, b, a*b);
    printf("%d / %d= %d\n", a, b, a/b);
    printf("%d %% %d= %d\n", a, b, a%b);
    return 0;
}
