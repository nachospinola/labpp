/*
Arquivo: golomb.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 12/01/2023
*/
#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *v;
    int a,b,aux;
    printf("Digite A:\n");
    scanf("%d", &a);
    printf("Digite B:\n");
    scanf("%d", &b);
    if(b<a){aux=a;a=b;b=aux;}
    b++;
    v=(int*) malloc(b*sizeof(int));
    for(int i=0;1<b;i++){
        if(i==0){v[i]=1}
        else{
            
        }
    }




    return 0;
}

