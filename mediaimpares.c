/*
Arquivo: mediaimpares.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 12/01/2023
*/
#include<stdio.h>
#include<stdlib.h>

double media(int*v, int n);

int main(void){
    int *v;
    int n;
    int p;
    printf("Digite a quantidade de componentes:\n");
    scanf("%d", &n);
    v=(int*) malloc(n*sizeof(int));
    printf("digite o elemento inicial:\n");
    scanf("%d", &p);
    if((p)%(2)!=0){
        p--;
    }
    for(int i=0;i<n;i++){
        v[i]=p+1;
        p=p+2;
    }
    double med=media(v,n);
    printf("penultimo elemento:\n%d\n", v[n-2]);
    printf("media:\n%lg", med);
    free(v);
    return 0;
}

double media(int*v, int n){
    int j=0;
    int s=0;
    for(j;j<n;j++){
        s=s+v[j];
    }
    s=s/n;
    return s;
}