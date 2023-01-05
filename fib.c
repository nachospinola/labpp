/*
Arquivo: fib.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 05/01/2023
*/
#include <stdio.h>
int fib(int n);
int main(void){
    int n;
    printf("Digite dois numeros:\n");
    scanf("%d", &n);
    int x=fib(n);
    printf("%d", x);
    return 0;
}
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1||n==2){
        return 1;
    }
    else{
        return (fib(n-1)+fib(n-2));
    }
}