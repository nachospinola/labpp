/*
Arquivo: fibonacci.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 04/11/2022
*/
#include <stdio.h>
int main(void){
    int x=0, y=1, tam, aux, aux2;
    printf("Digite um numero: \n");
    scanf("%d, ", &tam);
    if(tam>=0){
        printf("%d, ", x);
    }
    if(tam>=1){
        printf("%d, ", y);
    }
    for(aux2=3;aux2<=tam; aux2++){
        aux=x+y;
        x=y;
        y=aux;
        printf("%d, ", aux);
    }
    printf("...");
    return 0;
}