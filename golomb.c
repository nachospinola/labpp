/*
Arquivo: golomb.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 12/01/2023
*/
#include<stdio.h>
#include<stdlib.h>

int golomb(int a);
double avg(int *v, int b);
int main(void){
    int *v;
    int a,b,aux;
    int i=0;
    double m;
    printf("Digite A:\n");
    scanf("%d", &a);
    printf("Digite B:\n");
    scanf("%d", &b);
    if(b<a){aux=a;a=b;b=aux;}
    b++;
    v=(int*) malloc(b*sizeof(int));
    while(a<b){
        v[i]=golomb(a);
        i++;
        a++;
    }
    m=avg(v,b);
    printf("primeiro:\n%d\n", v[0]);
    printf("ultimo:\n%d\n", v[b]);
    printf("media:\n%lg\n", m);
    free(v);
    return 0;
}

int golomb(int a){
    if(a==0){
        return 0;
    }
    else{
        return (1+golomb(a-golomb(golomb(a-1)-1)));
    }
}

double avg(int *v,int b){
    float m;
    for(int i=0;i<b;i++){
        m=m+v[i];
    }
    m=m/b;
    return m;
}


