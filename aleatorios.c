/*
Arquivo: aleatorios.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 12/01/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min(int *v, int n);
int max(int *v, int n);
int avg(int *v, int n);

int main(void){
    int n, mini, maxi;
    double avge=0;
    printf("Digite o numero de elementos:\n");
    scanf("%d%*c", &n);
    int * v;
    v=(int *) malloc(n*sizeof(int));
    srand(n);
    for(int i=0;i<n;i++){
        v[i]=rand() % n;
    }
    mini=min(v,n);
    maxi=max(v,n);
    avge=avg(v,n);
    printf("minimo: %d\nmaximo: %d\nmedia: %lg\n", mini, maxi, avge/n);
    free(v);
    return 0;
}

int min(int *v, int n){
    int min=v[0];
    for(int i=0;i<n;i++){
        if(v[i]<min){
            min=v[i];
        }
    }
    return min;
}

int max(int *v, int n){
    int max=v[0];
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}

int avg(int *v, int n){
    int j=v[0];
    for(int i=0; i<n;i++){
        j += v[i];
    }
    return j;
}