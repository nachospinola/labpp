/*
Arquivo: maxHappyPrime.c.c
Autor: Luiz Felipe Spinola Silva
Matrícula: 12121EBI001
Criado em: 24/11/2022
*/
#include <stdio.h>
int div(int a);
int happy(int a);
int main(void){
    int a;
    scanf("%d", &a);
    int j=a;
    while(j>=0){
        if(div(j)==2){
            if(happy(j)==1){
                printf("%d", j);
                return 0;
            }
        }
        j++;
    }
    printf("%s", "0***");
    return 0;
}
int div(int a){
    int j=1, d=0;
    while(j<=a){
        if(a%j==0){
            d++;
        }
        j++;
        if(d>2){
            return d;
        }
    }
    return d;
}
int happy(int a){
    int j=1;
    while(j<a){
        j=j*10;
        if(j>a){
            j=j/10;
            break;
        }
    }
    int n, sum=0; 
    while(j!=0){
        n=a/j;
        a=a%j;
        sum=sum+(n*n);
        j=j/10;
        if(j%1==1){
            j=0;
        }
    }
    if(sum==4){
        return 3;
    }
    if(sum==1){
        return 1;
    }
    else{
        if(happy(sum)==1){
            return 1;
        }
    }
    return 0;
}