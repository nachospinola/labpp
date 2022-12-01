/*
Arquivo: diferencas.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 01/12/2022
*/
#include <stdio.h>
float max(int N, float m[N]);
float min(int N, float m[N]);
int main(void){
    int N;
    float mi, ma;
    printf("Digite a quantidade de valores:\n");
    scanf("%d", &N);
    float l[N+1];
    float m[N];
    for(int i=0; i<N; i++){
        printf("Digite um numero:\n"); //for da lista 1
        scanf("%f", &l[i]);
    }
    for(int j=0; j<N-1; j++){
       m[j]=l[j+1]-l[j]; //for da lista 2
    }
    mi=min(N, m);
    ma=max(N,m);
    for(int k=0; k<N-1; k++){
        printf("%g, ", m[k]);
    }
    printf("%g, ",mi);
    printf("%g", ma);
    return 0;
}
float max(int N, float m[N]){
    int maxi=m[0];
    for(int i=0; i<N; i++){
        if(m[i]>maxi){
            maxi=m[i];
        }
    }
    return maxi;
}
float min(int N, float m[N]){
    int mini=m[0];
    for(int i=0; i<N; i++){
        if(m[i]<mini){
            mini=m[i];
        }
    }
    return mini;
}