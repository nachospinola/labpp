/*
Arquivo: maxHappyPrime.c.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool primo(int x);
bool happy(int y);
int main(void){
    int x, p, h;
    printf("Digite o numero: ");
    scanf("%d", &x);
    while(x!=0){
        p=0;
        h=0;
        p=primo(x);
        h=happy(x);
        if(p&&h){
            printf("%d", x);
            x=0;
        }
        else{
            x=x-1;
            if(x==0){
                printf("%d***", x);
            }
        }
    }
    return 0;
}
bool primo(int x){
    if(x==1){
        return false;
    }
    for(int i=2;i<x; i++){
        if((x%1)==0){
            return false;
        }
    }
    return true;
}
bool happy(int y){
    int d, sum=0;
    while(y>0){
        d=y%10;
        sum=sum+pow(d,2);
        y=y/10;
    }
    if(sum==4){
        return false;
    }
    else if(sum!=1){
        return happy(sum);
    }
    else{
        return true;
    }
}