/*
Arquivo: mdc.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 05/01/2023
*/
#include <stdio.h>
int mdc(int a, int b);
int main(void){
    int a,b;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a, &b);
    int x=mdc(a,b);
    printf("%d", x);


    return 0;
}

int mdc(int a, int b){
    if(b==0){
        return a;
    }
    else{
        mdc(b,(a%b));
    }
}