/*
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 04/11/2022
*/
#include<stdio.h>
int main(void){
    int a, b=1, c=0;
    printf("Digite um número: \n");
    scanf("%d", &a);
    for(b; b<=a; b++){
        if(a%b==0){
            c=c+b;
        }
    }
    printf("%d", c);
    return 0;
}