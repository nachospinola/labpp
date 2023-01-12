/*
Arquivo: somavetores.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 12/01/2023
*/
#include<stdio.h>
#include<stdlib.h>



int main(void){
    int *v;
    int *u;
    int *s;
    int n,m,i;
    int imp=1;
    int qua=0;
    printf("Digite o tamanho do primeiro vetor:\n");
    scanf("%d", &n);
    printf("Digite o tamanho do segundo vetor:\n");
    scanf("%d", &m);
    if(n!=m){
        printf("Erro!!!");
        return 0;
    }
    v=(int*) malloc(n*sizeof(int));
    u=(int*) malloc(m*sizeof(int));
    for(i=0;i<n;i++){
        v[i]=imp;
        imp=imp+2;
    }
    for(i=0;i<m;i++){
        u[i]=qua;
        qua=qua+4;
    }
    for(i=0;i<n;i++){
        s[i]=v[i]+u[i];
    }
    for(i=0;i<n;i++){
        printf("%d ", s[i]);
    }
    free(v);
    free(u);
    free(s);
    return 0;
}