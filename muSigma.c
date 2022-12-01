/*
Arquivo: muSigma.c
Nome: Luiz Felipe Spinola Silva
Matricula: 12121EBI001
Criado em 01/12/2022
*/
#include <stdio.h>
#include <math.h>
float media(int N, float L[N]);
float des(int N, float L[N], float m);
int main(void){
    int N;
    float avg;
    float dvg;
    printf("Digite a quantidade de valores:\n");
    scanf("%d", &N);
    float L[N];
    for(int i=0; i<N; i++){
        printf("Digite um numero:\n"); //for da lista
        scanf("%f", &L[i]);
    }
    avg=media(N,L);
    dvg=des(N,L,avg);
    printf("media %g, ", avg);
    printf("desvio %g", dvg);
    return 0;
}
float media(int N, float L[N]){
    float m=0;
    for(int i=0; i<=N-1; i++){
        m=m+L[i];
    }
    m=m/(N);
    return m;
}
float des(int N, float L[N], float m){
    float d=0;
    float des;
    for(int i=0; i<=N-1; i++){
        d=d+pow((L[i]-m), 2);
    }
    des=sqrt(d/N);
    return des;
}